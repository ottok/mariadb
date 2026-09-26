## Name
mysql_stmt_row_tell - Returns position of row cursor 

## Synopsis
```C
#include <mysql.h>

MYSQL_ROW_OFFSET mysql_stmt_row_tell(MYSQL_STMT * stmt);
```


## Description

Returns the row offset of a result cursor. The returned offset value can be used to reposition the result cursor by calling [mysql_stmt_row_seek()](mysql_stmt_row_seek).

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
Returns the current position of the row cursor.

## Notes
* This function can be used for buffered result sets only, which can be obtained by executing the [mysql_stmt_store_result()](mysql_stmt_store_result) function.


## See Also
* [mysql_stmt_row_seek()](mysql_stmt_row_seek)
* [mysql_stmt_store_result()](mysql_stmt_store_result)
