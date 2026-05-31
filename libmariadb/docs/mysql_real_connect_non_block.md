## Name
mysql_real_connect_start, mysql_real_connect_cont - establishes a connection to a MariaDB database server

## Synopsis
```C
#include <mysql.h>

int mysql_real_connect_start(MYSQL **ret,
                             MYSQL *mysql,
                             const char *host,
                             const char *user,
                             const char *passwd,
                             const char *db,
                             unsigned int port,
                             const char *unix_socket,
                             unsigned long client_flags);

int mysql_real_connect_cont(MYSQL **ret, 
                            MYSQL *mysql,
                            int ready_status);
```

## Description
`mysql_real_connect_start()` initiates a non-blocking connection request to a server.\
`mysql_real_connect_cont()` 