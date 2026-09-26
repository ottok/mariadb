## Name
mysql_free_result - Frees result set 

## Synopsis
```C
#include <mysql.h>

void mysql_free_result(MYSQL_RES * result);
```

## Description
Frees the memory associated with a result set. Returns void.

## Parameters
* `result` - a result set identifier returned by [mysql_store_result()](mysql_store_result) or [mysql_use_result()](mysql_use_result).

### Notes
* You should always free your result set with mysql_free_result() as soon it's not needed anymore
* Row values obtained by a prior [mysql_fetch_row()](mysql_fetch_row) call will become invalid after calling mysql_free_result().

## See also
* [mysql_store_result()](mysql_store_result)
* [mysql_use_result()](mysql_use_result)

