## Generic API Reference

* [mariadb_cancel](mariadb_cancel) - Immediately aborts a connection
* [mariadb_connect](mariadb_connect) - Connect using a connection string
* [mariadb_connection](mariadb_connection) - Check if the client is connected to a MariaDB database server
* [mariadb_convert_string](mariadb_convert_string) - Converts a string into different character set
* [mariadb_field_attr](mariadb_field_attr) - Returns extended metadata information for pluggable field types
* [mariadb_get_info](mariadb_get_info) - retrieves generic or connection related information
* [mariadb_get_infov](mariadb_get_infov) - retrieves generic or connection related information
* [mariadb_reconnect](mariadb_reconnect) - reconnects to a server
* [mysql_affected_rows](mysql_affected_rows) - returns the number of rows affected by the last operation
* [mysql_autocommit](mysql_autocommit) - Toggles autocommit mode
* [mysql_change_user](mysql_change_user) - changes user and default database
* [mysql_character_set_name](mysql_character_set_name) - Returns the character set in use
* [mysql_client_find_plugin](mysql_client_find_plugin) - Finds a plugin by name
* [mysql_close](mysql_close) - Closes a previously opened connection
* [mysql_commit](mysql_commit) - Commits the current transaction
* [mysql_data_seek](mysql_data_seek) - seeks to an offset
* [mysql_debug](mysql_debug) - Enable debug output
* [mysql_dump_debug_info](mysql_dump_debug_info) - Write debug information into server error log
* [mysql_embedded](mysql_embedded) - Determines if C/C is running with embedded server
* [mysql_eof](mysql_eof) - Determines end of a result set (deprecated)
* [mysql_errno](mysql_errno) - Returns last error number
* [mysql_error](mysql_error) - Returns last error string
* [mysql_fetch_field](mysql_fetch_field) - Returns the definition of one column of a result set
* [mysql_fetch_field_direct](mysql_fetch_field_direct) - Returns a pointer to a MYSQL_FIELD structure
* [mysql_fetch_fields](mysql_fetch_fields) - returns an array of fields 
* [mysql_fetch_lengths](mysql_fetch_lengths) - returns an array of length values for the current row
* [mysql_fetch_row](mysql_fetch_row) - fetches row of data from result set
* [mysql_field_count](mysql_field_count) - returns the number of columns for the most recent statement 
* [mysql_field_seek](mysql_field_seek) - sets the field cursor to given offset
* [mysql_field_tell](mysql_field_tell) -  Returns offset of the field cursor
* [mysql_free_result](mysql_free_result) - Frees result set 
* [mysql_get_character_set_info](mysql_get_character_set_info) - returns character set information
* [mysql_get_charset_by_name](mysql_get_charset_by_name) - returns character set information for specified character set name.
* [mysql_get_charset_by_nr](mysql_get_charset_by_nr) - returns character set information for specified character set number.
* [mysql_get_client_info](mysql_get_client_info) - returns client library version as string representation 
* [mysql_get_client_version](mysql_get_client_version) - returns client version number
* [mysql_get_host_info](mysql_get_host_info) - Returns host information
* [mysql_get_parameters](mysql_get_parameters) - Return packet size information
* [mysql_get_proto_info](mysql_get_proto_info) - Returns protocol version number
* [mysql_get_server_info](mysql_get_server_info) - Returns server version as string
* [mysql_get_server_version](mysql_get_server_version) - returns numeric server version 
* [mysql_get_socket](mysql_get_ssl_cipher) - returns the socket descriptor for current connection
* [mysql_get_ssl_cipher](mysql_get_ssl_cipher) - returns the cipher suite in use
* [mysql_get_timeout_value](mysql_get_timeout_value) - returns the timeout value for asynchronous operations in seconds
* [mysql_get_timeout_value_ms](mysql_get_timeout_value_ms) - returns the timeout value for asynchronous operations in milliseconds
* [mysql_hex_string](mysql_hex_string) - create a hexadecimal string
* [mysql_info](mysql_info) - provides information about the last executed statement
* [mysql_init](mysql_init) - Prepares and initializes a ```MYSQL``` structure
* [mysql_insert_id](mysql_insert_id) - Returns auto generated ID.
* [mysql_kill](mysql_kill) - Kills a connection
* [mysql_load_plugin](mysql_load_plugin) - Loads and initializes a plugin
* [mysql_more_results](mysql_more_results) - indicates if one or more results are available
* [mysql_net_field_length](mysql_net_field_length) - Returns the length of a length encoded field
* [mysql_net_read_packet](mysql_net_read_packet) - Reads an incoming data packet from server
* [mysql_next_result](mysql_next_result) - prepares next result set
* [mysql_num_fields](mysql_num_fields) - Returns number of fields in a result set 
* [mysql_num_rows](mysql_num_rows) - Returns number of rows in a result set.
* [mysql_options4](mysql_options4) - Used to set extra connect options and affect behavior of a connection
* [mysql_options](mysql_options) - Used to set extra connect options and affect behavior of a connection
* [mysql_optionsv](mysql_optionsv) - Used to set extra connect options and affect behavior of a connection
* [mysql_ping](mysql_ping) - checks if the connection between client and server is working
* [mysql_query](mysql_query) - executes a null terminated statement string
* [mysql_read_query_result](mysql_read_query_result) - Waits for a server result or response package
* [mysql_real_connect](mysql_real_connect) - establishes a connection to a MariaDB database server
* [mysql_real_escape_string](mysql_real_escape_string) - escape string by taking into account character set of connection
* [mysql_real_query](mysql_real_query) - execute a statement (binary safe)
* [mysql_refresh](mysql_refresh) - flushes information on the server
* [mysql_reset_connection](mysql_reset_connection) - Resets connection and clears session state
* [mysql_rollback](mysql_rollback) - Rolls back the current transaction
* [mysql_select_db](mysql_select_db) - selects a database as default
* [mysql_set_character_set](mysql_set_character_set) - Sets the default client character set
* [mysql_send_query](mysql_send_query) - Sends a SQL statement without waiting for server response
* [mysql_server_end](mysql_server_end) - Called when finished using MariaDB Connector/C 
* [mysql_server_init](mysql_server_init) - Initializes library
* [mysql_session_track_get_first](mysql_session_track_get_first) - Retrieves first session status change information 
* [mysql_session_track_get_next](mysql_session_track_get_next) - Retrieves the next session status change information
* [mysql_set_local_infile_default](mysql_set_local_infile_default) - Sets local infile callback functions to default
* [mysql_set_local_infile_handler](mysql_set_local_infile_handler) - Registers callback functions for LOAD DATA LOCAL INFILE 
* [mysql_ssl_set](mysql_ssl_set) - Set TLS/SSL options
* [mysql_store_result](mysql_store_result) - returns a buffered result set
* [mysql_thread_safe](mysql_thread_safe) - indicates whether the Connector/C library was compiled as thread safe
* [mysql_use_result](mysql_use_result) - returns an unbuffered result set
