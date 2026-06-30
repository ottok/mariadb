MariaDB Connector/C provides the following types and definitions.

### Enumeration Types

#### enum mysql_option

`enum mysql_option` is used as a parameter in
[mysql_optionsv()](mysql_optionsv) and
[mysql_get_optionsv()](mysql_get_optionsv) API functions. For
a list of integral constants and their meanings please check the
documentation of [mysql_get_optionsv()](mysql_get_optionsv).

#### enum enum_mysql_timestamp_type

`enum enum_mysql_timestamp_type` is used in the
[MYSQL_TIME](MYSQL_TIME) structure and indicates the type. It has the
following constants:

  - MYSQL_TIMESTAMP_NONE
  - MYSQL_TIMESTAMP_ERROR
  - MYSQL_TIMESTAMP_DATE
  - MYSQL_TIMESTAMP_DATETIME
  - MYSQL_TIMESTAMP_TIME

#### enum mysql_set_option

`enum mysql_set_option` is used as a parameter in
[mysql_set_server_option()](mysql_set_server_option) and has
the following constants:

  - MYSQL_OPTIONS_MULTI_STATEMENTS_ON
  - MYSQL_OPTIONS_MULTI_STATEMENTS_OFF

#### enum enum_field_types

`enum field_types` describes the different field types used by MariaDB
\] and has the following constants:

| Field type                   | Description  |
| ---------------------------- | -------------|
| MYSQL_TYPE_DECIMAL           | 
| MYSQL_TYPE_TINY              | 1 byte integer |
| MYSQL_TYPE_SHORT             | 2 byte integer |
| MYSQL_TYPE_LONG              | 4 byte integer |
| MYSQL_TYPE_FLOAT             | 4 byte float value |
| MYSQL_TYPE_DOUBLE            | 8 byte double precision value |
| MYSQL_TYPE_NULL              | NULL value |
| MYSQL_TYPE_TIMESTAMP         | Timestamp value. In Binary protocol stored as MYSQL_TIME, in text protocol as string |
| MYSQL_TYPE_LONGLONG          | 8 byte integer |
| MYSQL_TYPE_INT24             | 3 byte integer |
| MYSQL_TYPE_DATE              | Date value. In Binary protocol stored as MYSQL_TIME, in text protocol as string | 
| MYSQL_TYPE_TIME              | Time value. In Binary protocol stored as MYSQL_TIME, in text protocol as string |
| MYSQL_TYPE_DATETIME          | DateTime value. In Binary protocol stored as MYSQL_TIME, in text protocol as string |
| MYSQL_TYPE_YEAR              | 2-byte integer |
| MYSQL_TYPE_NEWDATE           |                                     
| MYSQL_TYPE_VARCHAR           | Length encoded string |                                    
| MYSQL_TYPE_BIT               |                                 
| MYSQL_TYPE_TIMESTAMP2        |                                        
| MYSQL_TYPE_DATETIME2         |                                       
| MYSQL_TYPE_TIME2             |                                   
| MYSQL_TYPE_JSON              |                                  
| MYSQL_TYPE_NEWDECIMAL        |                                        
| MYSQL_TYPE_ENUM              |                                  
| MYSQL_TYPE_SET               |                                 
| MYSQL_TYPE_TINY_BLOB         |                                       
| MYSQL_TYPE_MEDIUM_BLOB       |
| MYSQL_TYPE_LONG_BLOB         |                                       
| MYSQL_TYPE_BLOB              |                                  
| MYSQL_TYPE_VAR_STRING        |                                                  
| MYSQL_TYPE_STRING            |       
| MYSQL_TYPE_GEOMETRY          |

#### enum mysql_enum_shutdown_level

`enum mysql_enum_shutdown_level` is used as a parameter in
[mysql_server_shutdown()](mysql_server_shutdown) and has the
following constants:

  - SHUTDOWN_DEFAULT
  - KILL_QUERY
  - KILL_CONNECTION

#### enum enum_stmt_attr_type

`enum_stmt_attr_type` is used to set different statement options. For a
detailed description please check
[mysql_stmt_attr_set()](mysql_stmt_attr_set) function.

#### enum enum_cursor_type

`enum_cursor_type` specifies the cursor type and is used in
[mysql_stmt_attr_set()](mysql_stmt_attr_set) function.
Currently the following constants are supported:

  - CURSOR_TYPE_READ_ONLY
  - CURSOR_TYPE_NO_CURSOR

#### enum enum_indicator_type

`enum_indicator_type` describes the type of indicator used for prepared
statements bulk operations.

|                              |                            |
| ---------------------------- | -------------------------- |
| STMT_INDICATOR_NTS         | String is zero terminated  |
| STMT_INDICATOR_NONE        | No indicator in use        |
| STMT_INDICATOR_NULL        | Value is NULL              |
| STMT_INDICATOR_DEFAULT     | Use default value          |
| STMT_INDICATOR_IGNORE      | Ignore the specified value |
| STMT_INDICATOR_IGNORE_ROW | Skip the current row       |

