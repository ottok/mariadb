## Name
mysql_get_parameters - Returns packet size information 

## Synopsis
```C
#include <mysql.h>
MYSQL_PARAMETERS mysql_get_parameters(void)
```

## Notes
This function is deprecated and will be removed. To obtain information about maximum allowed packet size and
net buffer size please use [mariadb_get_infov()](mariadb_get_infov) instead.

## See also
* [mariadb_get_infov()](mariadb_get_infov)
