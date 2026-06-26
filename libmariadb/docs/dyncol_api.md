## Dynamic Column API
Dynamic columns allow to store different sets of columns for each row in a table. It works by storing a set of columns in a blob and having a small set of functions to manipulate it.

Dynamic columns should be used when it is not possible to use regular columns.

A typical use case is when one needs to store items that may have many different attributes (like size, color, weight, etc), and the set of possible attributes is very large and/or unknown in advance. In that case, attributes can be put into dynamic columns.

Dynamic columns are supported since MariaDB Server 5.3, however with MariaDB Connector/C it's possible to read, write and manipulate dynamic columns regardless of the server version.

### Structures, Types and Definitions
* [Dynamic Column structures](dyncol_structures)
* [Dynamic Column types and definitions](dyncol_typesanddefs)

### Dynamic Column API functions
* [mariadb_dyncol_check](mariadb_dyncol_check) - Check if a dynamic column has correct format
* [mariadb_dyncol_column_cmp_named](mariadb_dyncol_column_cmp_named) - Compare two column names
* [mariadb_dyncol_column_count](mariadb_dyncol_column_count) - Gets the number of columns in a dynamic column
* [mariadb_dyncol_create_many_named](mariadb_dyncol_create_many_named) - Creates a dynamic column with named keys
* [mariadb_dyncol_create_many_num](mariadb_dyncol_create_many_num) - Creates a dynamic column with numeric keys
* [mariadb_dyncol_exists_named](mariadb_dyncol_exists_named) - Checks if a column with named key exists
* [mariadb_dyncol_exists_num](mariadb_dyncol_exists_num) - Checks if column with numeric key exists
* [mariadb_dyncol_free](mariadb_dyncol_free) - Frees dynamic column memory
* [mariadb_dyncol_get_named](mariadb_dyncol_get_named) - Get value of a column with given key
* [mariadb_dyncol_get_num](mariadb_dyncol_get_num) - Get value of a column with given number
* [mariadb_dyncol_has_names](mariadb_dyncol_has_names) - Checks if dynamic column uses named keys
* [mariadb_dyncol_init](mariadb_dyncol_init) - Initializes a dynamic column
* [mariadb_dyncol_json](mariadb_dyncol_json) - Get content of a dynamic column in JSON format
* [mariadb_dyncol_list_json](mariadb_dyncol_list_json) - Get content of a dynamic column in JSON format
* [mariadb_dyncol_list_named](mariadb_dyncol_list_named) - Lists columns in a dynamic column
* [mariadb_dyncol_list_num](mariadb_dyncol_list_num) - Lists columns in a dynamic column
* [mariadb_dyncol_unpack](mariadb_dyncol_unpack) - Get values of all columns
* [mariadb_dyncol_update_many_named](mariadb_dyncol_update_many_named) - Updates a dynamic column with named keys
* [mariadb_dyncol_update_many_num](mariadb_dyncol_update_many_num) - Updates a dynamic column with numeric keys
* [mariadb_dyncol_value_init](mariadb_dyncol_value_init) - Initializes a dynamic column value
* [mariadb_dyncol_val_double](mariadb_dyncol_val_double) - Convert content of a dynamic column to double
* [mariadb_dyncol_val_long](mariadb_dyncol_val_long) - Convert content of a dynamic column to longlong
* [mariadb_dyncol_val_str](mariadb_dyncol_val_str) - Convert content of a dynamic column to string