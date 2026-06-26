## Name
mysql_rollback - Rolls back the current transaction

## Synopsis
```C
#include <mysql.h>

my_bool mysql_rollback(MYSQL * mysql);
```


## Description
Rolls back the current transaction for the database. Returns zero on success, nonzero if an error occurred.

### Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
* mysql_rollback() will not work as expected if autocommit mode was set or the storage engine does not support transactions.

## See also
* [mysql_commit()](mysql_commit)
* [mysql_autocommit()](mysql_autocommit)
