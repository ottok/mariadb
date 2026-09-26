## Name
mysql_hex_string - create a hexadecimal string

## Synopsis
```C
#include <mysql.h>
unsigned long mysql_hex_string(char * to,
                               const char * from,
                               unsigned long len);
```

## Description
This function is used to create a hexadecimal string which can be used in SQL statements. e.g. `INSERT INTO my_blob VALUES(X'A0E1CD')`.

### Parameter
* `to` - result buffer
* `from` - the string which will be encoded
* `len` - length of the string (from)

### Notes
* The size of the buffer for the encoded string must be 2 * length + 1.
* The encoded string does not contain a leading X'.


## Return value
Returns the length of the encoded string without the trailing null character.

## See also
* [mysql_real_escape_string()](mysql_real_escape_string)
