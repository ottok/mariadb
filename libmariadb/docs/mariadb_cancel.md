## Name
mariadb_cancel - Immediately aborts a connection

## Synopsis
```C
#include <mysql.h>

int mariadb_cancel(MYSQL * mysql);
```

## Description
Immediately aborts a connection by making all subsequent read/write operations fail.
`mariadb_cancel()` does not invalidate memory used for `mysql` structure, nor close any communication  channels. To free the memory, [mysql_close()](mysql_close) must be called.
`mariadb_cancel()` is useful to break long queries in situations where sending KILL is not possible.

### Parameter
`mysql` - mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

## Return value
Returns zero on success or a non-zero value on error.

## History
`mariadb_cancel()` was added in Connector/C 3.0