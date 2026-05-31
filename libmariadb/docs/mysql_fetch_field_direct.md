## Name
mysql_fetch_field_direct - Returns a pointer to a MYSQL_FIELD structure

## Synopsis
```C
#include <mysql.h>

MYSQL_FIELD * mysql_fetch_field_direct(MYSQL_RES * res,
                                       unsigned int fieldnr);
```


## Description
Returns a pointer to a `MYSQL_FIELD` structure which contains field information from the specified result set.
### Parameter
* `res`  - a result set identifier returned by [mysql_store_result()](mysql_store_result) or [mysql_use_result()](mysql_use_result).
* `fieldnr` - the field number. This value must be within the range from 0 to number of fields - 1
### Notes
* The total number of fields can be obtained by mysql_field_count()


## Return value
Pointer to a `MYSQL_FIELD` structure or `NULL` if an invalid field number was specified

## See also
* [mysql_fetch_field()](mysql_fetch_field)
* [mysql_field_count()](mysql_field_count)
