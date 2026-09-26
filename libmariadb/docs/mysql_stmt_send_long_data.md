## Name
mysql_stmt_send_long_data - Sends data in chunks 

## Synopsis
```C
#include <mysql.h>

my_bool mysql_stmt_send_long_data(MYSQL_STMT * stmt,
                                  unsigned int,
                                  const char * data,
                                  unsigned long);
```

## Description
Allows sending parameter data to the server in pieces (or chunks), e.g. if the size of a blob exceeds the size of max_allowed_packet size. This function can be called multiple times to send the parts of a character or binary data value for a column, which must be one of the `TEXT` or `BLOB` datatypes.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).
* `param_no` - indicates which parameter to associate the data with. Parameters are numbered beginning with 0.
* `data` - a buffer containing the data to send.
* `long` - size of the data buffer.

## Return value
Returns zero on success, nonzero if an error occurred.

## Notes
* `mysql_stmt_send_long_data()` must be called before [mysql_stmt_execute()](mysql_stmt_execute).
* bound variables for this column will be ignored when calling [mysql_stmt_execute()](mysql_stmt_execute).

## See also
* [mysql_stmt_execute()](mysql_stmt_execute).

