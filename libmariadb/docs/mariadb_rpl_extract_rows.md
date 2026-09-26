## Name

mariadb_rpl_extract_row_data - Extract a list of rows from row event.

## Synopsis
```C
#include <mariadb_rpl.h>

MARIADB_RPL_ROW * 
mariadb_rpl_extract_rows(MARIADB_RPL *rpl,
                         MARIADB_RPL_EVENT *tm_event,
                         MARIADB_RPL_EVENT *row_event)
```

## Description
Extracts a list of rows from a row event.

### Parameter
* `rpl` - a handle, which was previously allocated by [mariadb_rpl_init()](mariadb_rpl_init).
* `tm_event` - the last table_map event
* `row_event` - the row_event, which contains row data

### History
This function was added in MariaDB Connector/C version 3.3.5

## See also
* [mariadb_rpl_fetch()](mariadb_rpl_fetch)
