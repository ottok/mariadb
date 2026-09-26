## Name
mariadb_free_rpl_event - free event memory

## Synopsis
```C
#include <mariadb_rpl.h>

void mariadb_free_rpl_event(MARIADB_RPL_EVENT *event)
```

## Description
Frees event memory.

## Parameter
* `event` - An event handle which was previously obtained by [mariadb_rpl_fetch()](mariadb_rpl_fetch).

## History
`mariadb_free_rpl_event` was added in MariaDB Connector/C 3.1.0
