## Name
mysql_stmt_result_metadata - Returns result set metadata from a prepared statement.

## Synopsis
```C
#include <mysql.h>

MYSQL_RES * mysql_stmt_result_metadata(MYSQL_STMT * stmt);
```

## Description
If a statement passed to [mysql_stmt_prepare()](mysql_stmt_prepare) is one that produces a result set, mysql_stmt_result_metadata() returns the result set that can be used to process the meta information such as total number of fields and individual field information.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).

## Return value
Returns a result set that can be used to process metadata information.

### Notes
* The result set returned by mysql_stmt_result_metadata() contains only metadata. It does not contain any row results. The rows are obtained by [mysql_stmt_fetch()](mysql_stmt_fetch).
* This result set pointer can be passed as an argument to any of the field-based functions that process result set metadata, such as: [mysql_num_fields()](mysql_num_fields), [mysql_fetch_field()](mysql_fetch_field), [mysql_fetch_field_direct()](mysql_fetch_field_direct), [mysql_fetch_fields()](mysql_fetch_fields), [mysql_field_count()](mysql_field_count), [mysql_field_seek()](mysql_field_seek), [mysql_field_tell()](mysql_field_tell), [mysql_free_result()](mysql_free_result)


## See Also
* [mariadb_stmt_fetch_fields()](mariadb_stmt_fetch_fields)
* [mysql_free_result()](mysql_free_result)
* [mysql_stmt_prepare()](mysql_stmt_prepare)
