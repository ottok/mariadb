## Name
mysql_session_track_get_next - Retrieves the next session status change information

## Synopsis
```C
#include <mysql.h>

int mysql_session_track_get_next(MYSQL * mysql,
                                 enum enum_session_state_type type,
                                 const char **data,
                                 size_t *length );
```
## Description
`mysql_session_track_get_next()` retrieves the session status change information received from the server after a successful call to [mysql_session_track_get_first()](mysql_session_track_get_first).

`mysql_session_track_get_next()` needs to be called repeatedly until a non zero return value indicates end of data.

### Parameters
* `mysql` - mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected bys [mysql_real_connect()](mysql_real_connect).
* `type` - type of information. Valid values are
  * `SESSION_TRACK_SYSTEM_VARIABLES`
  * `SESSION_TRACK_SCHEMA`
  * `SESSION_TRACK_STATE_CHANGE`
  * `SESSION_TRACK_GTIDS` (unsupported)
* `data` - pointer to data, which must be declared as `const char *`
* `length` - pointer to a `size_t` variable, which will contain the length of data

## Return value
Zero for success, nonzero if an error occurred.

## History
`mysql_session_track_get_next()` was added in Connector/C 3.0 and MariaDB Server 10.2.

## See also
[mysql_session_track_get_first()](mysql_session_track_get_first)
