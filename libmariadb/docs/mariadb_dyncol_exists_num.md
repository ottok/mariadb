## Name
mariadb_dyncol_exists_num - Check if column with given number exists.

## Synopsis
```C
enum enum_dyncol_func_result
mariadb_dyncol_exists_num(DYNAMIC_COLUMN *str, 
                          uint column_number);
```

## Description
Checks if a column with the specified column key exists.

## Parameter
* `*str` - Dynamic column
* `column_number` - The column number to search for

## Return value
Returns `ER_DYNCOL_YES` if a column with given number exists, `ER_DYNCOL_NO` if no column exists or error.

## See also
* [mariadb_dyncol_exists_named](mariadb_dyncol_exists_named)
* [Dynamic Column Error Codes](dyncol_typesanddefs#error-codes)