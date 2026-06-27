## Name
mysql_stmt_num_rows - Returns number of rows in a prepared statement result set 

## Synopsis
```C
#include <mysql.h>

unsigned long long mysql_stmt_num_rows(MYSQL_STMT * stmt);
```

## Description
Returns the number of rows in the result set. The use of mysql_stmt_num_rows() depends on whether or not you used [mysql_stmt_store_result()](mysql_stmt_store_result) to buffer the entire result set in the statement handle.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
Number of rows in the result set

### Notes
* If you use [mysql_stmt_store_result()](mysql_stmt_store_result), mysql_stmt_num_rows() may be called immediately.


## See Also
* [mysql_stmt_store_result()](mysql_stmt_store_result)
