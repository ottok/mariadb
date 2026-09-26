## Name
mysql_real_escape_string - escape string by taking into account character set of connection

## Synopsis
```C
#include <mysql.h>

unsigned long mysql_real_escape_string(MYSQL * mysql,
                                       char * to,
                                       const char * from,
                                       unsigned long);
```

## Description
This function is used to create a legal SQL string that you can use in an SQL statement. The given string is encoded to an escaped SQL string, taking into account the current character set of the connection.

### Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
* `to` - buffer for the encoded string. The size of this buffer must be length * 2 + 1 bytes: in worst case every character of the from string needs to be escaped. Additionally a trailing 0 character will be appended.
* `from` - a string which will be encoded by mysql_real_escape_string().
* `long` - the length of the `from` string.

## Return value
Returns the length of the encoded (to) string.

## See also
* [mysql_escape_string()](mysql_escape_string)
* [mysql_hex_string()](mysql_hex_string)
