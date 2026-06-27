## Name
mysql_stmt_free_result - Frees stored result set memory of a prepared statement

## Synopsis
```C
#include <mysql.h>

void mysql_stmt_free_result(MYSQL_STMT * stmt);
```

## Description
Frees stored result memory of a prepared statement.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
Returns void

## See Also
* [mysql_stmt_store_result()](mysql_stmt_store_result)
