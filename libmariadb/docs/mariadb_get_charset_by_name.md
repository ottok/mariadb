## Name
mariadb_get_charset_by_name - returns character set information for the specified character set name

## Synopsis
```C
#include <mysql.h>

MARIADB_CHARSET_INFO *mariadb_get_charset_by_name(const char *cs_name)
```


## Description
Returns information about the specified character set name.

### Parameters
* `cs_name` - a character set name.

### Return values
Returns a pointer to MARIADB_CHARSET_INFO structure, or NULL if the specified character set name
could not be found.

### Notes
* A complete list of supported character sets in the client library is listed in the function description for [mysql_set_character_set()](mysql_set_character_set).

## See also
* [mariadb_get_charset_by_nr()](mariadb_get_charset_by_nr)
* [mysql_set_character_set()](mysql_set_character_set)
