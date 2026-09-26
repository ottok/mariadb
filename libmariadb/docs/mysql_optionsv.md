## Name
mysql_optionsv - Used to set extra connect options and affect behavior of a connection

## Synopsis
```C
#include <mysql.h>

int mysql_optionsv(MYSQL * mysql,
                   enum mysql_option,
                   const void * arg,
                   ...);
```

## Description
Used to set extra connect options and affect behavior for a connection. This function may be called multiple times to set several options. `mysql_optionsv()` should be called after [mysql_init()](mysql_init).

### Options
The following table shows which variable type to use for each option. 

| Variable Type |  Values |
|-|-|
| `my_bool` | `MYSQL_OPT_RECONNECT`, `MYSQL_SECURE_AUTH`, `MYSQL_REPORT_DATA_TRUNCATION`, `MYSQL_OPT_SSL_ENFORCE`, `MYSQL_OPT_SSL_VERIFY_SERVER_CERT`, `MARIADB_OPT_SKIP_READ_RESPONSE`
| `unsigned int`| `MYSQL_OPT_PORT`, `MYSQL_OPT_LOCAL_INFILE`, `MYSQL_OPT_CONNECT_TIMEOUT`, `MYSQL_OPT_PROTOCOL`, `MYSQL_OPT_READ_TIMEOUT`, `MYSQL_OPT_WRITE_TIMEOUT`
| `unsigned long` | `MYSQL_OPT_NET_BUFFER_LENGTH`, `MYSQL_OPT_MAX_ALLOWED_PACKET` |
| `const char *` | `MYSQL_INIT_COMMAND`, `MARIADB_OPT_UNIXSOCKET`, `MARIADB_OPT_PASSWORD` , `MARIADB_OPT_USER`, `MARIADB_OPT_HOST`, `MARIADB_OPT_SCHEMA`, `MYSQL_OPT_SSL_KEY`, `MYSQL_OPT_SSL_CERT`, `MYSQL_OPT_SSL_CA`, `MYSQL_OPT_SSL_CAPATH`, `MYSQL_SET_CHARSET_NAME`, `MYSQL_SET_CHARSET_DIR`, `MYSQL_OPT_SSL_CIPHER`, `MYSQL_SHARED_MEMORY_BASE_NAME`, `MYSQL_PLUGIN_DIR`, `MYSQL_DEFAULT_AUTH`, `MARIADB_OPT_SSL_FP`, `MARIADB_OPT_SSL_FP_LIST`, `MARIADB_OPT_TLS_PASSPHRASE`, `MARIADB_OPT_TLS_VERSION`, `MYSQL_OPT_BIND`, `MYSQL_OPT_CONNECT_ATTR_DELETE`, `MYSQL_OPT_CONNECT_ATTR_ADD`, `MARIADB_OPT_CONNECTION_HANDLER`, `MYSQL_SERVER_PUBLIC_KEY`, `MARIADB_OPT_RESTRICTED_AUTH`
| `const char*, unsigned int` | `MARIADB_OPT_RPL_REGISTER_REPLICA`
| - | `MYSQL_OPT_CONNECT_ATTR_RESET`
| void * | `MARIADB_OPT_PROXY_HEADER`

* `MYSQL_OPT_SSL_ENFORCE`\
Enable or disable TLS. This option can be used to enable TLS without having to provide TLS certificates, keys or CAs.\
**Note**: currenty this does not enforce TLS like the option name would suggest. If the server does not support TLS, the protocol will fall back to unencrypted communication. To enforce the use of TLS, use `MYSQL_OPT_SSL_VERIFY_SERVER_CERT` instead.
* `MYSQL_INIT_COMMAND`\
Command(s) which will be executed when connecting and reconnecting to the server.
* `MYSQL_OPT_COMPRESS`\
Use the compressed protocol for client server communication. If the server doesn't support compressed protocol, the default protocol will be used.
* `MYSQL_OPT_CONNECT_TIMEOUT`\
Connect timeout in seconds. This value will be passed as an unsigned ##int## parameter.
* `MYSQL_OPT_LOCAL_INFILE`\
Enable or disable the use of `LOAD DATA LOCAL INFILE`
* `MYSQL_OPT_NAMED_PIPE`\
For Windows operating systems only: Use named pipes for client/server communication.
* `MYSQL_PROGRESS_CALLBACK`\
Specifies a callback function which will be able to visualize the progress of certain long running statements (i.e. `LOAD DATA LOCAL INFILE` or `ALTER TABLE`). The callback function must be defined as followed:
```C
static void report_progress(const MYSQL *mysql __attribute__((unused)),
                            uint stage, uint max_stage,
                            double progress __attribute__((unused)),
                            const char *proc_info __attribute__((unused)),
                            uint proc_info_length __attribute__((unused)))
```
* `MYSQL_OPT_PROTOCOL`\
Specify the type of client/server protocol. Possible values are: `MYSQL_PROTOCOL_TCP`, `MYSQL_PROTOCOL_SOCKET`, `MYSQL_PROTOCOL_PIPE` and `MYSQL_PROTOCOL_MEMORY`.
* `MYSQL_OPT_RECONNECT`\
Enable or disable automatic reconnect.
* `MYSQL_OPT_READ_TIMEOUT`\
Specifies the timeout in seconds for reading packets from the server.
* `MYSQL_OPT_WRITE_TIMEOUT`\
Specifies the timeout in seconds for sending packets to the server.
* `MYSQL_READ_DEFAULT_FILE`\
Read options from the specified configuration file. If an empty string is passed, the [default configuration files](config_files) (such as /etc/my.cnf, /etc/mysql/my.cnf) will be read. By default, configuration files are not processed unless this option is specified.

