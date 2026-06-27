## Name
mariadb_dyncol_update_many_num - Update, insert or delete values in a dynamic column using numeric keys

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_update_many_num(DYNAMIC_COLUMN *str,
                               uint column_count,
                               uint *column_keys,
                               DYNAMIC_COLUMN_VALUE *values)
```

## Description
Add, delete or update columns in a dynamic column with a numeric key.

## Parameter
* `*str` - A pointer to a dynamic column structure
* `column_count` - number of columns
* `*column_keys` - an array of column keys
* `*values` - an array of values

## Return value
Returns `ER_DYNCOL_OK` on success, otherwise error.

## Notes
* To delete a column, update its value to a "non-value" of type `DYN_COL_NULL`

## See also
* [mariadb_dyncol_create_many_num](mariadb_dyncol_create_many_num)
* [mariadb_dyncol_update_many_named](mariadb_dyncol_update_many_named)
* [Dynamic Column Error Codes](dyncol_typesanddefs#error-codes)