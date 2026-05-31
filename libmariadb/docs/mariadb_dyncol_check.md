## Name
mariadb_dyncol_check - Checks if a dynamic column has correct format

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_check(DYNAMIC_COLUMN *str);
```
## Description
The function `mariadb_dyncol_check()` checks if a dynamic column has correct format. This can be used e.g. to check if a blob contains a dynamic column.

## Parameter
* `str`- pointer to a `DYNAMIC_COLUMN` structure.

## Return value
Returns `ER_DYNCOL_OK` if the dynamic column has correct format, otherwise `ER_DYNCOL_FORMAT`.

## See also
* [mariadb_dyncol_count()](mariadb_dyncol_count)