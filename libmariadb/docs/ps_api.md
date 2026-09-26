## Prepared Statement API Reference

A prepared statement or a parameterized statement is used to execute the same statement repeatedly with high efficiency.
The prepared statement execution consists of two stages: prepare and execute. 
* At the prepare stage a statement template is sent to the database server. The server performs a syntax check and initializes server internal resources for later use.
* During execute the client binds parameter values and sends them to the server. The server creates a statement from the statement template and the bound values to execute it using the previously created internal resources.

A prepared statement can be executed repeatedly. Upon every execution the current value of the bound variable is evaluated and sent to the server. The statement is not parsed again. The statement template is not transferred to the server again. 

The MariaDB server supports using anonymous, positional placeholder with `?`(question mark).

Opposed to the text protocol where all values are transferred as strings, prepared statements use the binary protocol where all values beside strings are transferred in their native format. 

### API Functions
* [mariadb_stmt_execute_direct](mariadb_stmt_execute_direct) - Prepares and executes a statement
* [mariadb_stmt_fetch_fields](mariadb_stmt_fetch_fields) - Returns an array of fields containing the column definitions
* [mysql_stmt_affected_rows](mysql_stmt_affected_rows) - Returns the number of affected rows from previous executed prepared statement. 
* [mysql_stmt_attr_get](mysql_stmt_attr_get) - Returns the current value of a statement attribute
* [mysql_stmt_attr_set](mysql_stmt_attr_set) - Sets attribute of a statement
* [mysql_stmt_bind_param](mysql_stmt_bind_param) - Binds statement to a prepared statement
* [mysql_stmt_bind_result](mysql_stmt_bind_result) - Binds result columns to variables
* [mysql_stmt_close](mysql_stmt_close) - Closes a prepared statement
* [mysql_stmt_data_seek](mysql_stmt_data_seek) - Seeks to an arbitrary row in statement result set
* [mysql_stmt_errno](mysql_stmt_errno) - Returns an error number for the last statement error.
* [mysql_stmt_error](mysql_stmt_error) - Returns a string description for the last statement error.
* [mysql_stmt_execute](mysql_stmt_execute) - Executes a prepared statement
* [mysql_stmt_fetch](mysql_stmt_fetch) - Fetch result row from a prepared statement
* [mysql_stmt_fetch_column](mysql_stmt_fetch_column) - Fetches a single column in to a bind buffer
* [mysql_stmt_field_count](mysql_stmt_field_count) - Returns the number of fields in a result set of a prepared statement.
* [mysql_stmt_free_result](mysql_stmt_free_result) - Frees stored result memory of a prepared statement.
* [mysql_stmt_init](mysql_stmt_init) - Initializes a prepared statement.
* [mysql_stmt_insert_id](mysql_stmt_insert_id) - Get the auto generated id from previously executed prepared 
statement.
* [mysql_stmt_more_results](mysql_stmt_more_results) - Indicates if one or more results from a previously executed prepared statement are available
* [mysql_stmt_next_result](mysql_stmt_next_result) - Returns next prepared statement result set
* [mysql_stmt_num_rows](mysql_stmt_num_rows) - Returns the number of rows in a prepared statement result set.
* [mysql_stmt_param_count](mysql_stmt_param_count) - Returns the number of parameter for the given statement. 
* [mysql_stmt_param_metadata](mysql_stmt_param_metadata) - Not implemented yet
* [mysql_stmt_prepare](mysql_stmt_prepare) - Prepares a SQL statement for execution. 
* [mysql_stmt_reset](mysql_stmt_reset) - Resets a prepared statement.
* [mysql_stmt_result_metadata](mysql_stmt_result_metadata) - Returns result set metadata from a prepared statement.
* [mysql_stmt_row_seek](mysql_stmt_row_seek) - Positions row cursor.
* [mysql_stmt_row_tell](mysql_stmt_row_tell) - Returns position of the result cursor.
* [mysql_stmt_send_long_data](mysql_stmt_send_long_data) - Send data in chunks.
* [mysql_stmt_sqlstate](mysql_stmt_sqlstate) - Returns SQLSTATE error from previous statement operation.
* [mysql_stmt_store_result](mysql_stmt_store_result) - Transfers a result set from a prepared statement.
* [mysql_stmt_warning_count](mysql_stmt_warning_count) - Returns the number of warnings from the last executed statement.