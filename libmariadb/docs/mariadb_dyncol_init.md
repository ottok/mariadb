## Name
mariadb_dyncol_init - Initializes a dynamic column

## Synopsis
```C
#include <mariadb_dyncol.h>

void mariadb_dyncol_init(DYNAMIC_COLUMN *str)
```
## Description
The `mariadb_dyncol_init()` macro initializes a dynamic column.

## Parameter
* `*str` - A pointer to a `DYNAMIC_COLUMN` structure

## Notes
* `mariadb_dyncol_init()` doesn't allocate any memory, therefore you either need to allocate memory before or pass the address of a `DYNAMIC_COLUMN` structure.

## See also
* [mariadb_dyncol_free()](mariadb_dyncol_free)
* [mariadb_dyncol_value_init()](mariadb_dyncol_value_init)