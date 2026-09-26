## Name
mysql_field_tell -  Returns offset of the field cursor

## Synopsis
```C
#include <mysql.h>

MYSQL_FIELD_OFFSET mysql_field_tell(MYSQL_RES * result);
```

## Description
Return the offset of the field cursor used for the last [mysql_fetch_field()](mysql_fetch_field) call. This value can be used as a parameter for the function  [mysql_field_seek()](mysql_field_seek).

### Parameter
* `result` - a result set identifier returned by [mysql_store_result()](mysql_store_result) or [mysql_use_result()](mysql_use_result).

## Return value
Returns the current offset of the field cursor

## See also
* [mysql_field_seek()](mysql_field_seek)
