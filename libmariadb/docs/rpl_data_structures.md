# Binlog/Replication API data structures

Structures and type definitions for Binglog/Replication API are defined in source file `include/mariadb_rpl.h`.

### MARIADB_STRING
`MARIADB_STRING` is a simple structure (same as `MYSQL_STRING` and `MYSQL_LEX_STRING`) which stores a string together with its length.
```C
typedef struct {
  char *str;
  size_t length;
} MARIADB_STRING;
```

### MARIADB_GTID
`MARIADB_GTID` is used to store the global transaction id. The global transaction id is defined by three numbers:
The domain id, the server id and the sequence number.

```C
typedef struct st_mariadb_gtid {
  unsigned int domain_id;
  unsigned int server_id;
  unsigned long long sequence_nr;
} MARIADB_GTID;
```

### MARIADB_RPL
`MARIADB_RPL` is the generic replication handle, which represents a replication connection and is used by all binlog/replication API calls. The `MARIADB_RPL` structure is considered to be opaque, instead of accessing its internal members you should use the api functions `mariadb_rpl_optionsv` and `mariadb_rpl_get_optionsv`.


## Events

### MARIADB_RPL_EVENT

```MARIADB_RPL_EVENT``` structure is returned by `mariadb_rpl_fetch()` API function. Beside a common header it contains different event types which are combined in `event` union.

```C
typedef struct st_mariadb_rpl_event
{
  /* common header */
  MA_MEM_ROOT memroot;
  unsigned int checksum;
  char ok;
  enum mariadb_rpl_event event_type;
  unsigned int timestamp;
  unsigned int server_id;
  unsigned int event_length;
  unsigned int next_event_pos;
  unsigned short flags;
  /****************/
  union {
    struct st_mariadb_rpl_rotate_event rotate;
    struct st_mariadb_rpl_query_event query;
    struct st_mariadb_rpl_format_description_event format_description;
    struct st_mariadb_rpl_gtid_list_event gtid_list;
    struct st_mariadb_rpl_checkpoint_event checkpoint;
    struct st_mariadb_rpl_xid_event xid;
    struct st_mariadb_rpl_gtid_event gtid;
    struct st_mariadb_rpl_annotate_rows_event annotate_rows;
    struct st_mariadb_rpl_table_map_event table_map;
    struct st_mariadb_rpl_rand_event rand;
    struct st_mariadb_rpl_encryption_event encryption;
    struct st_mariadb_rpl_intvar_event intvar;
    struct st_mariadb_rpl_uservar_event uservar;
    struct st_mariadb_rpl_rows_event rows;
    struct st_mariadb_rpl_heartbeat_event heartbeat;
    /* The following events were added in version 3.3.5 */
    struct st_mariadb_rpl_xa_prepare_log_event xa_prepare_log;
    struct st_mariadb_begin_load_query_event begin_load_query;
    struct st_mariadb_execute_load_query_event execute_load_query;
    struct st_mariadb_gtid_log_event gtid_log;
    struct st_mariadb_start_encryption_event start_encryption;
    struct st_mariadb_rpl_previous_gtid_event previous_gtid;
  } event;
} MARIADB_RPL_EVENT;
```
Depending on the event type information sent by master will be stored in the corresponding member of the event union:

#### ANNOTATE_ROWS_EVENT
event_type value= 160 (0xA0)

```C
struct st_mariadb_rpl_annotate_rows_event {
  MARIADB_STRING statement;
};
```

**Note:** This event will be sent only if the client connected with `MARIADB_RPL_BINLOG_SEND_ANNOTATE_ROWS` flag.

#### BINLOG_CHECKPOINT_EVENT
event_type value= 161 (0xA1)

```C
struct st_mariadb_rpl_checkpoint_event {
  MARIADB_STRING filename;
};
```

#### START_ENCRYPTION_EVENT
event_type value= 164 (0xA4)

```C
struct st_mariadb_rpl_encryption_event {
  char scheme;
  unsigned int key_version;
  char *nonce;
};
```

**Note:** Encrypted data can be retrieved only when reading events from a binary log file. If the client connects to a source server, the server will always return unencrypted events.

#### FORMAT_DESCRIPTION_EVENT
event_type value= 15 (0x0F)

