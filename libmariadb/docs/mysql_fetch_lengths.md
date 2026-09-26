## Name
mysql_fetch_lengths - returns an array of length values for the current row

## Synopsis
```C
#include <mysql.h>

unsigned long * mysql_fetch_lengths(MYSQL_RES * result);
```



## Description
The `mysql_fetch_lengths()` function returns an array containing the lengths of every column of the current row within the result set (not including terminating zero character) or `NULL` if an error occurred.

### Parameter
* `result`  - a result set identifier returned by [mysql_store_result()](mysql_store_result) or [mysql_use_result()](mysql_use_result).
### Notes
`mysql_fetch_lengths()` is valid only for the current row of the result set. It returns `NULL` if you call it before calling [mysql_fetch_row()](mysql_fetch_row) or after retrieving all rows in the result.

## Return value
An array of unsigned long values . The size of the array can be determined by the number of fields in current result set.

## See also

* [mysql_field_count()](mysql_field_count)
* [mysql_fetch_row()](mysql_fetch_row)
