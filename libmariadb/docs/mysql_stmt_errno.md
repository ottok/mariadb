## Name
mysql_stmt_errno - Returns error code for the last statement error 

## Synopsis
```C
#include <mysql.h>

unsigned int mysql_stmt_errno(MYSQL_STMT * stmt);
```

## Description
Returns the error code for the most recently invoked statement function that can succeed or fail.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
Returns error code. A zero value means that no error occurred.

## Notes
* Client error messages are listed in `errmsg.h` header file, server error messages are listed in `mysqld_error.h` header file of the server source distribution.

## See Also
* [mysql_stmt_error()](mysql_stmt_error),
* [mysql_stmt_sqlstate()](mysql_stmt_sqlstate)
