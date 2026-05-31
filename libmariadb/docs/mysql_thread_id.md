## Name
mysql_thread_id - Returns id of the current connection

## Synopsis
```C
#include <mysql.h>

unsigned long mysql_thread_id(MYSQL * mysql);
```


## Description

The mysql_thread_id() function returns the thread id for the current connection.

### Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
### Notes
* The current connection can be killed with [mysql_kill()](mysql_kill).
* If reconnect option is enabled the thread id might change if the client reconnects to the server.


## Return value
Returns the thread id of the current connection.

## See also
* [mysql_kill()](mysql_kill)
* [mysql_options()](mysql_options)
