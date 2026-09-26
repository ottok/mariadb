# Data structures


This page describes the public data structures used by MariaDB Connector/C.

## MYSQL
The `MYSQL` structure represents one database connection and is used by most of MariaDB Connector/C's API functions. The `MYSQL` structure needs to be allocated and initialized by the [mysql_init()](mysql_init) API function. It will be released by the [mysql_close()](mysql_close) function.

**Warning:**\
The ```MYSQL``` structure should be considered as opaque; copying or changing values of its members might produce unexpected results, errors or program crashes.

## MYSQL_RES
The `MYSQL_RES` structure represents a result set which contains data and metadata information. It will be returned by the [mysql_use_result()](mysql_use_result) or [mysql_store_result](mysql_store_result) API functions and needs to be released by [mysql_free_result()](mysql_free_result).

**Warning**:\
The ```MYSQL_RES``` structure should be considered as opaque; copying or changing values of its members might produce unexpected results, errors or program crashes.

## MYSQL_ROW
```MYSQL_ROW``` represents an array of character pointers, pointing to the columns of the actual data row.
Data will be received by the [mysql_fetch_row()](mysql_fetch_row) function. The size of the array is the number of columns for the current row, which can be determined by [mysql_field_count()](mysql_field_count) API function.

**Warning:**\
After freeing the result set with [mysql_free_result()](mysql_free_result) `MYSQL_ROW` becomes invalid. 


## MYSQL_STMT

The ```MYSQL_STMT``` structure represents a prepared statement handle and is used by MariaDB Connector/C's prepared statement API functions. The MYSQL_STMT structure needs to be allocated and initialized by the [mysql_stmt_init](mysql_stmt_init) function and needs to be released by the [mysql_stmt_close()](mysql_stmt_close) function.

**Warning:**\
The `MYSQL_STMT` structure should be considered as opaque; copying or changing values of its members might produce unexpected results, errors or program crashes.

## <a name="struct_mysql_field"></a>MYSQL_FIELD
The `MYSQL_FIELD` structure describes the metadata of a column. It can be obtained by the [mysql_fetch_field()](mysql_fetch_field) function.

It has the following members:

| Type | Member | Description |
|----|----|----|
|`char *`|`name`| The name of the column|
|`unsigned int`|`name_length`|The length of column name|
|`char *`|`org_name `|The original name of the column
|`unsigned int`|`org_name_length`|The length of original column name
|`char *`|`table`|The name of the table
|`unsigned int`|`table_length`|The length of table name
|`char *`|`org_table `|The original name of the table
|`unsigned int`|`org_table_length`|The length of original table name
|`char *`|`db `|The name of the database (schema)
|`unsigned int`|`db_length`|The length of database name
|`char *`|`catalog`|The catalog name (always `'def'`)
|`unsigned int`|`catalog_length`|The length of catalog name
|`char *`|`def`|default value
|`unsigned int`|`def_length`|The length of default value
|`unsigned int`|`length`|The length (width) of the column definition
|`unsigned int`|`max_length`|The maximum length  of the column value
|`unsigned int`|`flags`|Flags
|`unsigned int`|`decimals`|Number of decimals
|`enum enum_field_types`|`type`|Field type

## <a name="struct_mysql_bind"></a> MYSQL_BIND
The `MYSQL_BIND` structure is used to provide parameters for prepared statements or to receive output column value from prepared statements.

| Type | Member | Description |
|----|----|----|
|`unsigned long *`|`length`|Pointer for the length of the buffer (not used for parameters)
|`my_bool *`|`is_null`|Pointer which indicates if column is NULL (not used for parameters)
|`my_bool *`|`error`|Pointer which indicates if an error occurred
|`void *`|`buffer`|Data buffer which contains or receives data
|`char *`|`u.indicator`|Array of indicator variables for bulk operation parameter
|`unsigned long`|`buffer_length`|Length of buffer
|`enum enum_field_types`|`buffer_type`|[[library/mariadb-connectorc-types-and-definitions/#enum-enum_field_types|Buffer type]]
|`unsigned long`|`length_value`|Used if length pointer is NULL
|`my_bool`|`error_value`|Used if error pointer is NULL
|`my_bool`|`is_null_value`|Used if is_null pointer is NULL
|`my_bool`|`is_unsigned`|Set if integer type is unsigned


## <a name="struct_mysql_time"></a> MYSQL_TIME
The `MYSQL_TIME` structure is used for date and time values in prepared statements. It has the following members:

| Type | Member | Description |
|----|----|----|
|` unsigned int`|`year`|Year
|`unsigned int`|`month`|Month
|`unsigned int`|`day`|Day
|`unsigned int`|`hour`|Hour
|`unsigned int`|`minute`|Minute
|`unsigned int`|`second`|Second
|`unsigned long`|`second_part`|Fractional seconds (max. 6 digits)
|`my_bool`|`neg`|Negative value
|`enum enum_mysql_timestamp_type`|`time_type`|Time type

## <a name="struct_mariadb_x509_info"></a> MARIADB_X509_INFO
The `MARIADB_X509_INFO` structure contains information about the peer certificate. This information is only available for TLS/SSL connections.

| Type | Member | Description |
|----|----|----|
|`int`|`version`| Peer certificate version
|`char *`|`issuer`| Issuer of peer certificate
|`char *`|`subject`| Subject of peer certificate
|`char *`|`fingerprint`| Fingerprint (SHA256, 384 or 512)
|`struct tm`|`notBefore`| Start date of peer certificate
|`struct tm`|`notAfter`| Expiration date of peer certificate

MARIADB_X509_INFO was added in MariaDB Connector/C 3.4.1
