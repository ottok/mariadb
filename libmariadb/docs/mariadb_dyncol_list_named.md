## Name
mariadb_dyncol_list_named - Lists column keys in dynamic column

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_list_named(DYNAMIC_COLUMN *str,
                          uint *column_count,
                          MYSQL_LEX_STRING **column_keys);
```

## Description
Lists the column keys inside a dynamic column.

## Notes
* The application program needs to free the allocated memory for `column_count` and `column_keys` parameter.

## Parameter
* `*str` - Dynamic column
* `*column_count` - A pointer to an unsigned integer which stores the number of columns
* `**column_keys` - A pointer to an array of column keys, which stores the keys

## Return value
Returns `ER_DYNCOL_OK` on success, otherwise error.

## See also
* [mariadb_dyncol_list_num](mariadb_dyncol_list_num)
* [mariadb_dyncol_list_json](mariadb_dyncol_list_json)