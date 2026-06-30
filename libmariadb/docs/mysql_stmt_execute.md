## Name
mysql_stmt_execute - Executes a prepared statement

## Synopsis
```C
#include <mysql.h>

int mysql_stmt_execute(MYSQL_STMT * stmt);
```

## Description
Executes a prepared statement which was previously prepared by [mysql_stmt_prepare()](mysql_stmt_prepare). When executed any parameter markers which exist will automatically be replaced with the appropriate data.

## Parameter
* `stmt` - A statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
Returns zero on success, non-zero on failure.

## Notes
* If the statement is UPDATE, REPLACE, DELETE or INSERT, the total number of affected rows can be determined by using the [mysql_stmt_affected_rows()](mysql_stmt_affected_rows) function. Likewise, if the query yields a result set the [mysql_stmt_fetch()](mysql_stmt_fetch) function is used.


## See Also
* [mariadb_stmt_execute_direct()](mariadb_stmt_execute_direct)
* [mysql_stmt_prepare()](mysql_stmt_prepare)
* [mysql_stmt_bind_param()](mysql_stmt_bind_param)
