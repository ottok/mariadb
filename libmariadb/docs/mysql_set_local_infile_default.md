## Name
mysql_set_local_infile_default - Sets local infile callback functions to default

## Synopsis
```C
#include <mysql.h>

void mysql_set_local_infile_default(MYSQL *conn);
```

## Description
Sets local infile callback functions to MariaDB Connector/C internal default callback functions.

### Parameter
* `mysql` - mysql handle, which was previously allocated by [mysql_init()](mysql_init)

## See also
* [mysql_set_local_infile_handler()](mysql_set_local_infile_handler)