* `MYSQL_READ_DEFAULT_GROUP`
Read options from the specified group within the default configuration file or the file specified by MYSQL_READ_DEFAULT_FILE. Passing an empty string will result in all sections being processed. If no specific file is provided via MYSQL_READ_DEFAULT_FILE, all available [default configuration files](config_files) will be considered.

   **Note:**
   In addition to a specified group the following groups will be always processed:
   * [client]
   * [client-server]
   * [client-mariadb]

* `MYSQL_REPORT_DATA_TRUNCATION`\
Enable or disable reporting data truncation errors for prepared statements.
* `MYSQL_OPT_BIND`\
Specify the network interface from which to connect to MariaDB Server.
* `MYSQL_PLUGIN_DIR`\
Specify the location of client plugins.
* `MYSQL_OPT_NONBLOCK`\
Specify stack size for non blocking operations.
The argument for MYSQL_OPT_NONBLOCK is the size of the stack used to save the state of a non-blocking operation while it is waiting for I/O and the application is doing other processing. Normally, applications will not have to change this, and it can be passed as zero to use the default value.
* `MYSQL_OPT_NET_BUFFER_LENGTH`\
Initial network buffer size in bytes. The default value is 16777216 (16MiB).
* `MYSQL_OPT_MAX_ALLOWED_PACKET`\
Maximum allowed packet length. The default value is 1073741824 (1GiB) on the client side. If the limit is exceeded by a packet sent by the server, an error is generated. 
* `MARIADB_OPT_CONNECTION_HANDLER`\
Specify the name of a connection handler plugin.
* `MARIADB_OPT_USERDATA`\
Bundle user data to the current connection, e.g. for use in connection handler plugins. This option requires 4 parameters: connection, option, key and value:
```C
mysql_optionsv(mysql, MARIADB_OPT_USERDATA, (void *)"ssh_user", (void *)ssh_user);
```
* `MARIADB_OPT_CONNECTION_READ_ONLY`\
This option is used by connection handler plugins and indicates that the current connection will be used for read operations only.
* `MYSQL_OPT_CAN_HANDLE_EXPIRED_PASSWORDS`\
If this option is set, the client indicates that it will be able to handle expired passwords by setting the `CLIENT_CAN_HANDLE_EXPIRED_PASSWORDS` capability flag. If the password has expired and `CLIENT_CAN_HANDLE_EXPIRED_PASSWORDS` is set, the server will not return an error when connecting, but put the connection in sandbox mode, where all commands will return error 1820 (`ER_MUST_CHANGE_PASSWORD`) unless a new password was set. This option was added in MariaDB Connector/C 3.0.4
* `MARIADB_OPT_STATUS_CALLBACK` \
Specifies a callback function which will be called whenever the server status changes or the server sent session_track information to the client:
```C
mysql_optionsv(mysql, MARIADB_OPT_STATUS_CALLBACK, function, data)
```
The callback function must be defined as follows:
```C    
    void status_callback(void *data, enum enum_mariadb_status_info type, ..)
```
    
Parameters:

        - data  Pointer passed with registration of callback function
                (usually a connection handle)
        - type  Information type  STATUS_TYPE or SESSION_TRACK_TYPE  
  
Variadic Parameters:

     if (type == STATUS_TYPE):
        - server status (unsigned int)
    
     if (type == SESSION_TRACK_TYPE)
        - enum enum_session_state_type track_type - session track type
    
        if (track_type == SESSION_TRACK_SYSTEM_VARIABLES)
          - MARIADB_CONST_STRING *key
          - MARIADB_CONST_STRING *value
    
        else
          - MARIADB_CONST_STRING *value
    
