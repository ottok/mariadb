## Name
mysql_get_ssl_cipher - returns the cipher suite in use

## Synopsis
```C
#include <mysql.h>

const char *mysql_get_ssl_cipher(MYSQL *mysql) 
```

## Description
Returns the name of the currently used cipher suite of the secure connection, or NULL for non TLS connections.

### Parameter
* `mysql` - a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
* For using `mysql_get_ssl_cipher()` MariaDB Connector/C must be built with TLS/SSL support, otherwise the function will return NULL.
* `mysql_get_ssl_cipher()' can be used to determine if the client server connection is secure.
* Depending on the TLS library in use (OpenSSL, GnuTLS or Windows Schannel) the name of the cipher suites may differ. For example the cipher suite 0x002F (`TLS_RSA_WITH_AES_128_CBC_SHA`) has different names: `AES128-SHA` for  OpenSSL and Schannel and `TLS_RSA_AES_128_CBC_SHA1` for GnuTLS.

## Return value
Returns a zero terminated string containing the cipher suite used for a secure connection, or `NULL` if connection doesn't use TLS/SSL.

## See also
* [mysql_ssl_set()](mysql_ssl_set)
