## Name
mysql_stmt_error - Returns a string description for the last statement error

## Synopsis
```C
#include <mysql.h>

const char * mysql_stmt_error(MYSQL_STMT * stmt);
```

## Description
Returns a string containing the error message for the most recently invoked statement function that can succeed or fail. The string will be empty if no error occurred.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
* A string describing the last error or an empty string if no error occurred.

## Notes
* Client error messages are listed in the `errmsg.h` header file, server error messages are listed in the `mysqld_error.h` header file of the server source distribution.


## See Also
* [mysql_stmt_errno()](mysql_stmt_errno)
* [mysql_stmt_sqlstate()](mysql_stmt_sqlstate)
