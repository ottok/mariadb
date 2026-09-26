## Name
mysql_stmt_reset - Resets a prepared statement

## Synopsis
```C
#include <mysql.h>

my_bool mysql_stmt_reset(MYSQL_STMT * stmt);
```

## Description
Resets a prepared statement on client and server to state after prepare.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init). Returns zero on success, nonzero if an error occurred.

## Return value
Returns zero on success, 1 if an error occurred.

## Notes
* `mysql_stmt_reset()` resets the statement on the server, unbuffered result sets and errors. Bindings and stored result sets will not be cleared. The latter one will be cleared when re-executing or closing the prepared statement.
* To reprepare a prepared statement with another SQL statement use [mysql_stmt_prepare()](mysql_stmt_prepare).

## See Also
* [mysql_stmt_close()](mysql_stmt_close)
* [mysql_stmt_prepare()](mysql_stmt_prepare)
* [mysql_stmt_execute()](mysql_stmt_execute)
