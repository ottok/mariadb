## Name
mysql_character_set_name - Returns the character set used for the specified connection

## Synopsis
```C
#include <mysql.h>

const char* mysql_character_set_name(MYSQL * mysql);
```

## Description
Returns the character set used for the specified connection.

### Parameters
* `mysql` is a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

## Return value
The character set name used for the specified connection, or NULL if an error occurred.

## Notes
This function is deprecated. Instead, use [mariadb_get_infov()](mariadb_get_infov) with option `MARIADB_CONNECTION_CHARSET_INFO`.

## See also
* [mysql_set_character_set()](mysql_set_character_set)