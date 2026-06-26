## Name
mysql_stmt_fetch - Fetches result set row from a prepared statement

## Synopsis
```C
#include <mysql.h>

int mysql_stmt_fetch(MYSQL_STMT * stmt);
```

## Description
Fetch the result from a prepared statement into the buffer bound by [mysql_stmt_bind_result()}(mysql_stmt_bind_result).

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
Returns `0` for success, `MYSQL_NO_DATA` if the end of the result set has been reached, or `MYSQL_DATA_TRUNCATION` if one or more values are truncated.

## Notes
* Note that all columns must be bound by the application before calling mysql_stmt_fetch().
* Data are transferred unbuffered without calling [mysql_stmt_store_result()](mysql_stmt_store_result) which can decrease performance (but reduces memory cost).
* Truncation reporting must be enabled by function [mysql_optionsv()](mysql_optionsv) with option `MYSQL_REPORT_DATA_TRUNCATION`

## See Also
* [mysql_stmt_prepare()](mysql_stmt_prepare)
* [mysql_stmt_bind_result()](mysql_stmt_bind_result)
* [mysql_stmt_execute()](mysql_stmt_execute)
