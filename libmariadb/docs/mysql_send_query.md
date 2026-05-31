## Name
mysql_send_query - sends a SQL statement without waiting for server response

## Synopsis
```C
#include <mysql.h>

int mysql_send_query(MYSQL * mysql,
                     const char *query,
                     unsigned long length);
```

## Description
Sends a statement to the server, without waiting for the Server OK packet and/or resultset.

### Parameters
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
* `query` - SQL statement
* `length` - length of the SQL statement

### Notes
* The OK and result set package need to be retrieved by [mysql_read_query_result()](mysql_read_query_result) function
* `mysql_send_query()` can be used for semi asynchronous operation. While the function itself is blocking, an event driven application can do other tasks until result set is available.

## Example
For an example how to use 'mysql_send_query()` in an event driven model, please check Jan Kneschke's article ["Async MySQL Queries with C-API"](https://jan.kneschke.de/projects/mysql/async-mysql-queries-with-c-api/).

## See also
* [mysql_real_query](mysql_real_query)
* [mysql_read_query_result](mysql_read_query_result)
