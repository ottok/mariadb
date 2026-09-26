## Name
mysql_stmt_more_results - indicates if one or more results from a previously executed prepared statement are available 

## Synopsis
```C
#include <mysql.h>

my_bool mysql_stmt_more_results(MYSQL_STMT * stmt);
```

## Description
Indicates if one or more result sets are available from a previous call to [mysql_stmt_execute()](mysql_stmt_execute).

### Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_init) and executed by [mysql_stmt_execute()](mysql_stmt_execute).


### Notes
* Multiple result sets can be obtained by calling a stored procedure. Executing concatenated statements is not supported in prepared statement protocol.


## Return value
Returns 1 if more result sets are available, otherwise zero.

## See also
* [mysql_stmt_next_result()](mysql_stmt_next_result)
* [mysql_stmt_store_result()](mysql_stmt_store_result)
