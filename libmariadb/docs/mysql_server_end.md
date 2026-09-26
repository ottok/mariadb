## Name
mysql_server_end - Called when finished using MariaDB Connector/C 

## Synopsis
```C
#include <mysql.h>

void mysql_server_end(void)
```

## Description
Call when finished using the library, such as after disconnecting from the server. For a client program, only cleans up by performing memory management tasks.

### Notes
* `mysql_library_end()` is an alias for `mysql_server_end()`.
* In MySQL Connector/C versions 3.0.1 to 3.0.4 it was not possible to call multiple times [mysql_server_init()](mysql_server_init) and `mysql_server_end()`.


## See also
* [mysql_server_init()](mysql_server_init)
