## Name
mysql_stmt_param_count - Returns number of parameters 

## Synopsis
```C
#include <mysql.h>

unsigned long mysql_stmt_param_count(MYSQL_STMT * stmt);
```

## Description
Returns the number of parameter markers present in the prepared statement. Parameter markers are specified as `?` (question mark)

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
The number of parameter markers in prepared statement.

### Notes
* This function will not deliver a valid result until [mysql_stmt_prepare()()](mysql_stmt_prepare) was called.

## See Also
* [mysql_stmt_prepare()()](mysql_stmt_prepare)
* [mysql_stmt_field_count()](mysql_stmt_field_count)
