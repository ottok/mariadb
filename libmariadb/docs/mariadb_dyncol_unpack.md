## Name
mariadb_dyncol_unpack - extracts keys and values of all columns

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_unpack(DYNAMIC_COLUMN *str,
                      uint *column_count,
                      MYSQL_LEX_STRING **column_keys,
                      DYNAMIC_COLUMN_VALUE **values);
```

## Description

The `mariadb_dyncol_unpack()` function extracts all keys and values of a dynamic column.

## Parameter
* `str` - Pointer to a `DYNAMIC_COLUMN` structure
* `column count` - Pointer to an unsigned integer which will receive the number of columns
* `column_keys` - Pointer of an array of `MYSQL_LEX_STRING` structures, which will contain the column keys
* `values` - Pointer of an array of `DYNAMIC_COLUMN_VALUE` structures, which will contain the values.

## Return value
Returns `ER_DYNCOL_OK` on success, otherwise an error.

## Notes
* The `column_keys` and `values` arrays will be allocated by `mariadb_dyncol_unpack()` and must be freed by application.

## See also
* [mariadb_dyncol_get()](mariadb_dyncol_get)
* [mariadb_dyncol_list()](mariadb_dyncol_list)