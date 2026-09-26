## Name
mysql_get_timeout_value - Returns the timeout value for asynchronous operations in seconds.

## Synopsis
```C
#include <mysql.h>

unsigned int mysql_get_timeout_value(const MYSQL *mysql);
```

## Description
Returns the timeout value for asynchronous operations in seconds.

### Parameter
* `mysql` - a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
This function is deprecated. Please use [mariadb_get_infov()](mariadb_get_infov) with option `MARIADB_CONNECTION_ASYNC_TIMEOUT` instead.

## Return value
Time out value in seconds.

## See also
* [mysql_get_timeout_value_ms()](mysql_get_timeout_value_ms)
