## Name
mariadb_get_info - mariadb_get_infov - retrieves generic or connection related information

## Synopsis
```C
#include <mysql.h>

my_bool mariadb_get_info(MYSQL *mysql, enum mariadb_value value, void *arg)
```

## Description
Retrieves generic or connection related information.

### Notes
This function is deprecated. Please use [mariadb_get_infov()](mariadb_get_infov) instead.

## See also
* [mysql_get_infov()](mysql_get_infov)
