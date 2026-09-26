## Name
mariadb_dyncol_create_many_named - Creates a dynamic column with named keys

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_create_many_named(DYNAMIC_COLUMN *str,
                                 uint column_count,
                                 MYSQL_LEX_STRING *column_keys,
                                 DYNAMIC_COLUMN_VALUE *values,
                                 my_bool new_string);
```

## Description
Create a dynamic column from arrays of values and names.

## Parameter
* `*str` - A pointer to a dynamic column structure
* `column_count` - number of columns
* `*column_keys` - an array of column keys
* `*values` - an array of values
* `new_string` - if set `str` will be reinitialized (not freed) before usage

## Return value
Returns `ER_DYNCOL_OK` on success, otherwise error.

## Notes
* To delete, update or insert new columns into an existing dynamic column use [mariadb_dyncol_update_many_named](mariadb_dyncol_update_many_named) function

## See also
* [mariadb_dyncol_create_many_num](mariadb_dyncol_create_many_num)
* [mariadb_dyncol_update_many_named](mariadb_dyncol_update_many_named)
* [Dynamic Column Error Codes](dyncol_typesanddefs#error-codes)