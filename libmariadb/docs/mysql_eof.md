## Name
mysql_eof - determines if the last row of a result set has been read

## Synopsis
```C
#include <mysql.h>

my_bool mysql_eof(MYSQL_RES *result);
```
## Description
Determines if the last row of a result set has been read.

**Notes:**
* This function is deprecated and will be removed. Instead determine the end of a result set by
checking return value of [mysql_fetch_row()](mysql_fetch_row).
* If a result set was acquired by [mysql_store_result()](mysql_store_result) mysql_eof will always return true.
## Return value
Returns true if the entire result set was read.

## See also
* [mysql_fetch_row()](mysql_fetch_row)

