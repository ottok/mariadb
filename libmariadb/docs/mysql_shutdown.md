## Name
mysql_shutdown - Sends shutdown message to server

## Synopsis
```C
#include <mysql.h>

int mysql_shutdown(MYSQL * mysql,
                   enum mysql_enum_shutdown_level);
```


## Description
This function is deprecated. Instead please use SQL `SHUTDOWN` command.

Sends a shutdown message to the server. 

## Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
* `mysql_enum_shutdown_level` - currently only one shutdown level, `SHUTDOWN_DEFAULT` is supported.

### Notes
* To shutdown the database server, the user for the current connection must have SHUTDOWN privileges.

## Return value
Returns zero on success, non-zero on failure.



## See also
* [mysql_kill()](mysql_kill)
