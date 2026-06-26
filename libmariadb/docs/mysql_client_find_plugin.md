## Name
mysql_client_find_plugin - Finds a plugin by specified name

## Synopsis
```C
#include <mysql.h>
struct st_mysql_client_plugin * 
mysql_client_find_plugin(MYSQL *mysql, const char *name, int type);
```

## Description
Finds a plugin by specified name and type. If the plugin was not loaded before, it will be loaded first.

### Parameters
* `mysql` is a connection identifier, which was previously initialized by [mysql_init()](mysql_init) and optional connected by [mysql_real_connect()](mysql_real_connect).
* `name` The name of the plugin.
* `type` The plugin type.

Valid plugin types are:
`MYSQL_CLIENT_AUTHENTICATION_PLUGIN`, `MARIADB_CLIENT_PVIO_PLUGIN`, `MARIADB_CLIENT_REMOTEIO_PLUGIN`, `MARIADB_CLIENT_CONNECTION_PLUGIN` or `MARIADB_CLIENT_COMPRESSION_PLUGIN`.

## Return value
A pointer to the plugin handle, or NULL if an error occurred.

## Notes
If the type of the plugin is not known, -1 needs to be specified for parameter type.

## See also
* [mysql_load_plugin()](mysql_load_plugin)
* [mysql_load_pluginv()](mysql_load_pluginv)