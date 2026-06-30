## Name
mariadb_get_infov - retrieves generic or connection related information

## Synopsis
```C
#include <mysql.h>

int mariadb_get_infov(MYSQL * mysql,
                      enum mariadb_value value,
                      void * arg,
                      ...);
```

# Description
Retrieves generic or connection specific information.  ```arg``` (and further arguments) must be a pointer to a variable of the type appropriate for the ```value``` argument. The following table shows which variable type to use for each value. 

| Variable Type |  Values |
|-|-|
| ```unsigned int```|```MARIADB_CLIENT_VERSION_ID```, ```MARIADB_CONNECTION_ASYNC_TIMEOUT```, ```MARIADB_CONNECTION_ASYNC_TIMEOUT_MS```, ```MARIADB_CONNECTION_ERROR_ID```, ```MARIADB_CONNECTION_PORT```, ```MARIADB_CONNECTION_PROTOCOL_VERSION_ID```, ```MARIADB_CONNECTION_PVIO_TYPE```, ```MARIADB_CONNECTION_SERVER_STATUS```,  ```MARIADB_CONNECTION_SERVER_VERSION_ID```,  ```MARIADB_CONNECTION_TLS_VERSION_ID``` |
| ```unsigned long``` | ```MARIADB_CONNECTION_CLIENT_CAPABILITIES```, ```MARIADB_CONNECTION_EXTENDED_SERVER_CAPABILITIES```, ```MARIADB_CONNECTION_SERVER_CAPABILITIES```
| ```size_t``` | ```MARIADB_MAX_ALLOWED_PACKET```, ```MARIADB_NET_BUFFER_LENGTH``` |
| ```const char *``` | ```MARIADB_CLIENT_VERSION```, ```MARIADB_TLS_LIBRARY```, ```MARIADB_CONNECTION_ERROR```,  ```MARIADB_CONNECTION_HOST```, ```MARIADB_CONNECTION_INFO```, ```MARIADB_CONNECTION_SCHEMA```, ```MARIADB_CONNECTION_SERVER_TYPE```, ```MARIADB_CONNECTION_SERVER_VERSION```,  ```MARIADB_CONNECTION_SQLSTATE```, ```MARIADB_CONNECTION_SSL_CIPHER```,  ```MARIADB_CONNECTION_TLS_VERSION```, ```MARIADB_CONNECTUION_UNIX_SOCKET```, ```MARIADB_CONNECTION_USER```,
| ```const char **``` | ```MARIADB_CLIENT_ERRORS```|
| ```const *MY_CHARSET_INFO```| ```MARIADB_CHARSET_NAME```, `MARIADB_CONNECTION_CHARSET_INFO` |
|```my_socket```| `MARIADB_CONNECTION_SOCKET`|
|```MARIADB_X509_INFO *```| `MARIADB_TLS_PEER_CERT_INFO`|

### Value types

#### Generic information
For these information types parameter `mysql` needs to be set to NULL.

* ```MARIADB_CHARSET_NAME```\
 Retrieves the charset information for a character set by it's literal representation.
* ```MARIADB_CLIENT_ERRORS```\
 Retrieve array of client errors. This can be used in plugins to set global error messages (which are not exported by MariaDB Connector/C).
* ```MARIADB_CLIENT_VERSION```\
 The client version in literal representation.
* ```MARIADB_CLIENT_VERSION_ID```\
The client version in numeric format.
* ```MARIADB_MAX_ALLOWED_PACKET```\
Retrieves value of maximum allowed packet size.
* ```MARIADB_NET_BUFFER_LENGTH```\
Retrieves the length of net buffer.


#### Connection and TLS related information
For these information types parameter mysql must be represent a valid connection handle which was allocated by [mysql_init()](mysql_init).

* ```MARIADB_CONNECTION_ASYNC_TIMEOUT```\
Retrieves the timeout for non blocking calls in seconds.
* ```MARIADB_CONNECTION_ASYNC_TIMEOUT_MS```\
 Retrieves the timeout for non blocking calls in milliseconds.
* ```MARIADB_CONNECTION_CHARSET_INFO```\
Retrieves character set information for given connection. 
* ```MARIADB_CONNECTION_CLIENT_CAPABILITIES```\
Returns the capability flags of the client.
* ```MARIADB_CONNECTION_ERROR```\
Retrieves error message for last used command. 
* ```MARIADB_CONNECTION_ERROR_ID```\
Retrieves error number for last used command. 
*```MARIADB_CONNECTION_EXTENDED_SERVER_CAPABILITIES```\
Returns the extended capability flags of the connected MariaDB server
* ```MARIADB_CONNECTION_HOST```\
Returns host name of the connected MariaDB server
* ```MARIADB_CONNECTION_INFO```\
Retrieves generic info for last used command.
* ```MARIADB_CONNECTION_PORT```\
Retrieves the port number of server host.
* ```MARIADB_CONNECTION_PROTOCOL_VERSION_ID```\
Retrieves the protocol version number.
* ```MARIADB_CONNECTION_PVIO_TYPE```\
Retrieves the pvio plugin used for specified connection.
* ```MARIADB_CONNECTION_SCHEMA```\
Retrieves the current schema.
* ```MARIADB_CONNECTION_SERVER_CAPABILITIES```\
Retrievrs the capability flags of the connected server.
* ```MARIADB_CONNECTION_SERVER_STATUS```\
Returns server status after last operation. 
* ```MARIADB_CONNECTION_SERVER_TYPE```\
Retrieves the type of the server.
* ```MARIADB_CONNECTION_SERVER_VERSION```\
Retrieves the server version in literal format.
* ```MARIADB_CONNECTION_SERVER_VERSION_ID```\
Retrieves the server version in numeric format.
* ```MARIADB_CONNECTION_SOCKET```\
Retrieves the handle (socket) for given connection.
* ```MARIADB_CONNECTION_SQLSTATE```\
Retrieves current sqlstate information for last used command. 
* ```MARIADB_CONNECTION_SSL_CIPHER```\
Retrieves the TLS/SSL cipher in use.
* ```MARIADB_TLS_LIBRARY```\
Retrieves the name of TLS library.
* ```MARIADB_CONNECTION_TLS_VERSION```\
Retrieves the TLS protocol version used in literal format.
* ```MARIADB_CONNECTION_TLS_VERSION_ID```\
Retrieves the TLS protocol version used in numeric format.
* ```MARIADB_CONNECTION_UNIX_SOCKET```\
Retrieves the file name of the unix socket
* ```MARIADB_CONNECTION_USER```\
Retrieves connection's user name.
* ``` MARIADB_TLS_PEER_CERT_INFO```
Retrieves peer certificate information for TLS connections. The returned pointer to a MARIADB_X509_INFO structure becomes invalid after the connection has been closed. (Added in version 3.4.0)
* ```MARIADB_TLS_VERIFY_STATUS```
Retrieves the status of a previous peer certificate verification. The status is represented as a combination of [TLS verification flags](types#tls-verification-flags). This option was added in version 3.4.1



## Returns

Returns zero on success, non zero if an error occurred (e.g. if an invalid option was specified),

## Source file
```libmariadb/mariadb_lib.c```

## History
This function was added in MariaDB Connector/C 3.0,

## Examples
```
/* get server port for current connection */
unsigned int port;
mariadb_get_infov(mysql, MARIADB_CONNECTION_PORT, (void *)&port);
```
```
/* get user name for current connection */
const char *user;
mariadb_get_infov(mysql, MARIADB_CONNECTION_USER, (void *)&user);
```
## See also
* [mysql_get_optionv()](mysql_get_optionv)

