## Name
mariadb_rpl_init - allocates and initializes a replication handle

## Synopsis
```C
#include <mysql.h>
#include <mariadb.h>

MARIADB_RPL *mariadb_rpl_init(MYSQL *mysql)
```

## Description
Allocates and initializes a replication handle.

## Parameter
* `mysql` - A connection handle which was previously connected by [mysql_real_connect()](mysql_real_connect).

## Return value
A replication handle or NULL on error.

## Notes
The replication handle needs to be released by [mariadb_rpl_close()](mariadb_rpl_close).

## See also
* [mariadb_rpl_close()](mariadb_rpl_close)

## History
`mariadb_rpl_init` was added in MariaDB Connector/C 3.1.0