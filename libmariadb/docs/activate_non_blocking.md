## Activating non blocking mode

Before using any non-blocking operation, it is necessary to enable it first by setting the `MYSQL_OPT_NONBLOCK` option via [mysql_optionsv()](mysql_optionsv) api function:

```C
mysql_optionsv(mysql, MYSQL_OPT_NONBLOCK, 0);
```

This call can be made at any time — typically it will be done at the start, before `mysql_real_connect()`, but it can be done at any time to start using non-blocking operations.

If a non-blocking operation is attempted without setting the `MYSQL_OPT_NONBLOCK` option, the program will typically crash with a NULL pointer exception.

The argument for `MYSQL_OPT_NONBLOCK` is the size of the stack used to save the state of a non-blocking operation while it is waiting for I/O and the application is doing other processing. Normally, applications will not have to change this, and it can be passed as zero to use the default value.

### Mixing blocking and non-blocking operation

It is possible to freely mix blocking and non-blocking calls on the same MYSQL connection.

Thus, an application can do a normal blocking `mysql_real_connect()` and subsequently do a non-blocking `mysql_real_query_start()`. Or vice versa, do a non-blocking `mysql_real_connect_start()`, and later do a blocking `mysql_real_query()` on the resulting connection.

Mixing can be useful to allow code to use the simpler blocking API in parts of the program where waiting is not a problem. For example establishing the connection(s) at program startup, or doing small quick queries between large, long-running ones.

The only restriction is that any previous non-blocking operation must have finished before starting a new blocking (or non-blocking) operation, see the next section: "Terminating a non-blocking operation early" below.

### Terminating a non-blocking operation early

When a non-blocking operation is started with `mysql_real_query_start()` or another `_start()` function, it must be allowed to finish before starting a new operation. Thus, the application must continue calling 'mysql_real_query_cont()` until zero is returned, indicating that the operation is completed. It is not allowed to leave one operation "hanging" in the middle of processing and then start a new one on top of it.

It is, however, permissible to terminate the connection completely with `mysql_close()` in the middle of processing a non-blocking call. A new connection must then be initiated with `mysql_real_connect()` before new queries can be run, either with a new MYSQL object or re-using the old one.

In the future, we may implement an abort facility to force an on-going operation to terminate as quickly as possible (but it will still be necessary to call `mysql_real_query_cont()` one last time after abort, allowing it to clean up the operation and return immediately with an appropriate error code).
