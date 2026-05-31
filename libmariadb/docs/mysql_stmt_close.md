## Name
mysql_stmt_close - Closes a prepared statement

## Synopsis
```C
#include <mysql.h>

my_bool mysql_stmt_close(MYSQL_STMT * stmt);
```

## Description
Closes a prepared statement and deallocates the statement handle. If the current statement has pending or unread results, this function cancels them so that the next query can be executed.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
Returns zero on success, nonzero on error (when communicating with the server). The statement is deallocated, regardless of the error.

## Notes
* If you want to reuse the statement handle with a different SQL command, use [mysql_stmt_reset()](mysql_stmt_reset).

## See Also
* [mysql_stmt_init()](mysql_stmt_init)
* [mysql_stmt_reset()](mysql_stmt_reset)
