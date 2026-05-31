## Name
mysql_stat - Returns current server status 

## Synopsis
```C
#include <mysql.h>

const char * mysql_stat(MYSQL * mysql);
```


## Description
mysql_stat() returns a string with the current server status for uptime, threads, queries, open tables, flush tables and queries per second.

### Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected byy [mysql_real_connect()](mysql_real_connect).

### Notes
For a complete list of other status variables, you have to use the [show-status()](SHOW STATUS]] SQL command.


## Return value
Returns a string representing current server status.

## See also
* [mysql_get_server_info()](mysql_get_server_info)
