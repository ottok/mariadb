## Name
mysql_reset_connection - Resets connection and clears session state

## Synopsis
```C
#include <mysql.h>

int mysql_reset_connection(MYSQL * mysql);
```

## Description
Resets the current connection and clears session state. Similar to [mysql_change_user()](mysql_change_user) or [mariadb_reconnect()](mariadb_reconnect), mysql_reset_connection() resets session status, but without disconnecting, opening, or reauthenticating.

On client side mysql_reset_connection()
* clears pending or unprocessed result sets
* clears status like affected_rows, info or last_insert_id
* invalidates active prepared statements

On server side mysql_reset_connection()
* drops temporary table(s)
* rollbacks active transaction
* resets autocommit mode
* releases table locks
* initializes session variables (and sets them to the value of corresponding global variables)
* closes active prepared statements
* clears user variables

### Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

## Return value
Returns zero on success, non zero if an error occurred.

## History
This function was added in MariaDB Connector/C 3.0.0.

## See also
* [mariadb_cancel()](mariadb_cancel)
* [mysql_kill()](mysql_kill)

