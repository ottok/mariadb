## Name
mariadb_dyncol_column_count - Get number of columns in dynamic column blob
## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_column_count(DYNAMIC_COLUMN *str,
                            unsigned int *column_count);
```
## Description
Gets the number of columnns in a dynamic column blob. 

## Parameter
* `*str` - A pointer to a `DYNAMIC_COLUMN` structure
* `column_count` - An unsigned integer pointer where the number of columns will be stored.

## Return value
Returns `ER_DYNCOL_OK` on success, otherwise error.

## Notes
* `mariadb_dyncol_column_count()` doesn't count NULL values.

## See also
* [Dynamic Column Error Codes](dyncol_typesanddefs#error-codes)
