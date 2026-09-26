## Name
mysql_fetch_fields - returns an array of fields 

## Synopsis
```C
#include <mysql.h>

MYSQL_FIELD * mysql_fetch_fields(MYSQL_RES * res);
```

## Description

This function serves an identical purpose to the [mysql_fetch_field()](mysql_fetch_field) function with the single difference that instead of returning one field at a time for each field, the fields are returned as an array. Each field contains the definition for a column of the result set.

### Parameters
* `res` - a result set identifier returned by [mysql_store_result()](mysql_store_result) or [mysql_use_result()](mysql_use_result).

### Notes
The total number of fields can be obtained by [mysql_field_count()](mysql_field_count).

## Return value
an array of type `MYSQL_FIELD`.

## See also
* [mysql_fetch_field()](mysql_fetch_field)
* [mysql_fetch_field_direct()](mysql_fetch_field_direct)
* [mysql_field_count()](mysql_field_count)
