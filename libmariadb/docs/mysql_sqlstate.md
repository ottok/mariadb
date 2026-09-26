## Name
mysql_sqlstate - returns SQLSTATE error code 

## Synopsis
```C
#include <mysql.h>

const char * mysql_sqlstate(MYSQL * mysql);
```

## Description
Returns a string containing the SQLSTATE error code for the most recently invoked function that can succeed or fail. The error code consists of five characters. '00000' means no error. The values are specified by ANSI SQL and ODBC

## Parameter
### Notes
Please note that not all client library error codes are mapped to SQLSTATE errors. Errors which can't be mapped will returned as value HY000.


## Return value
A string containing SQLSTATE error code.

## See also
* [mysql_error()](mysql_error)
* [mysql_errno()](mysql_errno)
