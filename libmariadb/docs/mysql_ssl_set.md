## Name
mysql_ssl_set - Sets TLS/SSL options

## Synopsis
```C
#include <mysql.h>

my_bool mysql_ssl_set(MYSQL *mysql,
                      const char *key,
                      const char *cert,
                      const char *ca,
                      const char *capath,
                      const char *cipher)
```


## Description

Used for establishing a secure TLS connection. It must be called before attempting to use [mysql_real_connect()](mysql_real_connect). TLS support must be enabled in the client library in order for the function to have any effect.

`NULL` can be used for an unused parameter. Always returns zero.

To enable TLS without specifying certificates, set all values to `NULL`:
```C
mysql_ssl_set(mysql, NULL, NULL, NULL, NULL, NULL)
```

This is the same as [`mysql_optionsv(mysql, MYSQL_OPT_SSL_ENFORCE, &yes)`](mysql_optionsv).

### Parameter
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init).
* `key` - path to the key file.
* `cert` - path to the certificate file.
* `ca` - path to the certificate authority file.
* `capath` - path to the directory containing the trusted TLS CA certificates in PEM format.
* `cipher` list of permitted (SSLv3, TLSv1.0 or TLSv1.2) cipher suites to use for TLS encryption.

### Notes
* [mysql_real_connect()](mysql_real_connect) will return an error if attempting to connect and TLS is incorrectly set up.
* Even if Connector/C supports TLSv1.3 protocol, it is not possible yet to specify TLSv1.3 cipher suites via `cipher` parameter.


## See also
* [mysql_get_ssl_cipher()](mysql_get_ssl_cipher)