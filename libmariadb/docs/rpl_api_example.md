## Binlog/Replication API example

```C

#include <mysql.h>
#include <mariadb_rpl.h>

static int read_events(MYSQL *mysql)
{
  MARIADB_RPL_EVENT *event= NULL;
  MARIADB_RPL *rpl= mariadb_rpl_init(mysql);

  mysql_query(mysql, "SET @mariadb_slave_capability=4");
  mysql_query(mysql, "SET @slave_gtid_strict_mode=1");
  mysql_query(mysql, "SET @slave_gtid_ignore_duplicates=1");
  mysql_query(mysql, "SET NAMES utf8");
  mysql_query(mysql, "SET @master_binlog_checksum= @@global.binlog_checksum");

  mariadb_rpl_optionsv(rpl, MARIADB_RPL_SERVER_ID, 12);
  mariadb_rpl_optionsv(rpl, MARIADB_RPL_START, 4);
  mariadb_rpl_optionsv(rpl, MARIADB_RPL_FLAGS, MARIADB_RPL_BINLOG_SEND_ANNOTATE_ROWS)

  if (mariadb_rpl_open(rpl))
    return FAIL;

  while((event= mariadb_rpl_fetch(rpl, event)))
  {
    /* process events */
    switch(event->event_type) {
      case BINLOG_CHECKPOINT_EVENT:
        ....
        break;
      case FORMAT_DESCRIPTION_EVENT:
        ...
        break;
      ....
      default:
        printf("Unknown event: %d", event->event_type);
        break;
    }
  }
  mariadb_free_rpl_event(event);
  mariadb_rpl_close(rpl);
  return OK;
}

```