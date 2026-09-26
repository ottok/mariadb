## Name
mariadb_rpl_get_optionsv - get replication option value

## Synopsis
```C
#include <mariadb_rpl.h>

int mariadb_rpl_get_optionsv(MARIADB_RPL *rpl, enum mariadb_rpl_option option, ...)
```

## Parameter
* `rpl` - a replication handle which was previously allocated by [mariadb_rpl_init](mariadb_rpl_init)
* `option` - The option to be set, followed by one or more values

| Option | Type | Description
|-|-|-
| MARIADB_RPL_FILENAME | char **, size_t * | The name and name length of binglog file
| MARIADB_RPL_START | unsigned long * | Start position
| MARIADB_RPL_SERVER_ID | uint32_t * | Server id
| MARIADB_RPL_FLAGS | uint32_t * | Flags
| MARIADB_RPL_SEMI_SYNC | uint32_t * | Semi sync replication, 1= ON, 0= OFF. (This option was added in version 3.3.6).

## Return value
Returns zero on success, non zero on error.

## See also
* [mariadb_rpl_optionsv()](mariadb_rpl_optionsv)


## History
`mariadb_rpl_get_optionsv` was added in MariaDB Connector/C 3.1.0
