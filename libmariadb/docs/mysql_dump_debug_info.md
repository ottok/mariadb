## Name
mysql_dump_debug_info - dump server status into log

## Synopsis
```C
#include <mysql.h>

int mysql_dump_debug_info(MYSQL * mysql);
```

## Description
This function is designed to be executed by an user with the SUPER privilege and is used to dump server status information into the log for the MariaDB Server relating to the connection.

### Parameters
* `mysql` is a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
The server status information will be dumped into the error log file, which can usually be found in the data directory of your server installation.

## Return value
Returns zero on success, nonzero if an error occurred.
