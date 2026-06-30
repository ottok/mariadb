## Name
mysql_info - provides information about the last executed statement

## Synopsis
```C
#include <mysql.h>

const char * mysql_info(MYSQL * mysql);
```

## Description
The `mysql_info()` function returns a string providing information about the last statement executed.

## Parameter
* `mysql` - a connection identifier, which was previously allocated by [mysql_init()](mysql_init) and connected by [mysql_real_connect()](mysql_real_connect).

### Notes
Statements which do not fall into one of the preceding formats are not supported (e.g. `SELECT`). In these situations mysql_info() will return an empty string.


## Return value
Zero terminated information string. The information depends on statement type:

| Query type | Example result string |
|--|--
| `INSERT INTO...SELECT...` | Records: 100 Duplicates: 0 Warnings: 0 |
| `INSERT INTO...VALUES (...),(...),(...)` | Records: 3 Duplicates: 0 Warnings: 0 |
| `LOAD DATA INFILE` | Records: 1 Deleted: 0 Skipped: 0 Warnings: 0 |
| `ALTER TABLE ...` | Records: 3 Duplicates: 0 Warnings: 0 |
| `UPDATE ...` | Rows matched: 40 Changed: 40 Warnings: 0 |

## See also
* [mysql_affected_rows()](mysql_affected_rows)
* [mysql_warning_count()](mysql_warning_count)
