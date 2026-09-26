## Name
mysql_get_charset_by_name - returns character set information for the specified character set number

## Synopsis
```C
#include <mysql.h>

MARIADB_CHARSET_INFO *mariadb_get_charset_by_name(uint cs_nr)
```


## Description
Returns information about the specified character set number.

### Parameters
* `cs_nr` - a character set number.

### Return values
Returns a pointer to MARIADB_CHARSET_INFO structure, or NULL if the specified character set number
could not be found.

### Notes
* A complete list of supported character sets in the client library is listed in the function description for [mysql_set_character_set()](mysql_set_character_set).

## See also
* [mariadb_get_charset_by_name()](mariadb_get_charset_by_name)
* [mysql_set_character_set()](mysql_set_character_set)
