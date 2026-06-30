## Name
mysql_load_plugin - Loads and initializes a plugin

## Synopsis
```C
#include <mysql.h>

struct st_mysql_client_plugin *
mysql_load_plugin(struct st_mysql *mysql, const char *name, int type,
                  int argc, ...);

```

## Description
Loads and initializes a client plugin. If the plugin was not loaded before, it will be loaded first.

### Parameters
* `mysql` is a connection identifier, which was previously initialized by [mysql_init()](mysql_init) and optional connected by [mysql_real_connect()](mysql_real_connect).
* `name` The name of the plugin.
* `type` The plugin type or -1 if the plugin type is not known.
* `argc` Number of parameters to pass to the plugin initialization function
* `...`  Parameters for plugin initialization

Valid plugin types are:
`MYSQL_CLIENT_AUTHENTICATION_PLUGIN`, `MARIADB_CLIENT_PVIO_PLUGIN`, `MARIADB_CLIENT_REMOTEIO_PLUGIN`, `MARIADB_CLIENT_CONNECTION_PLUGIN` or `MARIADB_CLIENT_COMPRESSION_PLUGIN`.

## Return value
A pointer to the plugin handle, or NULL if an error occurred.

## Notes
- If the type of the plugin is not known, -1 needs to be specified for parameter type.
- The directory which contains the plugin can be specified either by the environment variable `MARIADB_PLUGIN_DIR` or it can be specified with [mysql_optionsv()](mysql_optionsv) using the option `MYSQL_PLUGIN_DIR`.

## See also
* [mysql_find_plugin()](mysql_find_plugin)
* [mysql_load_pluginv()](mysql_load_pluginv)