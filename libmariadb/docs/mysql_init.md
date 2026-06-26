## Name
mysql_init - Prepares and initializes a ```MYSQL``` structure

## Synopsis
```C
#include <mysql.h>

MYSQL *mysql_init(MYSQL *mysql);
```
## Description
Prepares and initializes a ```MYSQL``` structure to be used with [mysql_real_connect()](mysql_real_connect).
If an address of a ```MYSQL``` structure was passed as parameter, the structure will be initialized, if ```NULL``` was passed, a new structure will be allocated and initialized.

**Notes:**
* If parameter ```mysql``` is not ```NULL``` [mysql_close()](mysql_close) API function will not release the memory
* Any subsequent calls to any function (except [mysql_optionsv()](mysql_optionsv) will fail until [mysql_real_connect()](mysql_real_connect) was called.
* Memory allocated by ```mysql_init()``` must be freed with [mysql_close()](mysql_close).

## Return value
The ```mysql_init()``` function returns an address of a ```MYSQL``` structure, or NULL in case of memory allcation error.

## See also
* [mysql_close()](mysql_close)
* [mysql_optionsv()](mysql_optionsv)

