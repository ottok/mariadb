## Name
mysql_stmt_store_result - Transfers a result set from a prepared statement

## Synopsis
```C
#include <mysql.h>

int mysql_stmt_store_result(MYSQL_STMT * stmt);
```


## Description
You must call mysql_stmt_store_result() for every query that successfully produces a result set only if you want to buffer the complete result set by the client, so that the subsequent [mysql_stmt_fetch()](mysql_stmt_fetch) call returns buffered data.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
Returns zero on success, nonzero if an error occurred.
## Notes
* You can detect whether the statement produced a result set by checking the return value of [mysql_stmt_field_count()](mysql_stmt_field_count) function.


## See Also
* [mysql_stmt_field_count()](mysql_stmt_field_count)
* [mysql_stmt_fetch()](mysql_stmt_fetch)