This is a descriptor event that is written to the beginning of a binary log file (at position 4).

```C
struct st_mariadb_rpl_format_description_event
{
  uint16_t format;
  char *server_version;
  uint32_t timestamp;
  uint8_t header_len;
  /* Added in 3.3.5 */
  MARIADB_STRING post_header_lengths;
};
```

`format` is always 4 (since MariaDB 10.0)

#### GTID_EVENT
event_type value= 162 (0xA2)

For global transaction ID, used to start a new transaction event group.

```C
struct st_mariadb_rpl_gtid_event {
  uint64_t sequence_nr;
  uint32_t domain_id;
  uint8_t flags;
  uint64_t commit_id;
};
```

####  GTID_LIST_EVENT
event_type value= 163 (0xA3)

Logged in every binary log to record the current replication state. It consists of the last GTID seen for each replication domain.

```C
struct st_mariadb_rpl_gtid_list_event {
  uint32_t gtid_cnt;
  MARIADB_GTID *gtid;
};
```

#### HEARTBEAT_LOG_EVENT
event_type value= 27 (0x1B)

This event does not appear in the binary log. It is only sent over the network by a source to a replica to let it know that the source is still alive, and is only sent when the source has no binary log events to send to replicas.

```C
struct st_mariadb_rpl_heartbeat_event {
  uint32_t timestamp;
  uint32_t next_position;
  uint8_t type;
  uint16_t flags;
};
```

* `timestamp`is always 0
* `next_position` always points to last position
* `type` is always 0x1B (Heartbeat event)
* `flags` is always LOG_EVENT_ARTIFICIAL_F (0x20)

#### INTVAR_EVENT
event_type value=5 (0x05)

An INTVAR_EVENT is written to the binary log whenever a statement uses an auto_increment value or LAST_INSERT_ID() function.

```C
struct st_mariadb_rpl_intvar_event {
  unsigned long long value;
  uint8_t type;
};
```

Valid values for `type` are:
* 0x01 LAST_INSERT_ID
* 0x02 Auto_increment value 


#### QUERY_EVENT
event_type value=2 (0x02)

```C
struct st_mariadb_rpl_query_event {
  uint32_t thread_id;
  uint32_t seconds;
  MARIADB_STRING database;
  uint32_t errornr;
  MARIADB_STRING status;
  MARIADB_STRING statement;
};
```

**Note:** QUERY_EVENT is written to the binary log if
* binlog_format of source server was set to STATEMENT (statement based replication)
* a DDL statement was executed
* COMMIT related to a non transactional storage engine

#### RAND_EVENT
event_type value=13 (0x0D)

```C
struct st_mariadb_rpl_rand_event {
  unsigned long long first_seed;
  unsigned long long second_seed;
};
```

#### ROTATE_EVENT
event_type value=4 (0x04)

```C
struct st_mariadb_rpl_rotate_event {
  unsigned long long position;
  MARIADB_STRING filename;
};
```

#### WRITE_ROWS_EVENT_V1, UPDATE_ROWS_EVENT_V1, DELETE_ROWS_EVENT_V1
event_type values= 23, 24, 25  (0x17, 0x18, 0x19)

```C
struct st_mariadb_rpl_rows_event {
  enum mariadb_row_event_type type;
  uint64_t table_id;
  uint16_t flags;
  uint32_t column_count;
  char *column_bitmap;
  char *column_update_bitmap;
  size_t row_data_size;
  void *row_data;
};
```

#### TABLE_MAP_EVENT
event_type value=19 (0x13)

```C
struct st_mariadb_rpl_table_map_event {
  unsigned long long table_id;
  MARIADB_STRING database;
  MARIADB_STRING table;
  unsigned int column_count;
  MARIADB_STRING column_types;
  MARIADB_STRING metadata;
  char *null_indicator;
};
```

#### USERVAR_EVENT
event_type value=14 (0x0E)

```C
struct st_mariadb_rpl_uservar_event {
  MARIADB_STRING name;
  uint8_t is_null;
  uint8_t type;
  uint32_t charset_nr;
  MARIADB_STRING value;
  uint8_t flags;
};
```

#### XID_EVENT
event_type value=16 (0x10)

```C
struct st_mariadb_rpl_xid_event {
  uint64_t transaction_nr;
};
```