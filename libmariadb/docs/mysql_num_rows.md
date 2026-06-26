## Name
mysql_num_rows - Returns number of rows in a result set.

## Synopsis
```C
#include <mysql.h>

my_ulonglong mysql_num_rows(MYSQL_RES * );
```


## Description
Returns number of rows in a result set.

## Parameters
* `MYSQL_RES` - a result set identifier returned by [mysql_store_result()](mysql_store_result) or [mysql_use_result()](mysql_use_result).
### Notes
The behaviour of `mysql_num_rows()` depends on whether buffered or unbuffered result sets are being used. For unbuffered result sets, `mysql_num_rows()` will not return the correct number of rows until all the rows in the result have been retrieved.

## See also
* [mysql_affected_rows()](mysql_affected_rows)
* [mysql_use_result()](mysql_use_result)
* [mysql_store_result()](mysql_store_result)
