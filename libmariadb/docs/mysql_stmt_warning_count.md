## Name
mysql_stmt_warning_count - Returns the number of warnings from the last executed statement.

## Synopsis
```C
#include <mysql.h>

unsigned int mysql_stmt_warning_count(MYSQL_STMT * stmt);
```

## Description
Returns the number of warnings from the last executed statement, or zero if there are no warnings. 
## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
Returns the number of warnings.

## Notes
* For retrieving warning messages you should use the SQL command `SHOW WARNINGS`.
* If SQL_MODE `TRADITIONAL` is enabled an error instead of warning will be returned. For detailed information check the server documentation.
## History
This function was added in Connector/C 3.0.

## See Also
* [mysql_warning_count()](mysql_warning_count)
