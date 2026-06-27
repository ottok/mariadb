## Name
mysql_row_tell - Returns row offset of a result cursor

## Synopsis
```C
#include <mysql.h>

MYSQL_ROW_OFFSET mysql_row_tell(MYSQL_RES * res);
```

## Description
Returns the row offset of a result cursor. The returned offset value can be used to reposition the result cursor by calling [mysql_row_seek()](mysql_row_seek).

### Parameter
* `res` - a result set identifier returned by [mysql_store_result()](mysql_store_result).

### Notes
* This function will not work if the result set was obtained by [mysql_use_result()](mysql_use_result).


## See also
* [mysql_store_result()](mysql_store_result)
* [mysql_row_seek()](mysql_row_seek)
