## Name

mariadb_rpl_error - returns the last error message for the most recent binlog function call

## Synopsis
```C
#include <mariadb_rpl.h>

const char * mariadb_rpl_error(MARIADB_RPL * rpl);
```

## Description
Returns the last error message for the most recent binlog function call that can succeed or fail. An empty string means no error occurred.

### Parameter
* `rpl` is a handle, which was previously allocated by [mariadb_rpl_init()](mariadb_rpl_init).

### Notes
* Client error codes are listed in `errmsg.h` header file, server error codes are listed in `mysqld_error.h` header file of the server source distribution.

### History
This function was added in MariaDB Connector/C version 3.3.5

## See also
* [mariadb_rpl_errno()](mariadb_rpl_errno)
