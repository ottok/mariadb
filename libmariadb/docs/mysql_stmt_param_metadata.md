## Name
mysql_stmt_param_metadata - This function does nothing!

## Synopsis
```C
#include <mysql.h>

MYSQL_RES * mysql_stmt_param_metadata(MYSQL_STMT * stmt);
```

## Description
This function does nothing, it's not implemented now and reserved for future use.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
Always returns `NULL`.
