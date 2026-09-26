## Name
mysql_real_query - execute a statement (binary safe)

## Synopsis
```C
#include <mysql.h>

int mysql_real_query(MYSQL * mysql,
                     const char * query,
                     unsigned long length);
```

## Description

mysql_real_query() is the binary safe function for performing a statement on the database server. 

### Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
* `query` - a string containing the statement to be performed.
* `length` - length of the string.

### Notes
* Contrary to the [mysql_query()](mysql_query) function, mysql_real_query is binary safe.
* To determine if mysql_real_query returns a result set use the [mysql_num_fields()](mysql_num_fields) function.

## Return value
Returns zero on success, otherwise non zero.

## See also
* [mysql_query()](mysql_query)
* [mysql_num_fields()](mysql_num_fields)
* [mysql_use_result()](mysql_use_result)
* [mysql_store_result()](mysql_store_result)
