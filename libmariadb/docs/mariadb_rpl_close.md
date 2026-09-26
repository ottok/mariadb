## Name
mariadb_rpl_close - Closes replication stream

## Synopsis
```C
#include <mariadb_rpl.h>

void mariadb_rpl_close(MARIADB_RPL *rpl)
```

## Description
Closes a replication stream.

## Parameter
`rpl` - A replication handle which was initialized by [mariadb_rpl_init()](mariadb_rpl_init) and connected by [mariadb_rpl_open()](mariadb_rpl_open).

## Notes
To close the connection to the server, the api function [mariadb_close()](mariadb_close) must be called.

## History
`mariadb_rpl_close` was added in MariaDB Connector/C 3.1