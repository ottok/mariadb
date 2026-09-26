## Name
mysql_next_result - prepares next result set

## Synopsis
```C
#include <mysql.h>

int mysql_next_result(MYSQL * mysql);
```


## Description
Prepares next result set from a previous call to [mysql_real_query()](mysql_real_query) which can be retrieved by [mysql_store_result()](mysql_store_result) or [mysql_use_result()](()](mysql_use_result). Returns zero on success, nonzero if an error occurred.

### Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
* If a multi query contains errors the return value of [mysql_errno()](mysql_errno) and [mysql_error()](mysql_error) might change and there will be no result set available.


## Return value
Returns zero on success, non zero value on error.

## See also
* [mysql_real_query()](mysql_real_query)
* [mysql_store_result()](mysql_store_result)
* [mysql_use_result()](mysql_use_result)
* [mysql_more_results()](mysql_more_results)
