## Name
mysql_get_character_set_info - returns character set information

## Synopsis
```C
#include <mysql.h>

void mysql_get_character_set_info(MYSQL * mysql,
                                  MY_CHARSET_INFO * charset);
```


## Description
Returns information about the current default character set for the specified connection.

### Parameters
* `mysql` - a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
* `charset`  - a pointer to a `MY_CHARSET_INFO` structure, in which the information will be copied.

### Notes
* A complete list of supported character sets in the client library is listed in the function description for [mysql_set_character_set()](mysql_set_character_set).

## See also
* [mariadb_get_infov()](mariadb_get_infov)
* [mysql_set_character_set()](mysql_set_character_set)
