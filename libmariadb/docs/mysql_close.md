## Name
mysql_close - Closes a previously opened connection

## Synopsis
```C
#include <mysql.h>

void mysql_close(MYSQL *mysql);
```
## Description
Closes a previously opened connection and deallocates all memory. 

## Notes
* To reuse a connection handle after `mysql_close()` the handle must be initialized again by [mysql_init()](mysql_init).

## See also
* [mysql_init()](mysql_init)
* [mysql_real_connect()](mysql_real_connect)

