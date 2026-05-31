## Name
mariadb_dyncol_column_cmp_named - Compare two column names

## Synopsis
```C
#include <mariadb_dyncol.h>

int mariadb_dyncol_column_cmp_named(const MYSQL_LEX_STRING *s1,
                                    const MYSQL_LEX_STRING *s2);
```

## Description
Compares two dynamic column keys represented as a pointer to a `MYSQL_LEX_STRING` structure.

## Parameter
* `s1` - First key
* `s2` - Second key

## Return value
Returns an integer less than, equal to, or greater than zero if the first bytes of `s1` is found, respectively, to be less than, to match, or be greater than the first bytes of `s2`.