## Name
mysql_read_query_result - waits for a server result or response package

## Synopsis
```C
#include <mysql.h>

my_bool mysql_read_query_result(MYSQL * mysql);
```

## Description
Waits for a server result set or response package from a previously executed [mysql_send_query()](mysql_send_query).

### Parameters
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

## Return value
Zero on success, non zero on error.

## Example
For an example how to use 'mysql_send_query()` in an event driven model, please check Jan Kneschke's Blog entry ["Async MySQL Queries with C-API"](https://jan.kneschke.de/projects/mysql/async-mysql-queries-with-c-api/).

## See also
* [mysql_real_query()](mysql_real_query)
* [mysql_send_query()](mysql_send_query)
