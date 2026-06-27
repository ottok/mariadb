The main mechanism used in replication is the binary log. If binary logging is enabled, all updates to the database (data manipulation and data definition) are written into the binary log as binlog events. Clients may read the binary log from master using the replication API in order to access the data.

* [Replication API Data structures](rpl_data_structures)
* [Replication API Types and definitions](rpl_types_definitions)
* [Replication API Function reference](rpl_api_reference)
* [Example](rpl_api_example)