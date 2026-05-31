## Name
mysql_get_server_info - Returns server version as string

## Synopsis
```C
#include <mysql.h>

const char * mysql_get_server_info(MYSQL * mysql);
```

## Description
Returns the server version or `NULL` on failure.

### Parameter
* `mysql` - a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
To obtain the numeric server version please use [mysql_get_server_version()](mysql_get_server_version).

## Return value
Returns the server version as zero terminated string or `NULL`on failure.

## See also
* [mysql_get_server_info()](mysql_get_server_info)
* [mysql_get_client_info()](mysql_get_client_info)
