# Binlog/Replication API Types and definitions

## mariadb_rpl_option
```C
enum mariadb_rpl_option {
  MARIADB_RPL_FILENAME,       /* Filename and length */
  MARIADB_RPL_START,          /* Start position */
  MARIADB_RPL_SERVER_ID,      /* Server ID */
  MARIADB_RPL_FLAGS,          /* Protocol flags */
  MARIADB_RPL_GTID_CALLBACK,  /* GTID callback function */
  MARIADB_RPL_GTID_DATA,      /* GTID data */
  MARIADB_RPL_BUFFER
};
```

## mariadb_rpl_event
```C
enum mariadb_rpl_event {
  UNKNOWN_EVENT= 0,
  START_EVENT_V3= 1,
  QUERY_EVENT= 2,
  STOP_EVENT= 3,
  ROTATE_EVENT= 4,
  INTVAR_EVENT= 5,
  LOAD_EVENT= 6,
  SLAVE_EVENT= 7,
  CREATE_FILE_EVENT= 8,
  APPEND_BLOCK_EVENT= 9,
  EXEC_LOAD_EVENT= 10,
  DELETE_FILE_EVENT= 11,
  NEW_LOAD_EVENT= 12,
  RAND_EVENT= 13,
  USER_VAR_EVENT= 14,
  FORMAT_DESCRIPTION_EVENT= 15,
  XID_EVENT= 16,
  BEGIN_LOAD_QUERY_EVENT= 17,
  EXECUTE_LOAD_QUERY_EVENT= 18,
  TABLE_MAP_EVENT = 19,

  PRE_GA_WRITE_ROWS_EVENT = 20, /* deprecated */
  PRE_GA_UPDATE_ROWS_EVENT = 21, /* deprecated */
  PRE_GA_DELETE_ROWS_EVENT = 22, /* deprecated */

  WRITE_ROWS_EVENT_V1 = 23,
  UPDATE_ROWS_EVENT_V1 = 24,
  DELETE_ROWS_EVENT_V1 = 25,
  INCIDENT_EVENT= 26,
  HEARTBEAT_LOG_EVENT= 27,
  IGNORABLE_LOG_EVENT= 28,
  ROWS_QUERY_LOG_EVENT= 29,
  WRITE_ROWS_EVENT = 30,
  UPDATE_ROWS_EVENT = 31,
  DELETE_ROWS_EVENT = 32,
  GTID_LOG_EVENT= 33,
  ANONYMOUS_GTID_LOG_EVENT= 34,
  PREVIOUS_GTIDS_LOG_EVENT= 35,
  TRANSACTION_CONTEXT_EVENT= 36,
  VIEW_CHANGE_EVENT= 37,
  XA_PREPARE_LOG_EVENT= 38,

  /*
    Add new events here - right above this comment!
    Existing events (except ENUM_END_EVENT) should never change their numbers
  */

  /* New MySQL/Sun events are to be added right above this comment */
  MYSQL_EVENTS_END,

  MARIA_EVENTS_BEGIN= 160,
  ANNOTATE_ROWS_EVENT= 160,
  BINLOG_CHECKPOINT_EVENT= 161,
  GTID_EVENT= 162,
  GTID_LIST_EVENT= 163,
  START_ENCRYPTION_EVENT= 164,
  QUERY_COMPRESSED_EVENT = 165,
  WRITE_ROWS_COMPRESSED_EVENT_V1 = 166,
  UPDATE_ROWS_COMPRESSED_EVENT_V1 = 167,
  DELETE_ROWS_COMPRESSED_EVENT_V1 = 168,
  WRITE_ROWS_COMPRESSED_EVENT = 169,
  UPDATE_ROWS_COMPRESSED_EVENT = 170,
  DELETE_ROWS_COMPRESSED_EVENT = 171,

  /* Add new MariaDB events here - right above this comment!  */

  ENUM_END_EVENT /* end marker */
};
```

## mariadb_row_event_type
```C
enum mariadb_row_event_type {
  WRITE_ROWS= 0,
  UPDATE_ROWS= 1,
  DELETE_ROWS= 2
};

```

## Flags
```C
#define MARIADB_RPL_BINLOG_DUMP_NON_BLOCK 1
#define MARIADB_RPL_BINLOG_SEND_ANNOTATE_ROWS 2
#define MARIADB_RPL_IGNORE_HEARTBEAT (1 << 17)
```