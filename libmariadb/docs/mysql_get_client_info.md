## Name
mysql_get_client_info - returns client library version as string representation 

## Synopsis
```C
#include <mysql.h>

const char * mysql_get_client_info(void );
```

## Description
Returns a string representing the client library version

### Notes
To obtain the numeric value of the client library version use [mysql_get_client_version()](mysql_get_client_version).

## See also
* [mysql_get_client_version()](mysql_get_client_version)
* [mysql_get_host_info()](mysql_get_host_info)
* [mysql_get_proto_info()](mysql_get_proto_info)
