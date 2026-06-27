## Name
mysql_get_server_version - returns numeric server version 

## Synopsis
```C
#include <mysql.h>

unsigned long mysql_get_server_version(MYSQL * mysql);
```

## Description
Returns an integer representing the version of connected server.

### Parameter
* `mysql` - a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
The form of the version number is VERSION_MAJOR * 10000 + VERSION_MINOR * 100 + VERSION_PATCH.


## Return value
The version number of the connected server

## See also
* [mysql_get_server_info()](mysql_get_server_info)
