## Name
mysql_row_seek - Positions the row cursor to an arbitrary row

## Synopsis
```C
#include <mysql.h>

MYSQL_ROW_OFFSET mysql_row_seek(MYSQL_RES * result,
                                MYSQL_ROW_OFFSET offset);
```

## Description
Positions the row cursor to an arbitrary row in a result set which was obtained by [mysql_store_result()](mysql_store_result).

### Parameter
* `result` - a result set identifier returned by [mysql_store_result()](mysql_store_result).
* `offset` - row offset. This value can be obtained either by mysql_row_seek() or [mysql_row_tell()](mysql_row_tell)

### Notes
* This function will not work if the result set was obtained by [mysql_use_result()](mysql_use_result).

## Return value
Returns the previous row offset.

## See also
* [mysql_store_result()](mysql_store_result)
* [mysql_row_tell()](mysql_row_tell)
