## Name
mariadb_dyncol_free - Free memory inside packed blob

## Synopsis
```C
#include <mariadb_dyncol.h>

void mariadb_dyncol_free(DYNAMIC_COLUMN *str)
```
## Description
Frees memory associated by the specified dynamic column

## Parameter
* `*str` - A pointer to a `DYNAMIC_COLUMN` structure

## Notes
* `mariadb_dyncol_free()` doesn't free the memory of the passed `DYNAMIC_COLUMN` structure but all memory of stored columns.

## See also
* [mariadb_dyncol_init()](mariadb_dyncol_init)