`
Note: Specifying a callback function overwrites the internal session tracking function, so API functions mysql_session_track_get_first()/next() can't be used.

An example can be found in unittest/libmariadb/connection.c (test_status_callback)

Addid in version 3.3.2

* `MARIADB_OPT_SKIP_READ_RESPONSE` \
Don't read response packets in binary protocol.

Added in version 3.1.13

### Replication/Binlog API options
* `MARIADB_OPT_RPL_REGISTER_REPLICA`\
Specifies host name and port for Binlog/API. When this option was set, rpl_open() will register replica with server_id, host and  port to the connected server. This information can be retrieved by `SHOW SLAVE STATUS` command. This option was added in version 3.3.1

### TLS/SSL and Security options
* `MYSQL_OPT_SSL_KEY`\
Specify the name of a key for a secure connection. If the key is protected with a passphrase, the passphrase needs to be specified with `MARIADB_OPT_PASSPHRASE` option.
* `MYSQL_OPT_SSL_CERT`\
Specify the name of a certificate for a secure connection.
* `MYSQL_OPT_SSL_CA`\
Specify the name of a file which contains one or more trusted CAs.
* `MYSQL_OPT_SSL_CAPATH`\
Specify the path which contains trusted CAs.
* `MYSQL_OPT_SSL_CIPHER`\
Specify one or more (SSLv3, TLSv1.0 or TLSv1.2) cipher suites for TLS encryption. Even if Connector/C supports TLSv1.3 protocol, it is not possible yet to specify TLSv1.3 cipher suites.
* `MYSQL_OPT_SSL_CRL`\
Specify a file with a certificate revocation list.
* `MYSQL_OPT_SSL_CRLPATH`\
Specify a directory with contains files with certificate revocation lists.
* `MARIADB_OPT_SSL_FP`\
Specify the fingerprint hash of a server certificate for validation during the TLS handshake. For versions prior to 3.4.0 the hash is a SHA1 hash, for versions 3.4.0 and newer SHA256,SHA384 or SHA512.
* `MARIADB_OPT_SSL_FP_LIST`\
Specify a file which contains one or more fingerprint hashes of server certificates for validation during the TLS handshake. For versions prior to 3.4.0 the hash is a SHA1 hash, for versions 3.4.0 and newer SHA256,SHA384 or SHA512.
* `MARIADB_OPT_SSL_PASPHRASE`\
Specify a passphrase for a passphrase protected client key.
* `MYSQL_OPT_SSL_VERIFY_SERVER_CERT`\
Enable (or disable) the verification of the host name against common name (CN) of the server's host certificate.
* `MYSQL_SERVER_PUBLIC_KEY`\
Specifies the name of the file which contains the RSA public key of the database server. The format of this file must be in PEM format. This option is used by the caching_sha2_password plugin and was added in Connector/C 3.1.0
* `MARIADB_OPT_TLS_CIPHER_STRENGTH`\
This option is not in use anymore.
* `MARIADB_OPT_RESTRICTED_AUTH`\
Specifies one or more comma separated authentication plugins which are allowed for authentication. If the database server asks for an authentication plugin not listed in this option, MariaDB Connector/C will return an error.
This option was added in MariaDB Connector/C 3.3.0

### Proxy settings
As per the proxy protocol specification, the connecting client can prefix its first packet with a proxy protocol header. The server will parse the header and assume the client's IP address is the one set in the proxy header.
* `MARIADB_OPT_PROXY_HEADER` - specifies the proxy header which will be prefixed to the first packet. Parameters are void * for the prefix buffer and size_t for length of the buffer:
```
const char *hdr="PROXY TCP4 192.168.0.1 192.168.0.11 56324 443\r\n";
mysql_optionsv(mysql, MARIADB_OPT_PROXY_HEADER, hdr,  strlen(hdr));
```

### Connection Attributes
Connection attributes are stored in the `session_connect_attrs` and `session_account_connect_attrs `Performance Schema tables.
By default, MariaDB Connector/C sends the following connection attributes to the server:
* `_client_name`: always "libmariadb"
* `_client_version`: version of MariaDB Connector/C
* `_os`: operation system
* _pid: process id
* `_platform`: e.g. x86 or x64
* `_server_host`: the host name (as specified in mysql_real_connect). This attribute was added in Connector/C 3.0.5

**Note:**
If the Performance Schema is disabled, connection attributes will not be stored on server.

* `MYSQL_OPT_CONNECT_ATTR_DELETE`\
Deletes a connection attribute for the given key.
* `MYSQL_OPT_CONNECT_ATTR_ADD`\
Adds a key/value pair to connection attributes. The total length of the stored connection attributes is limited to a maximum of 65535 bytes.
* `MYSQL_OPT_CONNECT_ATTR_RESET`\
Clears the current list of connection attributes.

## See Also
*[mysql_init()](mysql_init)
*[mysql_real_connect()](mysql_real_connect)


