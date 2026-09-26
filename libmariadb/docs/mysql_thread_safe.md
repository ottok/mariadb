## Name
mysql_thread_safe - Indicates whether the Connector/C library was compiled as thread safe.

## Synopsis
```C
#include <mysql.h>

uint mysql_thread_safe(void);
```

## Description
Indicates whether the Connector/C library was compiled as thread-safe.

### Notes
This function exists for compatibility reasons and returns always 1.

## Return value
Returns always 1.
