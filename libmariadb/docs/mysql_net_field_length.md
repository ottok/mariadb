## Name
mysql_net_field_length - Returns the length of a length encoded field

## Synopsis
```C
#include <mysql.h>

ulong mysql_net_field_length(unsigned char **packet)
```


## Description
Returns the length of a length encoded field and increments the pointer to the beginning of the field.

## Parameters
* `packet` - a pointer to a length encoded field buffer.

## Notes
This function is part of the low level protocol API and can be used to retrieve data if a callback function was provided for fetching results from prepared statements.

## Return value
Returns the length of the field.

## See also
[mysql_net_read_packet](mysql_net_read_packet)