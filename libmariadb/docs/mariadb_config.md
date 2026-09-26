## mariadb_config

On Posix platforms MariaDB Connector/C provides the mariadb_config binary which provides necessary information to build client applications with MariaDB Connector/C.

### Options

All options returned are tied to the compiler and linker which were used to build MariaDB Connector/C. They might be not compatible if you use a different compiler or linker.

* `--clags`
C compiler flags and include file settings. If no special include file settings were specified, this option is identical to `--include` option

* `--include`
returns the compiler options for finding MariaDB Connector/C include files

* `--libs, --libs_r`
returns the required options to link with MariaDB Connector/C. MariaDB Connector/C is always build thread safe, so the output of both options is the same.

* `--libs_sys`
returns the system libraries used to link with MariaDB Connector/C.

* `--version`
returns the version number. This version number corresponds to the MariaDB server package.

* `--cc_version`
returns the version number of MariaDB Connector/C.

* `--socket`
returns the default location for unix socket file

* `--port`
returns the default port for connection to MariaDB server.

* `--plugindir`
returns the location of the installed client plugins of MariaDB Connector/C.

* `--tlsinfo`
returns the TLS/crypto library and version number in use.

When executing `mariadb_config` without specifying an option a list of all options and their values will be returned:
```
$> mariadb_config
Copyright 2011-2019 MariaDB Corporation AB
Get compiler flags for using the MariaDB Connector/C.
Usage: mariadb_config [OPTIONS]
  --cflags        [-I/usr/local/include/mariadb -I/usr/local/include/mariadb/mysql]
  --include       [-I/usr/local/include/mariadb -I/usr/local/include/mariadb/mysql]
  --libs          [-L/usr/local/lib/mariadb/ -lmariadb -ldl -lm -lpthread -lssl -lcrypto]
  --libs_r        [-L/usr/local/lib/mariadb/ -lmariadb -ldl -lm -lpthread -lssl -lcrypto]
  --libs_sys      [-ldl -lm -lpthread -lssl -lcrypto]
  --version       [10.3.6]
  --cc_version    [3.0.10]
  --socket        [/tmp/mysql.sock]
  --port          [3306]
  --plugindir     [/usr/local/lib/mariadb/plugin]
  --tlsinfo       [OpenSSL 1.1.1]
```