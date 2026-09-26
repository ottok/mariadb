## Name
mysql_get_host_info - Returns host information 

## Synopsis
```C
#include <mysql.h>
const char * mysql_get_host_info(MYSQL * mysql);
```

## Description
Describes the type of connection in use for the connection, including the server host name. Returns a string, or NULL if the connection is not valid.

### Parameter
* `mysql` - a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

## Return value
Returns a string, describing host information or `NULL` if the connection is not valid.

## See also
* [mysql_get_server_version()](mysql_get_server_version)
