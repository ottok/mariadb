## Name
mariadb_dyncol_json - Get content of a dynamic column in JSON format

## Synopsis
```C
#include <mariadb_dyncol.h>

enum enum_dyncol_func_result
mariadb_dyncol_json(DYNAMIC_COLUMN *str,
                    DYNAMIC_STRING *json)
```

## Description
Get content of a dynamic column in JSON format.

## Parameter
* `*str` - Dynamic column
* `*json` - Pointer to a dynamic string which contains json output

## Return value
Returns `ER_DYNCOL_OK`on success, otherwise error.

## See also
* [mariadb_dyncol_list_json()](mariadb_dyncol_list_json)
