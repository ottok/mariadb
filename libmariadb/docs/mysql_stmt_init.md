## Name
mysql_stmt_init - Initializes a prepared statement handle

## Synopsis
```C
#include <mysql.h>

MYSQL_STMT * mysql_stmt_init(MYSQL * mysql);
```

## Description
Initializes and allocates memory for a prepared statement.

## Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

## Return value
Returns a pointer to a `MYSQL_STMT` structure or `NULL` if an error occurred.

## Notes
* Members of the `MYSQL_STMT` structure are not intended for application use.
* A statement handle which was allocated by mysql_stmt_init() needs to be freed with [mysql_stmt_close()](mysql_stmt_close).
* Any subsequent calls to any mysql_stmt function will fail until [mysql_stmt_prepare()](mysql_stmt_prepare) was called.

## See Also
* [mysql_stmt_close()](mysql_stmt_close)
* [mysql_stmt_prepare()](mysql_stmt_prepare)
