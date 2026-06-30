# Configuration files

By default MariaDB Connector/C doesn't read any configuration file, this needs to be forced either by setting the option `MYSQL_READ_DEFAULT_FILE` or `MYSQL_READ_DEFAULT_GROUP`:


```C
/* process options from a configuration file which is not in standard place */
rc= mysql_options(mysql, MYSQL_READ_DEFAULT_FILE, "/home/jeff/config/my_config.cnf");

/* Only process options from group my_app */
rc= mysql_options(mysql, MYSQL_READ_DEFAULT_GROUP, "my_app"`);

```

## Default location of configuration files
If a group (or an empty group) was specified, MariaDB Connector/C looks for configuration files in the following locations:

### Windows
1. System windows directory
2. System directory
3. Windows directory
4. C:\
5. MARIADB_HOME environment variable

### Posix/Linux
1. SYSCONFDIR (if Connector/C was build with server package)
2. /etc/
3. /etc/mysql
4. MARIADB_HOME environment variable
5. .my.cnf in home directory of the current user

## Default groups
In addition to the specified group MariaDB Connector/C will process options from the following groups:

1. [client]
2. [client-server]
3. [client-mariadb]
4. [group] (if specified via mysql_options)

## Configuration options

| Option | Type | Description |
| - | - | - |
| bind-address |  string | Bind to a specific address 
| character-sets-dir |  string | not in use
| compress |  boolean(0/1) | Use compressed protocol
| connection | string | A connection string as described in [mariadb_connect()](../mariadb_connect) function.
| connect-timeout |  numeric | Connection timeout
| database |  string | Default database (schema)
| debug |  string | not in use
| default-auth |  string | Default authentication method
| default-character-set |  string | default character set
| disable-local-infile |  none | Disable use of LOAD .. LOCAL command
| host |  string | Server name or IP address
| init-command |  string | one or more commands which will be sent directly after a connection was established
| interactive-timeout |  none | Enables interactive timeout 
| local-infile |  boolean(0/1) | Enable use of LOAD .. LOCAL command
| max-allowed-packet |  numeric | max. allowed packet size
| multi-queries |  bool | Allow execution of multiple semicolon separated statements
| multi-results |  bool | Allow processing multiple results
| multi-statements |  string | Alias for mult-queries 
| net-buffer-length |  numeric | Length of net buffer
| password |  string | Password (not recommended to set the password in a configuration file)
| pipe |  boolean(0/1) | Use named pipe (Windows only)
| plugin-dir |  string | client plugin directory
| port |  numeric | Port number of server
| protocol |  numeric | Protocol
| reconnect |  boolean(0/1) | Force automatic reconnect
| restricted-auth| string| Restricted authentication plugins
| report-data-truncation |  boolean(0/1) | Report data truncation in binary protocol
| return-found-rows |  none | Return found rows
| secure-auth |  boolean(0/1) | Use secure authentication
| server-public-key |  string | Not in use
| shared-memory-base-name |  string | shared memory base name (Windows only) 
| socket, unix_socket |  string | Unix socket
| ssl-capath |  string | Directory which contains trusted SSL Certificate Authority certificate files
| ssl-ca |  string | Trusted SSL Certificate Authority file
| ssl-cert |  string | X509 client certificate
| ssl-cipher |  string | Force use of specified cipher suite(s)
| ssl-crlpath |  string | Directory which contains certificate revocation-list files 
| ssl-crl |  string | certificate revocation-list file
| ssl-enforce |  boolean(0/1) | Use TLS/SSL connection
| ssl-fp-list |  string | File that contains one or more finger prints of server certificates 
| ssl-fp |  string | Finger print of server certificate
| ssl-key |  string | X509 key
| ssl-passphrase |  string | Passphrase for passphrase protected X509 keys
| ssl-verify-server-cert |  boolean(0/1) | Verify server X509 certificate
| timeout |  numeric | Read/Write timeout in seconds
| tls-version |  string | Force use of TLS version.
| user |  string | Name of the user 
