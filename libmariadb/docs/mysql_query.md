## Name
mysql_query - executes a null terminated statement string

## Synopsis
```C
#include <mysql.h>

int mysql_query(MYSQL * mysql,
                const char * query);
```


## Description
Performs a statement pointed to by the null terminate string query against the database. Contrary to [mysql_real_query()](mysql_real_query), mysql_query() is not binary safe.

### Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
* `query` -a null terminated string containing the statement to be performed.

### Notes
* For executing multi statements the statements within the null terminated string statements must be separated by a semicolon.
* If your statement contains binary data you should use [mysql_real_query()](mysql_real_query) or escape your data with [mysql_hex_string()](mysql_hex_string).
* To determine if a statement returned a result set use the function [mysql_field_count()](mysql_field_count).

## Return value
Returns zero on success, non zero on failure.

## See also
* [mysql_real_query()](mysql_real_query)
* [mysql_field_count()](mysql_field_count)
* [mysql_hex_string()](mysql_hex_string)
* [mysql_use_result()](mysql_use_result) 
* [mysql_store_result()](mysql_store_result)
