## Name
mysql_field_seek - sets the field cursor to given offset

## Synopsis
```C
#include <mysql.h>

MYSQL_FIELD_OFFSET mysql_field_seek(MYSQL_RES * result,
                                    MYSQL_FIELD_OFFSET offset);
```


## Description
Sets the field cursor to the given offset. The next call to [mysql_fetch_field()](mysql_fetch_field) will retrieve the field definition of the column associated with that offset.

### Parameters
* `result` - a result set identifier returned by [mysql_store_result()](mysql_store_result) or [mysql_use_result()](mysql_use_result).
* `offset` - the field number. This number must be in the range from `0`..`number of fields - 1`.

### Notes

* The number of fields can be obtained from [mysql_field_count()](mysql_field_count)
.
* To move the field cursor to the first field offset parameter should be zero.

## Return value
Returns the previous value of the field cursor

## See also
* [mysql_field_tell()](mysql_field_tell)
