## Name
mysql_stmt_prepare - Prepares an SQL string 

## Synopsis
```C
#include <mysql.h>

int mysql_stmt_prepare(MYSQL_STMT * stmt,
                       const char * query,
                       unsigned long length);
```


## Description
Prepares the SQL query.

## Parameter
* `stmt` - a statement handle, which was previously allocated by [mysql_stmt_init()](mysql_stmt_init).
* `query` - SQL statement
* `length` - length of SQL statement

## Return value
Zero on success, non zero on error.

### Notes
* The parameter markers must be bound to application variables using [mysql_stmt_bind_param()](mysql_stmt_bind_param).
* The maximum number of parameters is 65535 (0xFFFF).
* The markers are legal only in certain places in SQL statements. For example, they are allowed in the VALUES() list ofINSERT statement (to specify column values for a row), or in a comparison with a column in a [select()](WHERE]] clause to specify a comparison value. However, they are not allowed in identifiers (such as table or column names) in the select list that names the columns to be returned by SELECT statement, or to specify both operands of a binary operator such as the equal sign. The latter restriction is necessary because it would be impossible to determine the parameter type. In general, parameters are legal only in Data Manipulation Language (DML) statements, and not in Data Definition Language (DDL) statements.


## See Also
* [mysql_stmt_init()](mysql_stmt_init)
* [mysql_stmt_param_count()](mysql_stmt_param_count)
* [mysql_stmt_execute()](mysql_stmt_execute)
