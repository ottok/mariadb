## Name
mysql_fetch_row - fetches row of data from result set

## Synopsis
```C
#include <mysql.h>

MYSQL_ROW mysql_fetch_row(MYSQL_RES * result);
```


## Description
Fetches one row of data from the result set and returns it as an array of char pointers (`MYSQL_ROW`), where each column is stored in an offset starting from 0 (zero). Each subsequent call to this function will return the next row within the result set, or NULL if there are no more rows.

### Parameter
* `result` - a result set identifier returned by [mysql_store_result()](mysql_store_result) or [mysql_use_result()](mysql_use_result).

### Notes
* If a column contains a `NULL` value the corresponding char pointer will be set to `NULL`.
* Memory associated to `MYSQL_ROW` will be freed when calling [mysql_free_result()](mysql_free_result) function.


## Return value
A `MYSQL_ROW` structure (array of character pointers) representing the data of the current row. If there are no more rows available `NULL`will be returned.

## See also
* [mysql_use_result()](mysql_use_result)
* [mysql_store_result()](mysql_store_result) 
