# Building an application with MariaDB Connector/C

## Configuration tools

- [mariadb_config: Configuration settings utility](mariadb_config)
- pkg-config: Determine configuration settings with pkg-config

### Include files

#### How to find MariaDB include files

##### Windows
For Microsoft Windows Platforms MariaDB Connector/C doesn't provide configuration tools, in the default installation the files will be always installed at the same location.

The windows default installation (using MariaDB Connector/C MSI package) installs the include files in folder
`\ProgramFiles\MariaDB\MariaDB Connector/C 64-bit\include` (or for 32-bit installation in `\ProgramFiles\MariaDB\MariaDB Connector/C 32-bit\include`.

##### Posix
On Posix platforms you can either use the `mariadb_config` utility which is located in the binary folder of your MariaDB Connector/C installation, or you can use the pkg-config command of your distribution, e.g.

```
$> mariadb_config --include
-I/usr/local/include/mariadb
```

```
$> pkg-config  libmariadb --cflags
-I/usr/local/include/mariadb
```

If you're using a different compiler than gcc or clang, you might need to adjust the include option for the compiler.

#### General includes
For using MariaDB Connector/C from your application, only the include file `mysql.h` is required.

#### Error handling
If you don't want to deal with numbers but also with the error code definitions, you need to include `errmsg.h` for client errors and `mysqld_error.h` for server errors. The latter one might not contain the latest server error codes, e.g. if you're using MySQL Connector/C from 10.2 server package it will not contain 10.3 or 10.4 error codes. It will also not contain all error codes from MySQL Server.

#### MariaDB extensions
Some special and not widely used extensions like the asynchronous API have their own include files which are not automatically included by `mysql.h`.

|Extension|required include files|
|--|--|
|Dynamic column API|`mariadb_dyncol.h`|
|Asynchronous/non-blocking API|`mariadb_async.h`|
|Replication/Binlog API|`mariadb_rpl.h`|

#### Client plugins
If you want to develop a client plugin (e.g. for authentication or connection handling) the plugin code must include `mysql/client_plugin.h`.

### Linking your application against MariaDB Connector/C

#### Windows
For static linking the library `libmariadb.lib` is required, for dynamic linking use `libmariadb.dll`. Using the MSI installer, these libraries can be found in the lib directory of your MariaDB Connector/C installation.

Unless you use the experimental plugin `remote_io` (which requires the curl library) there are no dependencies to other libraries than the Windows system libraries.

#### Posix

To detect library path and the required libraries, use `mariadb_config` or `pkg_config` command:

```
$ mariadb_config --libs
-L/usr/local/lib/mariadb/ -lmariadb -ldl -lm -lpthread -lssl -lcrypto
$ pkg-config libmariadb --libs
-L/usr/local/lib/mariadb/ -lmariadb -ldl -lm -lpthread -lssl -lcrypto
```

Both programs will return the location of the MariaDB Connector/C library (-L), the library name (-lmariadb) and the depending libraries.

To use the static library, extract the library path from mariadb_config output or specify the option `--libs-only-L` when running the pkg-config command and append libmariadbclient.a to the path.

Example using gcc:
```gcc -o my_test my_test.o -L/usr/local/lib/mariadb/libmariadbclient.a```

Depending on the configuration, you might need to also link against the libraries returned by --libs option.
