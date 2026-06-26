## Name
mysql_net_field_length - Reads an incoming data packet from server

## Synopsis
```C
#include <mysql.h>

ulong mysql_net_read_packet(MYSQL *mysql)
```


## Description
Reads an incoming data packet from the server. 

## Parameters
* `mysql` - mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

## Notes
This function is part of the low level protocol API.

## Return value
Returns the length of the packet.

## See also
[mysql_net_field_length](mysql_net_field_length)