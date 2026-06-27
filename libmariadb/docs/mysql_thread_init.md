## Name
mysql_thread_init - initialize thread

## Synopsis
```C
#include <mysql.h>

my_bool mysql_thread_init(void );
```

## Description
Thread initialization for multi threaded clients. Multi threaded clients should call mysql_thread_init() at the beginning of the thread initialization to initialize thread specific client library variables. If mysql_thread_init() was not called explicitly, it will be called automatically by [mysql_init()](mysql_init) or [mysql_real_connect()](mysql_real_connect). 

### Notes
Before a client thread ends the [mysql_thread_end()](mysql_thread_end) function must be called to release memory - otherwise the client library will report an error.

## Return value
Returns zero if successful or 1 if an error occurred.

## History
This function is deprecated since MariaDB Connector/C 3.0.0.

## See also
* [mysql_thread_end()](mysql_thread_end)
* [mysql_thread_safe()](mysql_thread_safe)
