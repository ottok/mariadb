## Name
mariadb_reconnect - reconnects to a server

## Synopsis
```C
#include <mysql.h>

my_bool  mariadb_reconnect(MYSQL * mysql)
```

## Description
`mariadb_reconnect()` tries to reconnect to a server in case the connection died due to timeout or other errors. It uses the same credentials which were specified in  [mysql_real_connect()](mysql_real_connect).

## Return value
The function will return 0 on success, a non zero value on error

**Note**:
The function will return an error, if the option `MYSQL_OPT_RECONNECT` wasn't set before.

## History
`mariadb_reconnect()` was added in MariaDB Connector/C 3.0

## See also
* [mysql_real_connect()](mysql_real_connect)
* [mysql_optionsv()](mysql_optionsv)