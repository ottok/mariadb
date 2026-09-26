## Name

mysql_errno - returns the last error code for the most recent function call

## Synopsis
```C
#include <mysql.h>

unsigned int mysql_errno(MYSQL * mysql);
```

## Description
Returns the last error code for the most recent function call that can succeed or fail. Zero means no error occurred.

### Parameter
* `mysql` is a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
* Client error codes are listed in `errmsg.h` header file, server error codes are listed in `mysqld_error.h` header file of the server source distribution.

## See also
* [mysql_error()](mysql_error)
* [mysql_sqlstate()](mysql_sqlstate)