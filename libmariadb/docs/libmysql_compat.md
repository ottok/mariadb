# Compatibility with MySQL Connector/C (libmysql)

## History and License

Even if MariaDB Connector/C and MySQL Connector/C have common roots (namely the version 3.23.51 from the year 2003 which was published under the LGPL), both have some differences.

While MySQL Connector/C (or libmysql) was further developed under the GPL, MariaDB Connector/C was newly developed based on MySQL 3.23.51.
Major enhancements, such as the prepared statement API and numerous protocol extensions have been integrated from mysqlnd extension of the PHP project. The first version of MariaDB Connector/C was released in 2012.

 In contrast to MySQL Connector/C, MariaDB Connector/C is licensed under the LGPL license and thus can be integrated and used free of charge in almost all (including commercial/closed source) projects.

## API

API functions which are supported by both MySQL and MariaDB Connector/C are prefixed with "mysql", MariaDB specific features are prefixed with "mariadb".

**Example:**

* `mysql_real_connect`
* `mariadb_stmt_execute_direct`

No rule without exception: For example, the mysql_optionsv function only exists in MariaDB Connector / C. It was added as an extension of the existing mysql_options function to allow a function call with a variable number of parameters.

### Unsupported API functions

#### Unsupported functions in MariaDB Connector/C
* `mysql_reset_server_public_key`
* `mysql_result_metadata`  (scheduled for MariaDB C/C 3.1)
* `mysql_binlog_*` (The binlog replication API in MariaDB C/C 3.1 has a different interface)

#### Unsupported functions in MySQL Connector/C
* `mariadb_connection` 
* `mysql_optionsv`
* `mysql_get_infov`
* `mariadb_reconnect`
* `mariadb_cancel`
* `mariadb_stmt_execute_direct`
* `mysql_stmt_warning_count`
* `mysql_get_timeout_value/ms`
* `mariadb_dyncol-*` (dynamic column api)
* `mysql_async_*`  (asynchronous/non-blocking API)
* `mariadb_rpl_*` (replication/binlog API)

## Protocol

Especially in the last versions (MySQL C/C> = 5.7 and MariaDB C/C> = 3.0) some protocol extensions were added which are not or only partially supported:

|Protocol|MySQL C/C|MariaDB C/C|
|---|---|---|
|X-Protocol|X|-|
|Extended OK packet|X|- (scheduled for 3.1)|
|Prepared statement bulk insert|-|X|
|Prepared statemnt direct execution|-|X|

## Client authentication plugins
Both MySQL and MariaDB Connector/C support different kind of plugable client authentication plugins:

| Authentication plugin | MySQL C/C | MariaDB C/C|
|--|--|--|
|Native password | X | X |
|Old password | X (removed in newer versions) | X |
|Cleartext | X | X |
|Dialog| X | X |
|SHA256| X | X¹ |
|Caching SHA2| X | X¹ |
|Kerberos/GSSAPI| - | X |
|ed25519| - | X |

¹= requires OpenSSL, LibreSSL or GnuTLS

## Security/TLS (Transport layer security protocol)
Both MySQL and MariaDB Connector/C support secure connection using the TLS protocol, however with some differences:

### Supported TLS libraries

|TLS library|MySQL C/C|MariaDB C/C|
|--|--|--|
| OpenSSL | X | X |
| LibreSSL | X | X |
| GnuTLS | - | X |
| Windows Schannel | - | X |
| WolfSSL | X | -²|
| Yassl | X | -²|

²= license incompatible

### Supported TLS protocols
|Protocol version|MySQL C/C|MariaDB C/C|
|--|--|--|
|SSLv3| x (yassl only) | - |
|TLSv1.0| X | X
|TLSv1.1| X | X
|TLSv1.2| X (not yassl)| X
|TLSv1.3| X (not yassl)| X

### Supported TLS features 
| Feature|MySQL C/C| MariaDB C/C|
|--|--|--|
| ssl mode | X | - |
| server certificate verification | X | X |
| passphrase protected keys | - | X |
| force use of tls version | - | X |
| certificate finger print verification| - | X |

## Coding hints

### General advice
* Consider structures to be opaque
* * don't access internal members, e.g. like `mysql->reconnect`
* * instead use mysql_optionsv/mysql_get_optionsv for setting or retrieving information
* If there is no api function or option available for retrieving internal information, file a task in Jira system
* Don't include other files than `mysql.h` (unless you need some special API like dynamic columns or you're writing a client plugin using the client plugin interface)

### Detecting server and client library type

Often, an application will be able to build with both MariaDB or MySQL Connector/C and to connect either to a MySQL or a MariaDB server. In this case often it is necessary to determine the type of the server and/or the client library in use.

#### MariaDB or MySQL server?
Using MariaDB Connector/C it's quite simple to detect if the application is connected to MariaDB or MySQL server by using the API function `mariadb_connection()`:

```C
  if (mysql && mariadb_connection(mysql))
    printf("We're connected to a MariaDB database server");
```

When using MySQL Connector/C or you application supports both Connectors, the server version needs to be retrieved by `mysql_get_server_info()` and the returned string must be checked if it contains the string "mariadb":

```C
char *server_version= mysql_get_server_info(mysql);
if (strstr(mysql->server_version, "MariaDB") ||
    strstr(mysql->server_version, "-maria-"))
  printf("Connected to a MariaDB server\n");
```
#### MySQL or MariaDB Connector/C ?
Due to some differences an application often needs to check which connector is in use.

##### Detecting Connector at compile time
The simplest solution to detect the type of connector at compile time is to check if the preprocessor definition `MARIADB_BASE_VERSION` is defined:

```C
#ifdef MARIADB_BASE_VERSION
  const char *client_library= "MariaDB Connector/C";
#else
  const char *client_library= "MySQL Connector/C";
#endif
```
##### Detecting Connector type at run time
Since neither MySQL nor MariaDB Connector/C offer an API function to detect the type of the connector, detection is a little bit more tricky: The option `MYSQL_PROGRESS_CALLBACK` is available in MariaDB C/C only - passing it to mysql_options will result in an error, in case MySQL C/C is used:

```C
#ifndef MARIADB_BASE_VERSION
  #define MYSQL_PROGRESS_CALLBACK 5999
#endif

if (mysql_options(mysql, MYSQL_PROGRESS_CALLBACK, NULL))
  /* MYSQL_PROGRESS_CALLBACK is not defined in MySQL Connector/C, 
     therefore mysql_options() will return an error */
  printf("using MySQL Connector/C\n");
else
  printf("using MariaDB Connector/C\n");
```
