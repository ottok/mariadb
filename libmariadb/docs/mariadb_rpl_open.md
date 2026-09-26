## Name
mariadb_rpl_open - opens a replication stream

## Synopsis
```C
#include <mariadb_rpl.h>

int mariadb_rpl_open(MARIADB_RPL *rpl)
```

## Description
Opens a replication stream

## Parameter
* `rpl` - A replication handle which was previously initialized by [mariadb_rpl_init()](mariadb_rpl_init).

## Return value
Zero on success, nonzero on error.

## History
`mariadb_rpl_open` was added in MariaDB Connector/C 3.1.0