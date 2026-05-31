## Name
mariadb_dyncol_value_init - Initializes a dynamic column value

## Synopsis
```C
#include <mariadb_dyncol.h>

void mariadb_dyncol_value_init(DYNAMIC_COLUMN_VALUE *value)
```

## Description
The `mariadb_dyncol_value_init()` macro initializes a dynamic column value by setting the type to `DYNCOL_NULL`.

## Parameter
* `value` - A pointer to a `DNYAMIC_COLUMN_VALUE` structure.

## See also
* [mariadb_dyncol_init()](mariadb_dyncol_init)