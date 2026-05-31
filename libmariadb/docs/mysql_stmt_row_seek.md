## Name
mysql_stmt_row_seek - Positions row cursor.

## Synopsis
```C
#include <mysql.h>

MYSQL_ROW_OFFSET mysql_stmt_row_seek(MYSQL_STMT * stmt,
                                     MYSQL_ROW_OFFSET offset);
```

## Description
Positions the row cursor to an arbitrary row in a result set which was obtained by [mysql_stmt_store_result()](mysql_stmt_store_result).

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).
* `offset` - row offset. This value can be obtained either by mysql_stmt_row_seek() or [mysql_stmt_row_tell()](mysql_stmt_row_tell).

## Return value
Returns the previous row offset.

## Notes
The result set must be obtained by [mysql_use_result()](mysql_use_result).


## See Also
* [mysql_stmt_row_tell()](mysql_stmt_row_tell)
* [mysql_stmt_store_result()](mysql_stmt_store_result)
