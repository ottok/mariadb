## Name
mysql_affected_rows - returns the number of rows affected by the last operation

## Synopsis
```C
#include <mysql.h>

my_ulonglong mysql_affected_rows(MYSQL * mysql);
```

## Description
Returns the number of affected rows by the last operation associated with mysql, if the operation was an "upsert" (`INSERT`, `UPDATE`, `DELETE` or `REPLACE`) statement, or -1 if the last operation failed.

### Parameters:
`mysql` is a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes:
* When using `UPDATE`, MariaDB will not update columns where the new value is the same as the old value. This creates the possibility that mysql_affected_rows may not actually equal the number of rows matched, only the number of rows that were literally affected by the query.
* The `REPLACE` statement first deletes the record with the same primary key and then inserts the new record. This function returns the number of deleted records in addition to the number of inserted records. 

# Return value
Returns the number of affected rows or -1 on error.

## See also
* [mysql_num_rows()](mysql_num_rows)