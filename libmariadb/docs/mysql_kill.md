## Name
mysql_kill - Kills a connection

## Synopsis
```C
#include <mysql.h>

int mysql_kill(MYSQL * mysql,
               unsigned long);

```

## Description

This function is used to ask the server to kill a MariaDB thread specified by the processid parameter. This value must be retrieved by [show-processlist()](SHOW PROCESSLIST]]. If trying to kill the own connection [mysql_thread_id()](mysql_thread_id) should be used.

### Parameter
* `mysql` - a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
Returns 0 on success, otherwise nonzero.
* `long` - process id

### Notes
* To stop a running command without killing the connection use `KILL QUERY`. 
* The `mysql_kill()` function only kills a connection, it doesn't free any memory - this must be done explicitly by calling [mysql_close()](mysql_close).


## Return value
Returns zero on success, non zero on error.

## See also
* [mysql_thread_id()](mysql_thread_id)
* [mysql_close()](mysql_close)
* [mariadb_cancel()](mariadb_cancel)
