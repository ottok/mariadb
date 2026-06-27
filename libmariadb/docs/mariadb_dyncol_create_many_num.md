## Name
mariadb_dyncol_create_many_num - Creates a dynamic column with numeric keys

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_create_many_num(DYNAMIC_COLUMN *str,
                               uint column_count,
                               uint *column_numbers,
                               DYNAMIC_COLUMN_VALUE *values,
                               my_bool new_string);
```

## Description
Create a dynamic column from arrays of values and numbérs

## Parameter
* `*str` - A pointer to a dynamic column structure
* `column_count` - number of columns
* `*column_numbers` - an array of column numbers
* `*values` - an array of values
* `new_string` - if set `str` will be reinitialized (not freed) before usage

## Return value
Returns `ER_DYNCOL_OK` on success, otherwise error.

## Notes
* To delete, update or insert new columns into an existing dynamic column use [mariadb_dyncol_update_many_num](mariadb_dyncol_update_many_num) function

## See also
* [mariadb_dyncol_create_many_named](mariadb_dyncol_create_many_named)
* [mariadb_dyncol_update_many_num](mariadb_dyncol_update_many_num)
* [Dynamic Column Error Codes](dyncol_typesanddefs#error-codes)