## Name
mysql_stmt_attr_get - Gets the current value of a statement attribute 

## Synopsis
```C
#include <mysql.h>

my_bool mysql_stmt_attr_get(MYSQL_STMT * stmt,
                            enum enum_stmt_attr_type,
                            void * attr);
```

## Description
Gets the current value of a statement attribute. Returns zero on success, non zero on failure.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).
* `enum_stmt_attr_type` - attribute. See below.
* `attr`  - pointer to a variable, which will contain the attribute value.


### Attribute types
The `enum_stmt_attr_type` parameter has the following possible values:

| Value | Type | Description
|-|-|-
|`STMT_ATTR_UPDATE_MAX_LENGTH`| `my_bool *` | Indicates if [mysql_stmt_store_result()](mysql_stmt_store_result) will update the max_length value of `MYSQL_FIELD` structures.
| `STMT_ATTR_CURSOR_TYPE` | `unsigned long *` | Possible values are `CURSOR_TYPE_READ_ONLY` or default value `CURSOR_TYPE_NO_CURSOR`.
| `STMT_ATTR_PREFETCH_ROWS` | `unsigned long *` | Number of rows which will be prefetched. The default value is 1.
| `STMT_ATTR_PREBIND_PARAMS` | `unsigned int *`| Number of parameters used for [mariadb_stmt_execute_direct()](mariadb_stmt_execute_direct)
| `STMT_ATTR_STATE` | `enum mysql_stmt_state *` | Status of prepared statement. Possible values are defined in `enum mysql_stmt_state`. This option was added in MariaDB Connector/C 3.1.0

## Notes
* Setting the number of prefetched rows will work only for read only cursors.

## See Also
* [mysql_stmt_attr_set()](mysql_stmt_attr_set)
