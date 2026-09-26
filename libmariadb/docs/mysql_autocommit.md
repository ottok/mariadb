## Name
mysql_autocommit - Toggles autocommit mode

## Synopsis
```C
#include <mysql.h>

my_bool mysql_autocommit(MYSQL * mysql, my_bool auto_mode);
```
## Description
Toggles autocommit mode on or off for the current database connection. Autocommit mode will be set if mode=1 or unset if mode=0.

### Parameters:
* `mysql` is a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
* `auto_mode` -  whether to turn autocommit on or not.

### Notes
* Autocommit mode only affects operations on transactional table types. To determine the current state of autocommit mode use the SQL command `SELECT @@autocommit` or check the server status (see example below).
* Be aware: the [mysql_rollback()}(mysql_rollback() function will not work if autocommit mode is switched on.

## Examples

### SQL

```SQL
# Turn off autocommit
SET AUTOCOMMIT=0;

# Retrieve autocommit
SELECT @@autocommit;
+--------------+
| @@autocommit |
+--------------+
|            0 |
+--------------+
```
### MariaDB Connector/C
```C
static int test_autocommit(MYSQL *mysql)
{
  int rc;
  unsigned int server_status;
  
  /* Turn autocommit off */
  rc= mysql_autocommit(mysql, 0);
  if (rc)
    return rc; /* Error */

  /* If autocommit = 0 succeeded, the last OK packet updated the server status */
  rc= mariadb_get_infov(mysql, MARIADB_CONNECTION_SERVER_STATUS, &server_status);
  if (rc)
    return rc; /* Error */

  if (server_status & SERVER_STATUS_AUTOCOMMIT)
  {
    printf("Error: autocommit is on\n");
    return 1;
  }
  printf("OK: autocommit is off\n");
  return 0;
}
```