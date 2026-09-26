## Name
mariadb_connection - checks if the client is connected to a MariaDB database server

## Synopsis
```C
#include <mysql.h>

my_bool mariadb_connection(MYSQL * mysql);
```

## Description
Checks if the client is connected to a MariaDB or MySQL database server.

### Parameter
`mysql` - mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

## Return value
Returns a non zero value if connected to a MariaDB database server, otherwise zero.