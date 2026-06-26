## Name
mysql_stmt_data_seek - Seeks to an arbitrary row in statement result set

## Synopsis
```C
#include <mysql.h>

void mysql_stmt_data_seek(MYSQL_STMT * stmt,
                          my_ulonglong offset);
```
## Description
Seeks to an arbitrary row in statement result set obtained by a previous call to [mysql_stmt_store_result()](mysql_stmt_store_result).

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).
* `offset` - row offset. This value must between 0 and number of rows - 1.

## Return value
Returns void

## Notes
* The number of rows can be obtained with the function [mysql_stmt_num_rows()](mysql_stmt_num_rows).

## See Also
* [mysql_stmt_row_tell()](mysql_stmt_row_tell)
* [mysql_stmt_store_result()](mysql_stmt_store_result)
* [mysql_stmt_num_rows()](mysql_stmt_num_rows)
