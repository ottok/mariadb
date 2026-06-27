## Name
mysql_more_results - indicates if one or more results are available 

## Synopsis
```C
#include <mysql.h>

my_bool mysql_more_results(MYSQL * mysql);
```

## Description
Indicates if one or more result sets are available from a previous call to [mysql_real_query()](mysql_real_query).

### Parameter
* `mysql` - a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).


### Notes
* The function [mysql_set_server_option()](mysql_set_server_option) enables or disables multi statement support.
* Multiple result sets can be obtained either by calling a stored procedure or by executing concatenated statements, e.g. `SELECT a FROM t1;SELECT b, c FROM t2`.


## Return value
Returns 1 if more result sets are available, otherwise zero.

## See also
* [mysql_real_query()](mysql_real_query)
* [mysql_use_result()](mysql_use_result)
* [mysql_store_result()](mysql_store_result)
* [mysql_next_result()](mysql_next_result)
* [mysql_set_server_option()](mysql_set_server_option)