### Definitions

#### Field Flags

The following field flags are used in
[MYSQL_FIELD](mariadb-connectorc-data-structures/#mysql_field)
structure.
|                          |       |                                                                  |
| ------------------------ | ----- | ---------------------------------------------------------------- |
| Flag                     | Value | Description                                                      |
| NOT_NULL_FLAG          | 1     | Field can't be NULL                                              |
| PRI_KEY_FLAG           | 2     | Field is part of primary key                                     |
| UNIQUE_KEY_FLAG        | 4     | Field is part of unique key                                      |
| MULTIPLE_KEY_FLAG      | 8     | Field is part of a key                                           |
| BLOB_FLAG               | 16    | Field is a blob                                                  |
| UNSIGNED_FLAG           | 32    | Field is unsigned integer                                        |
| ZEROFILL_FLAG           | 64    | Field is zero filled                                             |
| BINARY_FLAG             | 128   | Field is binary                                                  |
| ENUM_FLAG               | 256   | Field is enum                                                    |
| AUTO_INCREMENT_FLAG    | 512   | Field is an autoincrement field                                  |
| TIMESTAMP_FLAG          | 1024  | Field is a timestamp                                             |
| SET_FLAG                | 2048  | Field is a set                                                   |
| NO_DEFAULT_VALUE_FLAG | 4096  | Field has no default value                                       |
| ON_UPDATE_NOW_FLAG    | 8192  | If a field is updated it will get the current time value (NOW()) |
| NUM_FLAG                | 32768 | Field is numeric                                                 |


#### Server Status

The server_status can be obtained by the
[mariadb_get_infov()](mariadb_get_infov) function using the
`MARIADB_CONNECTION_SERVER_STATUS` option. 

|                                        |         |                                                                                                   |
| -------------------------------------- | ------- | ------------------------------------------------------------------------------------------------- |
| SERVER_STATUS_IN_TRANS              | 1       | A transaction is currently active                                                                 |
| SERVER_STATUS_AUTOCOMMIT             | 2       | Autocommit mode is set                                                                            |
| SERVER_MORE_RESULTS_EXISTS          | 8       | more results exists (more packet follow)                                                          |
| SERVER_QUERY_NO_GOOD_INDEX_USED   | 16      |                                                                                                   |
| SERVER_QUERY_NO_INDEX_USED         | 32      |                                                                                                   |
| SERVER_STATUS_CURSOR_EXISTS         | 64      | when using COM_STMT_FETCH, indicate that current cursor still has result                        |
| SERVER_STATUS_LAST_ROW_SENT        | 128     | when using COM_STMT_FETCH, indicate that current cursor has finished to send results            |
| SERVER_STATUS_DB_DROPPED            | 1\<\<8  | database has been dropped                                                                         |
| SERVER_STATUS_NO_BACKSLASH_ESCAPES | 1\<\<9  | current escape mode is "no backslash escape"                                                      |
| SERVER_STATUS_METADATA_CHANGED      | 1\<\<10 | A DDL change did have an impact on an existing PREPARE (an automatic reprepare has been executed) |
| SERVER_QUERY_WAS_SLOW               | 1\<\<11 | Last statement took more than the time value specified in server variable `long_query_time`.      |
| SERVER_PS_OUT_PARAMS                | 1\<\<12 | this resultset contain stored procedure output parameter                                          |
| SERVER_STATUS_IN_TRANS_READONLY    | 1\<\<13 | current transaction is a read-only transaction                                                    |
| SERVER_SESSION_STATE_CHANGED        | 1\<\<14 | session state change. see Session change type for more information                                |

#### TLS Verification flags

| Flag | Description |
|-|-|
| MARIADB_TLS_VERIFY_OK (0x00) | No errors occured
| MARIADB_TLS_VERIFY_TRUST (0x01) | The peer certificate is not trusted (self signed)
| MARIADB_TLS_VERIFY_HOST (0x02) | The host name verification failed
| MARIADB_TLS_VERIFY_PERIOD (0x04) | The peer certificate is not yet valid or expired
| MARIADB_TLS_VERIFY_FINGERPRINT (0x08) | The fingerprint verification failed
| MARIADB_TLS_VERIFY_REVOKED (0x10) | The peer certificate was revoked
| MARIADB_TLS_VERIFY_UNKNOWN (0x20) | An unknown error occurred

TLS verification flags were added in version 3.4.1

#### Macros


|                            |                                            |
| -------------------------- | ------------------------------------------ |
| IS_PRI_KEY(flag)         | True if the field is part of a primary key |
| IS_NOT_NULL(flags)       | True if the field is defined as not NULL   |
| IS_BLOB(flags)            | True if the field is a text or blob field  |
| IS_NUM(column_type)      | True if the column type is numeric         |
| IS_LONGDATA(column_type) | True if the column is a blob or text field |

