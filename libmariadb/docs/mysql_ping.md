## Name
mysql_ping - checks if the connection between client and server is working

## Synopsis
```C
#include <mysql.h>

int mysql_ping(MYSQL * mysql);
```

## Description
Checks whether the connection to the server is working. If it has gone down, and global option reconnect is enabled an automatic reconnection is attempted.


This function can be used by clients that remain idle for a long while, to check whether the server has closed the connection and reconnect if necessary.

### Parameters
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
### Notes
* If a reconnect occurred the thread_id will change. Also resources bundled to the connection (prepared statements, locks, temporary tables, ...) will be released.


## Return value
Returns zero on success, nonzero if an error occurred.

## See also
* [mysql_optionsv()](mysql_optionsv)
* [mysql_kill()](mysql_kill)
