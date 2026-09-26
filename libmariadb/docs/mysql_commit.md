## Name
mysql_commit - Commits the current transaction

## Synopsis
```C
#include <mysql.h>

my_bool mysql_commit(MYSQL * mysql);
```
## Description
Commits the current transaction for the specified database connection. Returns zero on success, nonzero if an error occurred.

### Parameters
* `mysql` is a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
Executing mysql_commit() will not affected the behaviour of autocommit. This means, any update or insert statements following mysql_commit() will be rolled back when the connection gets closed.

== See also
* [mysql_autocommit()](mysql_autocommit)
* [mysql_rollback()](mysql_rollback)

