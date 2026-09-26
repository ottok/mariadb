## Name
mysql_set_server_option - Sets server option

## Synopsis
```C
#include <mysql.h>

int mysql_set_server_option(MYSQL * mysql,
                            enum enum_mysql_set_option);
```


## Description

Sets server option.

### Parameters
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
* `enum_mysql_set_option` - server option (see below)
    Server option, which can be one of the following values:

| Option | Description |
|--|--|
| MYSQL_OPTION_MULTI_STATEMENTS_OFF | Disables multi statement support |
| MYSQL_OPTION_MULTI_STATEMENTS_ON | Enable multi statement support |


## Return value
Returns zero on success, non-zero on failure.

## See also
* [mysql_real_connect()](mysql_real_connect)
