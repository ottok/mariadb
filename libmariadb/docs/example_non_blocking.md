## Example

To do non-blocking operation, an application first calls `mysql_real_query_start()` instead of `mysql_real_query()`, passing the same parameters.

If `mysql_real_query_start()` returns zero, then the operation completed without blocking, and 'status' is set to the value that would normally be returned from `mysql_real_query()`.

Else, the return value from `mysql_real_query_start()` is a bitmask of events that the library is waiting on. This can be `MYSQL_WAIT_READ`, `MYSQL_WAIT_WRITE`, or `MYSQL_WAIT_EXCEPT`, corresponding to the similar flags for `select()` or `poll()`; and it can include `MYSQL_WAIT_TIMEOUT` when waiting for a timeout to occur (e.g. a connection timeout).

In this case, the application continues other processing and eventually checks for the appropriate condition(s) to occur on the socket (or for timeout). When this occurs, the application can resume the operation by calling `mysql_real_query_cont()`, passing in 'wait_status' a bitmask of the events which actually occurred.

Just like mysql_real_query_start(), mysql_real_query_cont() returns zero when done, or a bitmask of events it needs to wait on. Thus the application continues to repeatedly call mysql_real_query_cont(), intermixed with other processing of its choice; until zero is returned, after which the result of the operation is stored in 'status'.

Some calls, like `mysql_optionsv()`, do not do any socket I/O, and so can never block. For these, there are no separate _start() or _cont() calls. See the "Non-blocking API reference" page for a full list of what functions can and can not block.

The checking for events on the socket / timeout can be done with `select()` or `poll()` or a similar mechanism. Though often it will be done using a higher-level framework (such as libevent), which supplies facilities for registering and acting on such conditions.

The descriptor of the socket on which to check for events can be obtained by calling `mysql_get_socket()`. The duration of any timeout can be obtained from `mysql_get_timeout_value()`.

Here is a trivial (but full) example of running a query with the non-blocking API. The example is found in the MariaDB server source tree as `client/async_example.c`. (A larger, more realistic example using libevent is found as tests/async_queries.c in the source):

```C
static void run_query(const char *host, const char *user, const char *password) {
  int err, status;
  MYSQL mysql, *ret;
  MYSQL_RES *res;
  MYSQL_ROW row;

  mysql_init(&mysql);
  mysql_options(&mysql, MYSQL_OPT_NONBLOCK, 0);

  status = mysql_real_connect_start(&ret, &mysql, host, user, password, NULL, 0, NULL, 0);
  while (status) {
    status = wait_for_mysql(&mysql, status);
    status = mysql_real_connect_cont(&ret, &mysql, status);
  }

  if (!ret)
    fatal(&mysql, "Failed to mysql_real_connect()");

  status = mysql_real_query_start(&err, &mysql, SL("SHOW STATUS"));
  while (status) {
    status = wait_for_mysql(&mysql, status);
    status = mysql_real_query_cont(&err, &mysql, status);
  }
  if (err)
    fatal(&mysql, "mysql_real_query() returns error");

  /* This method cannot block. */
  res= mysql_use_result(&mysql);
  if (!res)
    fatal(&mysql, "mysql_use_result() returns error");

  for (;;) {
    status= mysql_fetch_row_start(&row, res);
    while (status) {
      status= wait_for_mysql(&mysql, status);
      status= mysql_fetch_row_cont(&row, res, status);
    }
    if (!row)
      break;
    printf("%s: %s\n", row[0], row[1]);
  }
  if (mysql_errno(&mysql))
    fatal(&mysql, "Got error while retrieving rows");
  mysql_free_result(res);
  mysql_close(&mysql);
}

/* Helper function to do the waiting for events on the socket. */
static int wait_for_mysql(MYSQL *mysql, int status) {
  struct pollfd pfd;
  int timeout, res;

  pfd.fd = mysql_get_socket(mysql);
  pfd.events =
    (status & MYSQL_WAIT_READ ? POLLIN : 0) |
    (status & MYSQL_WAIT_WRITE ? POLLOUT : 0) |
    (status & MYSQL_WAIT_EXCEPT ? POLLPRI : 0);
  if (status & MYSQL_WAIT_TIMEOUT)
    timeout = 1000*mysql_get_timeout_value(mysql);
  else
    timeout = -1;
  res = poll(&pfd, 1, timeout);
  if (res == 0)
    return MYSQL_WAIT_TIMEOUT;
  else if (res < 0)
    return MYSQL_WAIT_TIMEOUT;
  else {
    int status = 0;
    if (pfd.revents & POLLIN) status |= MYSQL_WAIT_READ;
    if (pfd.revents & POLLOUT) status |= MYSQL_WAIT_WRITE;
    if (pfd.revents & POLLPRI) status |= MYSQL_WAIT_EXCEPT;
    return status;
  }
}
```
