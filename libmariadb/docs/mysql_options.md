## Name
mysql_options - Used to set extra connect options and affect behavior of a connection

## Synopsis
```C
#include <mysql.h>

int mysql_options(MYSQL * mysql,
                  enum mysql_option,
                  const void * arg);
```

## Description
Used to set extra connect options and affect behavior for a connection. This function may be called multiple times to set several options. `mysql_options()` should be called after [mysql_init()](mysql_init).

## Notes
This function is deprecated, new implementations should use [mysql_optionsv()](mysql_optionsv) api function instead.

## Options
An overview of the possible options can be found in the description of the [mysql_optionsv()](mysql_optionsv) API function.

## See Also
*[mysql_init()](mysql_init)
*[mysql_optionsv()](mysql_optionsv)
*[mysql_real_connect()](mysql_real_connect)

