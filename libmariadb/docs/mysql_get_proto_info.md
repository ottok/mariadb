## Name
mysql_get_proto_info - Returns protocol version number

## Synopsis
```C
#include <mysql.h>

unsigned int mysql_get_proto_info(MYSQL * mysql);
```


## Description
Returns the protocol version number for the specified connection

### Parameter
* `mysql` - a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
MariaDB Connector/C doesn't support protocol version 9 and prior.


## Return value
The protocol version number in use

## See also
* [mysql_get_host_info()](mysql_get_host_info)
