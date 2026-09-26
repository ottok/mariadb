## Name
mariadb_dyncol_val_double - Convert dynamic column value to double

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_val_double(double *dbl, DYNAMIC_COLUMN_VALUE *value)
```

## Description
Converts the value of a dynamic column to double.

## Parameter
* `dbl` - A pointer to a double variable
* `value` - A pointer to a `DYNAMIC_COLUMN_VALUE` structure.

## Return value
The function returns `ER_DYNCOL_OK` on success, `ER_DYNCOL_FORMAT` if the value cannot be converted to a double, or `ER_DYNCOL_TRUNCATED` if a truncation occurred.

## See also
* [mariadb_dyncol_val_str()](mariadb_dyncol_val_str)
* [mariadb_dyncol_val_long()](mariadb_dyncol_val_long)