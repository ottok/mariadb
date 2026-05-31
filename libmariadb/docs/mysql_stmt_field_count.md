## Name
mysql_stmt_field_count - Returns the number of fields in a result set 

## Synopsis
```C
#include <mysql.h>

unsigned int mysql_stmt_field_count(MYSQL_STMT * stmt);
```


## Description
Returns the number of fields in a result set of a prepared statement.

## Return value
Number of fields or zero if the prepared statement has no result set.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Notes
* The number of fields will be available after calling [mysql_stmt_prepare()](mysql_stmt_prepare)
* `mysql_stmt_field_count()` returns zero for statements which don't produce a result set.


## See Also
* [mysql_stmt_prepare()](mysql_stmt_prepare)
* [mysql_stmt_param_count()](mysql_stmt_param_count)
