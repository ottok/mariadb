## Name

mysql_error - returns the last error message for the most recent function call

## Synopsis
```C
#include <mysql.h>

const char * mysql_error(MYSQL * mysql);
```

## Description
Returns the last error message for the most recent function call that can succeed or fail. An empty string means no error occurred.

### Parameter
* `mysql` is a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
* Client error codes are listed in `errmsg.h` header file, server error codes are listed in `mysqld_error.h` header file of the server source distribution.
* Client error messages can be obtained by calling [mariadb_get_infov()](mariadb_get_infov) and passing the parameter `MARIADB_CLIENT_ERRORS`

## See also
* [mysql_errno()](mysql_errno)
* [mysql_sqlstate()](mysql_sqlstate)