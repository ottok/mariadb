## Name
mysql_stmt_next_result - prepares next result set of a prepared statement 

## Synopsis
```C
#include <mysql.h>

int mysql_stmt_next_result(MYSQL_STMT * stmt);
```

## Description
Prepares next result set from a previous call to [mysql_stmt_execute()](mysql_stmt_execute) which can be retrieved by [mysql_stmt_store_result()](mysql_stmt_store_result).

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init().]]

## Return value
Returns zero on success, nonzero if an error occurred.

## Notes
* The function [mysql_stmt_more_results()](mysql_stmt_more_results) indicates if further result sets are available.
* If the execution of a stored procedure produced multiple result sets the return value of [mysql_stmt_errno()](mysql_stmt_errno)/error() might change and there will be no result set available.


## See also
* [mysql_stmt_execute()](mysql_stmt_execute)
* [mysql_stmt_more_results()](mysql_stmt_more_results)
