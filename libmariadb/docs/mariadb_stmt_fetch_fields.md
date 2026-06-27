## Name
mariadb_stmt_fetch_fields - Returns an array of fields containing the column definitions
## Synopsis
```C
#include <mysql.h>

MYSQL_FIELD *mariadb_stmt_fetch_fields(MYSQL_STMT * stmt);
```

## Description
Returns an array of fields. Each field contains the definition for a column of the result set.
If the statement doesn't have a result set a NULL pointer will be returned.

## Parameter
* `stmt` - A statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

### Notes
The number of fields can be obtained by [mysql_stmt_field_count()](mysql_stmt_field_count)

## History
This function was added in MariaDB Connector/C 3.1.0

## See Also
*[mysql_stmt_field_count()](mysql_stmt_field_count)
