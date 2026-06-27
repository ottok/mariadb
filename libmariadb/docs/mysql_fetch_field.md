## Name
mysql_fetch_field - Returns the definition of one column of a result set

## Synopsis
```C
#include <mysql.h>

MYSQL_FIELD * mysql_fetch_field(MYSQL_RES * result);
```

## Description

Returns the definition of one column of a result set as a pointer to a MYSQL_FIELD structure. Call this function repeatedly to retrieve information about all columns in the result set.

### Parameters
* `result`  - a result set identifier returned by [mysql_store_result()](mysql_store_result) or [mysql_use_result()](mysql_use_result).

### Notes
* The field order will be reset if you execute a new SELECT query.
* In case only information for a specific field is required the field can be selected by using the [mysql_field_seek()](mysql_field_seek) function or obtained by [mysql_fetch_field_direct()](mysql_fetch_field_direct) function.

## Return value
a pointer of a `MYSQL_FIELD` structure, or NULL if there are no more fields.

## See also
* [mysql_field_seek()](mysql_field_seek)
* [mysql_field_tell()](mysql_field_tell)
* [mysql_fetch_field_direct()](mysql_fetch_field_direct)
* [mysql_store_result()](mysql_store_result)
* [mysql_use_result()](mysql_use_result)
