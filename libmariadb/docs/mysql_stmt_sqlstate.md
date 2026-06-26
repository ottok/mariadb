## Name
mysql_stmt_sqlstate - Returns SQLSTATE error from previous statement operation.

## Synopsis
```C
#include <mysql.h>

const char * mysql_stmt_sqlstate(MYSQL_STMT * stmt);
```


## Description
Returns a string containing the SQLSTATE error code for the most recently invoked prepared statement function that can succeed or fail. 
## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).
## Return value
Returns a 5 digit error code. '00000' means no error. The values are specified by ANSI SQL and ODBC.

## Notes
Please note that not all client library error codes are mapped to SQLSTATE errors. Errors which can't be mapped will returned as value HY000.

## See Also
* [mysql_stmt_errno()](mysql_stmt_errno)
* [mysql_stmt_error()](mysql_stmt_error)
