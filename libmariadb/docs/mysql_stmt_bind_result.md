## Name
mysql_stmt_bind_result - binds result columns to variables

## Synopsis
```C
#include <mysql.h>

my_bool mysql_stmt_bind_result(MYSQL_STMT * stmt,
                               MYSQL_BIND * bind);

```

## Description
Binds columns in the result set to variables. Returns zero on success, non-zero on failure.

## Parameters
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).
* `bind` - an array of [MYSQL_BIND]] structures. The size of this array must be equal to the number of columns in result set.


## Notes
* To determine the number of columns in result set use [mysql_stmt_field_count()](mysql_stmt_field_count).
* A column can be bound or rebound at any time, even after a result set has been partially retrieved. The new binding takes effect the next time [mysql_stmt_fetch()](mysql_stmt_fetch) is called.

## See Also
* [mysql_stmt_field_count()](mysql_stmt_field_count)
* [mysql_stmt_execute()](mysql_stmt_execute)
* [mysql_stmt_fetch()](mysql_stmt_fetch)
