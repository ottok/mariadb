## Name
mariadb_dyncol_val_str - Convert dynamic column value to string

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_val_str(DYNAMIC_STRING *str, DYNAMIC_COLUMN_VALUE *val,
                       MARIADB_CHARSET_INFO *cs, char quote)
```

## Description
Converts the value of a dynamic column to string.

## Parameter
* `str` - A pointer to a dynamic string variable
* `value` - A pointer to a `DYNAMIC_COLUMN_VALUE` structure.
* `cs` - A pointer to a `MARIADB_CHARSET_INFO` structure
* `quote` - quote character in which the string will be enclosed.

## Return value
The function returns `ER_DYNCOL_OK` on success, `ER_DYNCOL_FORMAT` if the value cannot be converted to a double, or `ER_DYNCOL_TRUNCATED` if a truncation occurred.

## See also
* [mariadb_dyncol_val_double()](mariadb_dyncol_val_double)
* [mariadb_dyncol_val_long()](mariadb_dyncol_val_long)