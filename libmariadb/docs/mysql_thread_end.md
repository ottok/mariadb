## Name
mysql_thread_end - Releases thread specific memory

## Synopsis
```C
#include <mysql.h>

void mysql_thread_end(void );
```

## Description
The mysql_thread_end() function needs to be called before a client thread ends. It will release thread specific memory, which was allocated by a previous [mysql_thread_init()](mysql_thread_init) call. Returns void.

### Notes
Unlike [mysql_thread_init()](mysql_thread_init) mysql_thread_end() will not be invoked automatically if the thread ends. To avoid memory leaks mysql_thread_end() must be called explicitly.

## History
This function is deprecated since MariaDB Connector/C 3.0.0.

## See also
* [mysql_thread_init()](mysql_thread_init)
* [mysql_thread_safe()](mysql_thread_safe)
