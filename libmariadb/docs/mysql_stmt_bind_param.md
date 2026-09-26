## Name
mysql_stmt_bind_param -  Binds parameter to a prepared statement

## Synopsis
```C
#include <mysql.h>

my_bool mysql_stmt_bind_param(MYSQL_STMT * stmt,
                              MYSQL_BIND * bind);
```

## Description
Binds variables for parameter markers in the prepared statement that was passed to [mysql_stmt_prepare()](mysql_stmt_prepare). Returns zero on success, non-zero on failure.

## Parameters
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).
* `bind` - an array of `MYSQL_BIND` structures. The size of this array must be equal to the number of parameters.

## Notes
* The number of parameters can be obtained by [mysql_stmt_param_count()](mysql_stmt_param_count).
* If the number of parameters is unknown, for example when using [mariadb_stmt_execute_direct()](mariadb_stmt_execute_direct), the number of parameters have to be specified with the [mysql_stmt_attr_set()](mysql_stmt_attr_set) function.


## See Also
* [mariadb_stmt_execute_direct()](mariadb_stmt_execute_direct)
* [mysql_stmt_prepare()](mysql_stmt_prepare)
* [mysql_stmt_bind_result()](mysql_stmt_bind_result)
* [mysql_stmt_execute()](mysql_stmt_execute)
* [mysql_stmt_param_count()](mysql_stmt_param_count)
* [mysql_stmt_send_long_data()](mysql_stmt_send_long_data)
