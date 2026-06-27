## Name
mysql_warning_count -  Returns the number of warnings

## Synopsis
```C
#include <mysql.h>

unsigned int mysql_warning_count(MYSQL * mysql);
```

## Description
Returns the number of warnings from the last executed query, or zero if there are no warnings.

### Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
* For retrieving warning messages you should use the SQL command `SHOW WARNINGS`. 
* If SQL_MODE `TRADITIONAL` is enabled an error instead of warning will be returned. For detailed information check the server documentation.

## Return value
Returns the number of warnings

## See also
* [mysql_error()](mysql_error)
* [mysql_errno()](mysql_errno)
