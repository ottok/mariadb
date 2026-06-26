## Name
mysql_get_socket -  Returns the descriptor of the socket used for the current connection

## Synopsis
```C
#include <mysql.h>

my_socket mysql_get_socket(MYSQL * mysql);
```

## Description
Returns the descriptor of the socket used for the current connection.

### Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

## Return value
A socket handle or INVALID_SOCKET (-1) if the socket descriptor could not be determined, e.g. if the connection doesn't use a socket connection.

## See also
* [mysql_real_connect()](mysql_real_connect)
