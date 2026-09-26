## Name
mysql_stmt_fetch_column - Fetches a single column into bind buffer 

## Synopsis
```C
#include <mysql.h>

int mysql_stmt_fetch_column(MYSQL_STMT * stmt,
                            MYSQL_BIND * bind_arg,
                            unsigned int column,
                            unsigned long offset);
```


## Description
This function can be used to fetch large data of a single column in pieces. 

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).
* `bind_arg`  - a pointer to a MYSQL_BIND structure.
* `column` - number of column, first column is numbered zero.
* `offset` - offset at which to begin retrieving data.

## Return value
Returns zero on success, non-zero on failure.

## Notes
* The size of the buffer is specified within MYSQL_BIND structure.

## See Also
* [mysql_stmt_fetch()](mysql_stmt_fetch)
* [mysql_stmt_send_long_data()](mysql_stmt_send_long_data)
