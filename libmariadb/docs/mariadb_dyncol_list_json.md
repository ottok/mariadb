## Name
mariadb_dyncol_list_json - Converts a dynamic column into JSON format

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_json(DYNAMIC_COLUMN *str,
                    DYNAMIC_STRING *json);

```

## Description
Converts a dynamic column into JSON format.

## Parameter
* `*str` - Dynamic column
* `*json` - Pointer to a dynamic string which contains json format

## Return value
Returns `ER_DYNCOL_OK`on success, otherwise error.

## See also
* [Dynamic Column Error Codes](dyncol_typesanddefs#error-codes)