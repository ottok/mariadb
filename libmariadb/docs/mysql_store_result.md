## Name
mysql_store_result - returns a buffered result set

## Synopsis
```C
#include <mysql.h>

MYSQL_RES * mysql_store_result(MYSQL * mysql);
```

## Description
Returns a buffered resultset from the last executed query.
### Notes

* [mysql_field_count()](imysql_field_count) indicates if there will be a result set available.
* The memory allocated by mysql_store_result() needs to be released by calling the function [mysql_free_result()](mysql_free_result).

### Parameters
* `mysql` is a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Return value
Returns a buffered result set or NULL in case an error occurred or if the query didn't return data (e.g. when executing an INSERT, UPDATE, DELETE or REPLACE statement).
## See also
* [mysql_free_result()](mysql_free_result)
* [mysql_use_result()](mysql_use_result)
* [mysql_real_query()](mysql_real_query)
* [mysql_field_count()](mysql_field_count)
