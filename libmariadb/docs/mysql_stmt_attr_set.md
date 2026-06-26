## Name
mysql_stmt_attr_set -  Sets attribute of a statement

## Synopsis
```C
#include <mysql.h>

my_bool mysql_stmt_attr_set(MYSQL_STMT * stmt,
                            enum enum_stmt_attr_type,
                            const void * attr);
```
## Description
Used to modify the behavior of a prepared statement. This function may be called multiple times to set several attributes. Returns zero on success, non-zero on failure.

## Parameters
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).
* `enum_stmt_attr_type` - the attribute that you want to set. See below. 
* `attr` - the value to assign to the attribute

### Attribute types
The `enum_stmt_attr_type` attribute can have one of the following values:

| Value | Type | Description
|-|-|-
| `STMT_ATTR_UPDATE_MAX_LENGTH` | `my_bool *` | If set to 1, [mysql_stmt_store_result()](mysql_stmt_store_result) will update the max_length value of MYSQL_FIELD structures.
| `STMT_ATTR_CURSOR_TYPE`  | `unsigned long *` | cursor type when [mysql_stmt_execute()](mysql_stmt_execute)  is invoked. Possible values are `CURSOR_TYPE_READ_ONLY` or default value `CURSOR_TYPE_NO_CURSOR`.
| `STMT_ATTR_PREFETCH_ROWS` | `unsigned long *` | number of rows which will be prefetched. The default value is 1.
| `STMT_ATTR_PREBIND_PARAMS` | `unsigned int *`| number of parameter markers when using [mariadb_stmt_execute_direct()](mariadb_stmt_execute_direct). If the statement handle is reused it will be reset automatically to the state after mysql_stmt_init(). This option was added in Connector/C 3.0
| `STMT_ATTR_ARRAY_SIZE`| `unsigned int *` | number of array elements. This option was added in Connector/C 3.0 and requires MariaDB 10.2 or later
| `STMT_ATTR_ROW_SIZE` | `size_t *` | specifies size of a structure for row wise binding. This length must include space for all of the bound parameters and any padding of the structure or buffer to ensure that when the address of a bound parameter is incremented with the specified length, the result will point to the beginning of the same parameter in the next set of parameters. When using the sizeof operator in ANSI C, this behavior is guaranteed. If the value is zero column-wise binding will be used (default). This option was added in Connector/C 3.0 and requires MariaDB 10.2 or later

## Notes
* If you use the `MYSQL_STMT_ATTR_CURSOR_TYPE` option with `MYSQL_CURSOR_TYPE_READ_ONLY`, a cursor is opened for the statement when you invoke [mysql_stmt_execute()](mysql_stmt_execute). If there is already an open cursor from a previous [mysql_stmt_execute()](mysql_stmt_execute) call, it closes the cursor before opening a new one. [mysql_stmt_reset()](mysql_stmt_reset) also closes any open cursor before preparing the statement for re-execution.
* If you open a cursor for a prepared statement it is unnecessary to call [mysql_stmt_store_result()](mysql_stmt_store_result).
* [mysql_stmt_free_result()](mysql_stmt_free_result) closes any open cursor.

## See Also
* [mariadb_stmt_execute_direct()](mariadb_stmt_execute_direct)
* [mysql_stmt_attr_get()](mysql_stmt_attr_get)
