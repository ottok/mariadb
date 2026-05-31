## Name
mysql_refresh - flushes information on the server

## Synopsis
```C
#include <mysql.h>

int mysql_refresh(MYSQL * mysql, unsigned int options);
```


## Description
Flushes different types of information stored on the server. The bit-masked parameter options specify which kind of information will be flushed. 

### Parameters
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
* `options` - a bit masked composed integer. See below.

`options` can be any combination of the following flags:

| Option | Description |
|-|-|
| `REFRESH_GRANT` | Refresh grant tables. |
| `REFRESH_LOG` | Flush logs. |
| `REFRESH_TABLES` | Flush table cache. |
| `REFRESH_HOSTS` | Flush host cache. |
| `REFRESH_STATUS` | Reset status variables. |
| `REFRESH_THREADS` | Flush thread cache. |
| `REFRESH_SLAVE` | Reset master server information and restart slaves. |
| `REFRESH_MASTER` | Remove binary log files. |

### Notes
* To combine different values in the options parameter use the OR operator '|'. 
* `mysql_reload()` is an alias for mysql_refresh().

## Return value
Returns zero on success, otherwise non zero.
