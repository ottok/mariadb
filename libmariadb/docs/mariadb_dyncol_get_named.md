## Name
mariadb_dyncol_get_name - Get value of a column with given key

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_get_named(DYNAMIC_COLUMN *str,
                         LEX_STRING *key,
                         DYNAMIC_COLUMN_VALUE *store_it_here)

```

## Description
Returns a dynamic column value by given key 

## Parameter
* `str`: Dynamic column
* `name`: Name to search for
* `value`: Value of dynamic column

## Return value
Returns `ER_DYNCOL_OK`on success, otherwise error. If the column name could not be found, value will be NULL

## See also
* [mariadb_dyncol_get_num()](mariadb_dyncol_get_num)
