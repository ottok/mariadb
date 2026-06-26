## Name
mariadb_dyncol_has_names - Checks if dynamic column uses named keys

## Synopsis
```C
#include <mariadb_dyncol.h>

my_bool mariadb_dyncol_has_names(DYNAMIC_COLUMN *str)
```

## Description
Checks if the specified dynamic column uses named keys.

## Parameter
* `str`: Dynamic column

## Return value
Returns 1 if the specified dynamic column uses named keys, otherwise zero.

## See also
* [mariadb_dyncol_get_named()](mariadb_dyncol_get_named)
