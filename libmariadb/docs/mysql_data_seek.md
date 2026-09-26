## Name
mysql_data_seek - seeks to an offset

## Synopsis
```C
#include <mysql.h>

void mysql_data_seek(MYSQL_RES * result,
                     my_ulonglong offset);
```

## Description
The mysql_data_seek() function seeks to an arbitrary function result pointer specified by the offset in the result set. Returns zero on success, nonzero if an error occurred.

### Parameters
* `result` - a result set identifier returned by mysql_store_result().
* `offset` - the field offset. Must be between zero and the total number of rows minus one (0..mysql_num_rows - 1). 

### Notes
This function can only be used with buffered result sets obtained from the use of the [mysql_store_result()](mysql_store_result) function.

## See also
* [mysql_num_rows()](mysql_num_rows)
* [mysql_store_result()](mysql_store_result)


