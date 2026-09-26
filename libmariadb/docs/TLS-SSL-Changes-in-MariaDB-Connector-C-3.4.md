<h1>TLS/SSL Changes in Connector/C 3.4 (Draft):</h1>

<h2>Peer certificate validation</h2>

Since version 3.4 peer certificate verification is enabled by default. It can be disabled via `mysql_optionsv`, using option
`MYSQL_OPT_SSL_VERIFY_SERVER_CERT`:

    my_bool verify= 0;
    mysql_options(mariadb, MYSQL_OPT_SSL_VERIFY_SERVER_CERT, &verify);

<h3>Self signed certificates</h3>

If the client obtained a self signed peer certificate from MariaDB server the verification will fail, with the following exceptions:

* If the connection between client and server is considered to be secure:, e.g.
  * a unix_socket is used for client server communication
  * hostname is localhost (Windows operating system), 127.0.0.1 or ::1
* a specified fingerprint matches the fingerprint of the peer certificate (see below)
* a client can verify the certificate using account password, it's possible if
  * account has a password
  * authentication plugin is "secure without TLS", that is, one of mysql_native_password, ed25519, parsec.

<h3>Fingerprint verification of the peer certificate</h3>

A fingerprint is a cryptographic hash (SHA-256, SHA-384 or SHA-512) of the peer certificate's binary data. Even if the fingerprint matches, an expired ôr revoked certificate will not be accepted.

To get the finger print of the server certificate, you can use openssl or certtool (gnutls) command line clients on the server host:

    $ openssl x509 -noout -fingerprint -sha384 -inform pem -in /path/server-cert.pem
    sha384 Fingerprint=C1:38:FD:6B:9B:A9:99:5A:E1:EF:08:00:34:A6:08:46:FA:A5:97:05:FD:62:EB:91:C7:BA:B6:73:BF:C6:D5:C2:0D:6A:D7:22:99:8D:8A:DE:C3:9C:5E:C6:5D:96:F6:63

or

    certtool --fingerprint --hash=sha384 --infile=/path/server-cert.pem
    c138fd6b9ba9995ae1ef080034a60846faa59705fd62eb91c7bab673bfc6d5c20d6ad722998d8adec39c5ec65d96f663

<h4>Notes:</h4>
For security reasons support for MD5 and SHA1 has been removed.
    
<h2>Obtaining peer certificate information</h2>

Peer certificate information can be obtained via `mariadb_get_infov`,
using option `MARIADB_TLS_PEER_CERT_INFO`:

    MARIADB_X509_INFO *info;
    unsigned int hash_size= 384;
    
    mysql_optionsv(mariadb, MARIADB_TLS_PEER_CERT_INFO, &info, hash_size);

The optional `hash_size` parameter specifies the length of the fingerprint hash in bits: supported values are 256, 384 and 512. If `hash_size` will be omitted, a default value of 256 will be used.

