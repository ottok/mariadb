## Asynchronous (non blocking) API

The MariaDB Connector/C non-blocking client API is modelled after the normal blocking library calls. This makes it easy to learn and remember. It makes it easier to translate code from using the blocking API to using the non-blocking API (or vice versa). And it also makes it simple to mix blocking and non-blocking calls in the same code path.

For every api function that may block on socket I/O, two additional non-blocking functions are introduced which are suffixed by `_start` and `_cont`.

For example for the api function `int mysql_real_query(MYSQL, query, query_length)`, two additional non-blocking calls are introduced:

* `int mysql_real_query_start(&status, MYSQL, query, query_length)`
* `int mysql_real_query_cont(&status, MYSQL, wait_status)`

For a complete overview please refer to the list of [blocking api functions](blocking_functions).

* [Activating non blocking mode](activate_non_blocking)
* [Example](example_non_blocking)
* [List of blocking api functions](blocking_functions)
* [Restrictions](restrictions_non_blocking)