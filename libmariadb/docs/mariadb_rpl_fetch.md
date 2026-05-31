## Name
mariadb_rpl_fetch - fetches next event from replication stream

## Synopsis
```C
#include <mariadb_rpl.h>

MARIADB_RPL_EVENT *mariadb_rpl_fetch(MARIADB_RPL *rpl, MARIADB_RPL_EVENT *event)
```

## Description
Fetches one event from the replication stream

## Parameter
* `rpl` - A replication handle which was initialized by [mariadb_rpl_init()](mariadb_rpl_init) and connected by [mariadb_rpl_open()](mariadb_rpl_open).
* `event` - An event which was returned by a previous call to `mariadb_rpl_fetch`. If this value is `NULL` the function will allocate new memory for the event, otherwise the passed event value will be overwritten.

## Return value
An event handle or NULL if EOF packet was received.

## Notes
Event memory needs to be freed by calling [mariadb_rpl_free_event()](mariadb_rpl_free_event).

## See also
* [mariadb_rpl_free_event()](mariadb_rpl_free_event)

## History
`mariadb_rpl_fetch` was added in MariaDB Connector/C 3.1.0