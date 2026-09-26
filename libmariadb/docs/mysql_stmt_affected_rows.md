## Name
mysql_stmt_affected_rows - Returns the number of affected rows from previous executed prepared statement

## Synopsis
```C
#include <mysql.h>

my_ulonglong mysql_stmt_affected_rows(MYSQL_STMT * stmt);
```
## Description
Returns the number of affected rows by the last prepared statement associated with mysql, if the operation was an "upsert" (INSERT, UPDATE, DELETE or REPLACE) statement, or -1 if the last prepared statement failed.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init().]]

## Notes
* When using `UPDATE`, MariaDB will not update columns where the new value is the same as the old value. This creates the possibility that `mysql_stmt_affected_rows()` may not actually equal the number of rows matched, only the number of rows that were literally affected by the query.
* The `REPLACE` statement first deletes the record with the same primary key and then inserts the new record. This function returns the number of deleted records in addition to the number of inserted records.


## See Also
* [mysql_stmt_insert_id()](mysql_stmt_insert_id)
