## Name
mysql_num_fields - Returns number of fields in a result set 

## Synopsis
```C
#include <mysql.h>

unsigned int mysql_num_fields(MYSQL_RES * );
```

## Description
Returns number of fields in a specified result set.

### Parameter
* `MYSQL RES *` - A result set identifier returned by [mysql_store_result()](mysql_store_result) or [mysql_use_result()](mysql_use_result).

## Return value
Returns number of fields.

## See also
* [mysql_fetch_field()](mysql_fetch_field)
* [mysql_field_count()](mysql_field_count)