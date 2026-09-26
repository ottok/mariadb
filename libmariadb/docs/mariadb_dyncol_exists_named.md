## Name
mariadb_dyncol_exists_named - Check if column with given name exists.

## Synopsis
```C
enum enum_dyncol_func_result
mariadb_dyncol_exists_named(DYNAMIC_COLUMN *str, 
                            MYSQL_LEX_STRING *column_key);
```

## Description
Checks if a column with the specified column key exists.

## Parameter
* `*str` - Dynamic column
* `*column_key` - The column key to search for

## Return value
Returns `ER_DYNCOL_YES` if a column with given key exists, `ER_DYNCOL_NO` if no column exists or error.

## See also
* [mariadb_dyncol_exists_num](mariadb_dyncol_exists_num)
* [Dynamic Column Error Codes](dyncol_typesanddefs#error-codes)