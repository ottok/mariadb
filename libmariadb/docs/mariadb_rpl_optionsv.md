## Name
mariadb_rpl_optionsv - sets replication options

## Synopsis
```C
#include <mariadb_rpl.h>

int mariadb_rpl_optionsv(MARIADB_RPL *rpl, enum mariadb_rpl_option option, ...)
```

## Parameter
* `rpl` - a replication handle which was previously allocated by [mariadb_rpl_init](mariadb_rpl_init)
* `option` - The option to be set, followed by one or more values

| Option | Type | Description
|-|-|-
| MARIADB_RPL_FILENAME | char * | The name of binglog file
| MARIADB_RPL_START | unsigned long | Start position
| MARIADB_RPL_SERVER_ID | uint32_t | Server id
| MARIADB_RPL_FLAGS | uint32_t | Flags
| MARIADB_RPL_VERIFY_CHECKSUM | uint32_t | Verify CRC32 checksum (option added in version 3.3.5)
| MARIADB_RPL_PORT | uint32_t | Port of replication client (option added in version 3.3.5)
| MARIADB_RPL_HOST | char * | Name of replication client (option added in version 3.3.5)
| MARIADB_RPL_SEMI_SYNC | uint_32_t | Enable or disable semi sync replication (option added in version 3.3.6).


## Return value
Returns zero on success, non zero on error.

## See also
* [mariadb_rpl_get_optionsv()](mariadb_rpl_get_optionsv)
* [mariadb_rpl_open()](mariadb_rpl_open)

## History
`mariadb_rpl_optionsv` was added in MariaDB Connector/C 3.1.0
