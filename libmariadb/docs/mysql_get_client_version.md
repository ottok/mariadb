## Name
mysql_get_client_version - returns client version number

## Synopsis
```C
unsigned long mysql_get_client_version(void);
```

## Description
Returns a number representing the client library version. The value has the format XXYYZZ: major version * 10000 + minor version * 100 + patch version.
### Notes
* To obtain a string containing the client library version use the  [mysql_get_client_info()](mysql_get_client_info) function.
* Note: Since MariaDB Server 10.2.6 and MariaDB Connector/C 3.0.1 the client library is bundled with server package and returns the server package version. To obtain the client version of the connector, please use the constant `MARIADB_PACKAGE_VERSION_ID`


## Return value
A long integer representing the client version

## See also
*  [mysql_get_client_info()](mysql_get_client_info)
