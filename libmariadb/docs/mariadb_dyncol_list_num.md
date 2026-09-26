## Name
mariadb_dyncol_list_num - Lists numeric column keys in dynamic column

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_list_named(DYNAMIC_COLUMN *str,
                          uint *column_count,
                          uint **column_numbers);
```

## Description
Lists the column numbers inside a dynamic column.

## Parameter
* `*str` - Dynamic column
* `*column_count` - A pointer to an unsigned integer which stores the number of columns
* `**column_numbers` - A pointer to an array of column numbers, which stores the numbers

## Return value
Returns `ER_DYNCOL_OK` on success, otherwise error.

## Notes
* The application program needs to free the allocated memory for `column_count` and `column_numbers` parameter.

## See also
* [mariadb_dyncol_list_named](mariadb_dyncol_list_named)
* [mariadb_dyncol_list_json](mariadb_dyncol_list_json)