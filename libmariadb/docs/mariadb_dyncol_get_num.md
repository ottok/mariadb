## Name
mariadb_dyncol_get_num - Get value of a column with given number

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_get_num(DYNAMIC_COLUMN *str,
                       uint column_nr,
                       DYNAMIC_COLUMN_VALUE *store_it_here)

```

## Description
Returns a dynamic column value by given number

## Parameter
* `str`: Dynamic column
* `column_nr`: Number of column
* `value`: Value of dynamic column

## Return value
Returns `ER_DYNCOL_OK`on success, otherwise error. If the column number could not be found, value will be NULL

## See also
* [mariadb_dyncol_get_named()](mariadb_dyncol_get_named)
