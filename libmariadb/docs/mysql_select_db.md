## Name
mysql_select_db - selects a database as default

## Synopsis
```C
#include <mysql.h>

int mysql_select_db(MYSQL * mysql,
                    const char * db);
```

## Description
Selects a database as default. Returns zero on success, non-zero on failure

### Parameters
* `mysql` is a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).
* `db` - the default database name

### Notes
* To retrieve the name of the default database either execute the SQL command `SELECT DATABASE()` or retrieve the value via [mariadb_get_infov()](mariadb_get_infov) API function.
* The default database can also be set by the db parameter in [mysql_real_connect()](mysql_real_connect).

## Examples
### SQL
```SQL
# switch to default database test
USE test;
# check default database
SELECT DATABASE();
+------------+
| database() |
+------------+
| test       |
+------------+
```

### MariadDB Connector/C
```C
static int set_default_db(MYSQL *mysql)
{
  int rc;
  char *default_db;

  /* change default database to test */
  rc= mysql_select_db(mysql, "test");
  if (rc)
    return rc;  /* Error */

  /* get the default database */
  rc= mariadb_get_infov(mysql, MARIADB_CONNECTION_SCHEMA, &default_db);
  if (rc)
    return rc; /* Error */

  if (strcmp("test", default_db) != NULL)
  {
    printf("Wrong default database\n");
    return 1;
  }
  printf("Default database: %s", default_db);
  return 0;
}
```
## See also
[mysql_real_connect()](mysql_real_connect)