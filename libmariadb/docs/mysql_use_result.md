## Name
mysql_use_result - returns an unbuffered result set

## Synopsis
```C
#include <mysql.h>

MYSQL_RES * mysql_use_result(MYSQL * mysql);
```

## Description
Used to initiate the retrieval of a result set from the last query executed using the mysql_real_query() function on the database connection. Either this or the [mysql_store_result()](mysql_store_result) function must be called before the results of a query can be retrieved, and one or the other must be called to prevent the next query on that database connection from failing.

### Parameters
* `mysql` is a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
The mysql_use_result() function does not transfer the entire result set. Hence several functions like [mysql_num_rows()](mysql_num_rows) or [mysql_data_seek()](mysql_data_seek) cannot be used.
mysql_use_result() will block the current connection until all result sets are retrieved or result set was released by [mysql_free_result()](mysql_free_result).

## Return value
Returns an unbuffered result set or `NULL` if an error occurred.

## See also
* [mysql_store_result()](mysql_store_result)
* [mysql_free_result()](mysql_free_result)
