## Name
mariadb_convert_string - Converts a string in to a different character set
## Synopsis
```C
#include <mysql.h>

size_t mariadb_convert_string(const char *from __attribute__((unused)),
                              size_t *from_len __attribute__((unused)),
                              MARIADB_CHARSET_INFO *from_cs __attribute__((unused)),
                              char *to __attribute__((unused)),
                              size_t *to_len __attribute__((unused)),
                              MARIADB_CHARSET_INFO *to_cs __attribute__((unused)), int *errorcode)
```

## Note
This function is deprecated and will be removed in future versions.