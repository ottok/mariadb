## Name
mysql_server_init - Initializes library

## Synopsis
```C
#include <mysql.h>

int mysql_library_init(int argc __attribute__((unused)),
                       char **argv __attribute__((unused)),
                       char **groups __attribute__((unused)))
```

## Description
Call to initialize the library before calling other functions. 


## Parameters
All parameters are unused, they only exist for compatibility reasons.

### Notes
* Call [mysql_server_end()](mysql_server_end) to clean up after completion.
* If the library was not explicitly initialized by `mysql_server_init()` any call to [mysql_init()](mysql_init) will automatically initialize the library.
* `mysql_library_init()` is an alias for `mysql_server_init()`

## Return value
Returns zero for success, or nonzero if an error occurred. 
## See also
* [mysql_server_end()](mysql_server_end)
