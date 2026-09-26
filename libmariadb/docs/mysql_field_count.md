## Name
mysql_field_count - returns the number of columns for the most recent statement 

## Synopsis
```C
#include <mysql.h>

unsigned int mysql_field_count(MYSQL * mysql);
```

## Description
Returns the number of columns for the most recent statement on the connection represented by the link parameter as an unsigned integer. This function can be useful when using the [mysql_store_result()](mysql_store_result) function to determine if the query should have produced a non-empty result set or not without knowing the nature of the query.

### Parameters
* `mysql` is a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
The  `mysql_field_count()` function should be used to determine if there is a result set available.

## Return value:
The number of columns for the most recent statement. The value is zero, if the statement didn't produce a result set.

## See also
* [mysql_store_result()](mysql_store_result)
* [mysql_use_result()](mysql_use_result)
