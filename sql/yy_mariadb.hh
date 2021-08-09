/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_YY_MARIADB_HH_INCLUDED
# define YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_YY_MARIADB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int MYSQLdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABORT_SYM = 258,
    IMPOSSIBLE_ACTION = 259,
    END_OF_INPUT = 260,
    COLON_ORACLE_SYM = 261,
    PARAM_MARKER = 262,
    FOR_SYSTEM_TIME_SYM = 263,
    LEFT_PAREN_ALT = 264,
    LEFT_PAREN_WITH = 265,
    LEFT_PAREN_LIKE = 266,
    ORACLE_CONCAT_SYM = 267,
    PERCENT_ORACLE_SYM = 268,
    WITH_CUBE_SYM = 269,
    WITH_ROLLUP_SYM = 270,
    WITH_SYSTEM_SYM = 271,
    IDENT = 272,
    IDENT_QUOTED = 273,
    LEX_HOSTNAME = 274,
    UNDERSCORE_CHARSET = 275,
    BIN_NUM = 276,
    DECIMAL_NUM = 277,
    FLOAT_NUM = 278,
    HEX_NUM = 279,
    HEX_STRING = 280,
    LONG_NUM = 281,
    NCHAR_STRING = 282,
    NUM = 283,
    TEXT_STRING = 284,
    ULONGLONG_NUM = 285,
    AND_AND_SYM = 286,
    DOT_DOT_SYM = 287,
    EQUAL_SYM = 288,
    GE = 289,
    LE = 290,
    MYSQL_CONCAT_SYM = 291,
    NE = 292,
    NOT2_SYM = 293,
    OR2_SYM = 294,
    SET_VAR = 295,
    SHIFT_LEFT = 296,
    SHIFT_RIGHT = 297,
    ACCESSIBLE_SYM = 298,
    ADD = 299,
    ALL = 300,
    ALTER = 301,
    ANALYZE_SYM = 302,
    AND_SYM = 303,
    ASC = 304,
    ASENSITIVE_SYM = 305,
    AS = 306,
    BEFORE_SYM = 307,
    BETWEEN_SYM = 308,
    BIGINT = 309,
    BINARY = 310,
    BIT_AND = 311,
    BIT_OR = 312,
    BIT_XOR = 313,
    BLOB_MARIADB_SYM = 314,
    BLOB_ORACLE_SYM = 315,
    BODY_ORACLE_SYM = 316,
    BOTH = 317,
    BY = 318,
    CALL_SYM = 319,
    CASCADE = 320,
    CASE_SYM = 321,
    CAST_SYM = 322,
    CHANGE = 323,
    CHAR_SYM = 324,
    CHECK_SYM = 325,
    COLLATE_SYM = 326,
    CONDITION_SYM = 327,
    CONSTRAINT = 328,
    CONTINUE_MARIADB_SYM = 329,
    CONTINUE_ORACLE_SYM = 330,
    CONVERT_SYM = 331,
    COUNT_SYM = 332,
    CREATE = 333,
    CROSS = 334,
    CUME_DIST_SYM = 335,
    CURDATE = 336,
    CURRENT_ROLE = 337,
    CURRENT_USER = 338,
    CURSOR_SYM = 339,
    CURTIME = 340,
    DATABASE = 341,
    DATABASES = 342,
    DATE_ADD_INTERVAL = 343,
    DATE_SUB_INTERVAL = 344,
    DAY_HOUR_SYM = 345,
    DAY_MICROSECOND_SYM = 346,
    DAY_MINUTE_SYM = 347,
    DAY_SECOND_SYM = 348,
    DECIMAL_SYM = 349,
    DECLARE_MARIADB_SYM = 350,
    DECLARE_ORACLE_SYM = 351,
    DEFAULT = 352,
    DELETE_DOMAIN_ID_SYM = 353,
    DELETE_SYM = 354,
    DENSE_RANK_SYM = 355,
    DESCRIBE = 356,
    DESC = 357,
    DETERMINISTIC_SYM = 358,
    DISTINCT = 359,
    DIV_SYM = 360,
    DO_DOMAIN_IDS_SYM = 361,
    DOUBLE_SYM = 362,
    DROP = 363,
    DUAL_SYM = 364,
    EACH_SYM = 365,
    ELSEIF_MARIADB_SYM = 366,
    ELSE = 367,
    ELSIF_ORACLE_SYM = 368,
    ENCLOSED = 369,
    ESCAPED = 370,
    EXCEPT_SYM = 371,
    EXISTS = 372,
    EXTRACT_SYM = 373,
    FALSE_SYM = 374,
    FETCH_SYM = 375,
    FIRST_VALUE_SYM = 376,
    FLOAT_SYM = 377,
    FOREIGN = 378,
    FOR_SYM = 379,
    FROM = 380,
    FULLTEXT_SYM = 381,
    GOTO_ORACLE_SYM = 382,
    GRANT = 383,
    GROUP_CONCAT_SYM = 384,
    JSON_ARRAYAGG_SYM = 385,
    JSON_OBJECTAGG_SYM = 386,
    GROUP_SYM = 387,
    HAVING = 388,
    HOUR_MICROSECOND_SYM = 389,
    HOUR_MINUTE_SYM = 390,
    HOUR_SECOND_SYM = 391,
    IF_SYM = 392,
    IGNORE_DOMAIN_IDS_SYM = 393,
    IGNORE_SYM = 394,
    INDEX_SYM = 395,
    INFILE = 396,
    INNER_SYM = 397,
    INOUT_SYM = 398,
    INSENSITIVE_SYM = 399,
    INSERT = 400,
    IN_SYM = 401,
    INTERSECT_SYM = 402,
    INTERVAL_SYM = 403,
    INTO = 404,
    INT_SYM = 405,
    IS = 406,
    ITERATE_SYM = 407,
    JOIN_SYM = 408,
    KEYS = 409,
    KEY_SYM = 410,
    KILL_SYM = 411,
    LAG_SYM = 412,
    LEADING = 413,
    LEAD_SYM = 414,
    LEAVE_SYM = 415,
    LEFT = 416,
    LIKE = 417,
    LIMIT = 418,
    LINEAR_SYM = 419,
    LINES = 420,
    LOAD = 421,
    LOCATOR_SYM = 422,
    LOCK_SYM = 423,
    LONGBLOB = 424,
    LONG_SYM = 425,
    LONGTEXT = 426,
    LOOP_SYM = 427,
    LOW_PRIORITY = 428,
    MASTER_SSL_VERIFY_SERVER_CERT_SYM = 429,
    MATCH = 430,
    MAX_SYM = 431,
    MAXVALUE_SYM = 432,
    MEDIAN_SYM = 433,
    MEDIUMBLOB = 434,
    MEDIUMINT = 435,
    MEDIUMTEXT = 436,
    MIN_SYM = 437,
    MINUTE_MICROSECOND_SYM = 438,
    MINUTE_SECOND_SYM = 439,
    MODIFIES_SYM = 440,
    MOD_SYM = 441,
    NATURAL = 442,
    NEG = 443,
    NOT_SYM = 444,
    NO_WRITE_TO_BINLOG = 445,
    NOW_SYM = 446,
    NTH_VALUE_SYM = 447,
    NTILE_SYM = 448,
    NULL_SYM = 449,
    NUMERIC_SYM = 450,
    ON = 451,
    OPTIMIZE = 452,
    OPTIONALLY = 453,
    ORDER_SYM = 454,
    OR_SYM = 455,
    OTHERS_ORACLE_SYM = 456,
    OUTER = 457,
    OUTFILE = 458,
    OUT_SYM = 459,
    OVER_SYM = 460,
    PACKAGE_ORACLE_SYM = 461,
    PAGE_CHECKSUM_SYM = 462,
    PARSE_VCOL_EXPR_SYM = 463,
    PARTITION_SYM = 464,
    PERCENTILE_CONT_SYM = 465,
    PERCENTILE_DISC_SYM = 466,
    PERCENT_RANK_SYM = 467,
    PORTION_SYM = 468,
    POSITION_SYM = 469,
    PRECISION = 470,
    PRIMARY_SYM = 471,
    PROCEDURE_SYM = 472,
    PURGE = 473,
    RAISE_ORACLE_SYM = 474,
    RANGE_SYM = 475,
    RANK_SYM = 476,
    READS_SYM = 477,
    READ_SYM = 478,
    READ_WRITE_SYM = 479,
    REAL = 480,
    RECURSIVE_SYM = 481,
    REFERENCES = 482,
    REF_SYSTEM_ID_SYM = 483,
    REGEXP = 484,
    RELEASE_SYM = 485,
    RENAME = 486,
    REPEAT_SYM = 487,
    REPLACE = 488,
    REQUIRE_SYM = 489,
    RESIGNAL_SYM = 490,
    RESTRICT = 491,
    RETURNING_SYM = 492,
    RETURN_MARIADB_SYM = 493,
    RETURN_ORACLE_SYM = 494,
    REVOKE = 495,
    RIGHT = 496,
    ROW_NUMBER_SYM = 497,
    ROWS_SYM = 498,
    ROWTYPE_ORACLE_SYM = 499,
    SECOND_MICROSECOND_SYM = 500,
    SELECT_SYM = 501,
    SENSITIVE_SYM = 502,
    SEPARATOR_SYM = 503,
    SERVER_OPTIONS = 504,
    SET = 505,
    SHOW = 506,
    SIGNAL_SYM = 507,
    SMALLINT = 508,
    SPATIAL_SYM = 509,
    SPECIFIC_SYM = 510,
    SQL_BIG_RESULT = 511,
    SQLEXCEPTION_SYM = 512,
    SQL_SMALL_RESULT = 513,
    SQLSTATE_SYM = 514,
    SQL_SYM = 515,
    SQLWARNING_SYM = 516,
    SSL_SYM = 517,
    STARTING = 518,
    STATS_AUTO_RECALC_SYM = 519,
    STATS_PERSISTENT_SYM = 520,
    STATS_SAMPLE_PAGES_SYM = 521,
    STDDEV_SAMP_SYM = 522,
    STD_SYM = 523,
    STRAIGHT_JOIN = 524,
    SUBSTRING = 525,
    SUM_SYM = 526,
    SYSDATE = 527,
    TABLE_REF_PRIORITY = 528,
    TABLE_SYM = 529,
    TERMINATED = 530,
    THEN_SYM = 531,
    TINYBLOB = 532,
    TINYINT = 533,
    TINYTEXT = 534,
    TO_SYM = 535,
    TRAILING = 536,
    TRIGGER_SYM = 537,
    TRIM = 538,
    TRUE_SYM = 539,
    UNDO_SYM = 540,
    UNION_SYM = 541,
    UNIQUE_SYM = 542,
    UNLOCK_SYM = 543,
    UNSIGNED = 544,
    UPDATE_SYM = 545,
    USAGE = 546,
    USE_SYM = 547,
    USING = 548,
    UTC_DATE_SYM = 549,
    UTC_TIMESTAMP_SYM = 550,
    UTC_TIME_SYM = 551,
    VALUES_IN_SYM = 552,
    VALUES_LESS_SYM = 553,
    VALUES = 554,
    VARBINARY = 555,
    VARCHAR = 556,
    VARIANCE_SYM = 557,
    VAR_SAMP_SYM = 558,
    VARYING = 559,
    WHEN_SYM = 560,
    WHERE = 561,
    WHILE_SYM = 562,
    WITH = 563,
    XOR = 564,
    YEAR_MONTH_SYM = 565,
    ZEROFILL = 566,
    BODY_MARIADB_SYM = 567,
    ELSEIF_ORACLE_SYM = 568,
    ELSIF_MARIADB_SYM = 569,
    EXCEPTION_ORACLE_SYM = 570,
    GOTO_MARIADB_SYM = 571,
    OTHERS_MARIADB_SYM = 572,
    PACKAGE_MARIADB_SYM = 573,
    RAISE_MARIADB_SYM = 574,
    ROWTYPE_MARIADB_SYM = 575,
    ACCOUNT_SYM = 576,
    ACTION = 577,
    ADMIN_SYM = 578,
    ADDDATE_SYM = 579,
    AFTER_SYM = 580,
    AGAINST = 581,
    AGGREGATE_SYM = 582,
    ALGORITHM_SYM = 583,
    ALWAYS_SYM = 584,
    ANY_SYM = 585,
    ASCII_SYM = 586,
    AT_SYM = 587,
    ATOMIC_SYM = 588,
    AUTHORS_SYM = 589,
    AUTOEXTEND_SIZE_SYM = 590,
    AUTO_INC = 591,
    AUTO_SYM = 592,
    AVG_ROW_LENGTH = 593,
    AVG_SYM = 594,
    BACKUP_SYM = 595,
    BEGIN_MARIADB_SYM = 596,
    BEGIN_ORACLE_SYM = 597,
    BINLOG_SYM = 598,
    BIT_SYM = 599,
    BLOCK_SYM = 600,
    BOOL_SYM = 601,
    BOOLEAN_SYM = 602,
    BTREE_SYM = 603,
    BYTE_SYM = 604,
    CACHE_SYM = 605,
    CASCADED = 606,
    CATALOG_NAME_SYM = 607,
    CHAIN_SYM = 608,
    CHANGED = 609,
    CHARSET = 610,
    CHECKPOINT_SYM = 611,
    CHECKSUM_SYM = 612,
    CIPHER_SYM = 613,
    CLASS_ORIGIN_SYM = 614,
    CLIENT_SYM = 615,
    CLOB_MARIADB_SYM = 616,
    CLOB_ORACLE_SYM = 617,
    CLOSE_SYM = 618,
    COALESCE = 619,
    CODE_SYM = 620,
    COLLATION_SYM = 621,
    COLUMNS = 622,
    COLUMN_ADD_SYM = 623,
    COLUMN_CHECK_SYM = 624,
    COLUMN_CREATE_SYM = 625,
    COLUMN_DELETE_SYM = 626,
    COLUMN_GET_SYM = 627,
    COLUMN_SYM = 628,
    COLUMN_NAME_SYM = 629,
    COMMENT_SYM = 630,
    COMMITTED_SYM = 631,
    COMMIT_SYM = 632,
    COMPACT_SYM = 633,
    COMPLETION_SYM = 634,
    COMPRESSED_SYM = 635,
    CONCURRENT = 636,
    CONNECTION_SYM = 637,
    CONSISTENT_SYM = 638,
    CONSTRAINT_CATALOG_SYM = 639,
    CONSTRAINT_NAME_SYM = 640,
    CONSTRAINT_SCHEMA_SYM = 641,
    CONTAINS_SYM = 642,
    CONTEXT_SYM = 643,
    CONTRIBUTORS_SYM = 644,
    CPU_SYM = 645,
    CUBE_SYM = 646,
    CURRENT_SYM = 647,
    CURRENT_POS_SYM = 648,
    CURSOR_NAME_SYM = 649,
    CYCLE_SYM = 650,
    DATAFILE_SYM = 651,
    DATA_SYM = 652,
    DATETIME = 653,
    DATE_FORMAT_SYM = 654,
    DATE_SYM = 655,
    DAY_SYM = 656,
    DEALLOCATE_SYM = 657,
    DECODE_MARIADB_SYM = 658,
    DECODE_ORACLE_SYM = 659,
    DEFINER_SYM = 660,
    DELAYED_SYM = 661,
    DELAY_KEY_WRITE_SYM = 662,
    DES_KEY_FILE = 663,
    DIAGNOSTICS_SYM = 664,
    DIRECTORY_SYM = 665,
    DISABLE_SYM = 666,
    DISCARD = 667,
    DISK_SYM = 668,
    DO_SYM = 669,
    DUMPFILE = 670,
    DUPLICATE_SYM = 671,
    DYNAMIC_SYM = 672,
    ENABLE_SYM = 673,
    END = 674,
    ENDS_SYM = 675,
    ENGINES_SYM = 676,
    ENGINE_SYM = 677,
    ENUM = 678,
    ERROR_SYM = 679,
    ERRORS = 680,
    ESCAPE_SYM = 681,
    EVENTS_SYM = 682,
    EVENT_SYM = 683,
    EVERY_SYM = 684,
    EXCHANGE_SYM = 685,
    EXAMINED_SYM = 686,
    EXCLUDE_SYM = 687,
    EXECUTE_SYM = 688,
    EXCEPTION_MARIADB_SYM = 689,
    EXIT_MARIADB_SYM = 690,
    EXIT_ORACLE_SYM = 691,
    EXPANSION_SYM = 692,
    EXPIRE_SYM = 693,
    EXPORT_SYM = 694,
    EXTENDED_SYM = 695,
    EXTENT_SIZE_SYM = 696,
    FAST_SYM = 697,
    FAULTS_SYM = 698,
    FEDERATED_SYM = 699,
    FILE_SYM = 700,
    FIRST_SYM = 701,
    FIXED_SYM = 702,
    FLUSH_SYM = 703,
    FOLLOWS_SYM = 704,
    FOLLOWING_SYM = 705,
    FORCE_SYM = 706,
    FORMAT_SYM = 707,
    FOUND_SYM = 708,
    FULL = 709,
    FUNCTION_SYM = 710,
    GENERAL = 711,
    GENERATED_SYM = 712,
    GET_FORMAT = 713,
    GET_SYM = 714,
    GLOBAL_SYM = 715,
    GRANTS = 716,
    HANDLER_SYM = 717,
    HARD_SYM = 718,
    HASH_SYM = 719,
    HELP_SYM = 720,
    HIGH_PRIORITY = 721,
    HISTORY_SYM = 722,
    HOST_SYM = 723,
    HOSTS_SYM = 724,
    HOUR_SYM = 725,
    ID_SYM = 726,
    IDENTIFIED_SYM = 727,
    IGNORE_SERVER_IDS_SYM = 728,
    IMMEDIATE_SYM = 729,
    IMPORT = 730,
    INCREMENT_SYM = 731,
    INDEXES = 732,
    INITIAL_SIZE_SYM = 733,
    INSERT_METHOD = 734,
    INSTALL_SYM = 735,
    INVOKER_SYM = 736,
    IO_SYM = 737,
    IPC_SYM = 738,
    ISOLATION = 739,
    ISOPEN_SYM = 740,
    ISSUER_SYM = 741,
    INVISIBLE_SYM = 742,
    JSON_SYM = 743,
    KEY_BLOCK_SIZE = 744,
    LANGUAGE_SYM = 745,
    LAST_SYM = 746,
    LAST_VALUE = 747,
    LASTVAL_SYM = 748,
    LEAVES = 749,
    LESS_SYM = 750,
    LEVEL_SYM = 751,
    LIST_SYM = 752,
    LOCAL_SYM = 753,
    LOCKS_SYM = 754,
    LOGFILE_SYM = 755,
    LOGS_SYM = 756,
    MASTER_CONNECT_RETRY_SYM = 757,
    MASTER_DELAY_SYM = 758,
    MASTER_GTID_POS_SYM = 759,
    MASTER_HOST_SYM = 760,
    MASTER_LOG_FILE_SYM = 761,
    MASTER_LOG_POS_SYM = 762,
    MASTER_PASSWORD_SYM = 763,
    MASTER_PORT_SYM = 764,
    MASTER_SERVER_ID_SYM = 765,
    MASTER_SSL_CAPATH_SYM = 766,
    MASTER_SSL_CA_SYM = 767,
    MASTER_SSL_CERT_SYM = 768,
    MASTER_SSL_CIPHER_SYM = 769,
    MASTER_SSL_CRL_SYM = 770,
    MASTER_SSL_CRLPATH_SYM = 771,
    MASTER_SSL_KEY_SYM = 772,
    MASTER_SSL_SYM = 773,
    MASTER_SYM = 774,
    MASTER_USER_SYM = 775,
    MASTER_USE_GTID_SYM = 776,
    MASTER_HEARTBEAT_PERIOD_SYM = 777,
    MAX_CONNECTIONS_PER_HOUR = 778,
    MAX_QUERIES_PER_HOUR = 779,
    MAX_ROWS = 780,
    MAX_SIZE_SYM = 781,
    MAX_UPDATES_PER_HOUR = 782,
    MAX_STATEMENT_TIME_SYM = 783,
    MAX_USER_CONNECTIONS_SYM = 784,
    MEDIUM_SYM = 785,
    MEMORY_SYM = 786,
    MERGE_SYM = 787,
    MESSAGE_TEXT_SYM = 788,
    MICROSECOND_SYM = 789,
    MIGRATE_SYM = 790,
    MINUTE_SYM = 791,
    MINVALUE_SYM = 792,
    MIN_ROWS = 793,
    MODE_SYM = 794,
    MODIFY_SYM = 795,
    MONITOR_SYM = 796,
    MONTH_SYM = 797,
    MUTEX_SYM = 798,
    MYSQL_SYM = 799,
    MYSQL_ERRNO_SYM = 800,
    NAMES_SYM = 801,
    NAME_SYM = 802,
    NATIONAL_SYM = 803,
    NCHAR_SYM = 804,
    NEVER_SYM = 805,
    NEW_SYM = 806,
    NEXT_SYM = 807,
    NEXTVAL_SYM = 808,
    NOCACHE_SYM = 809,
    NOCYCLE_SYM = 810,
    NODEGROUP_SYM = 811,
    NONE_SYM = 812,
    NOTFOUND_SYM = 813,
    NO_SYM = 814,
    NOMAXVALUE_SYM = 815,
    NOMINVALUE_SYM = 816,
    NO_WAIT_SYM = 817,
    NOWAIT_SYM = 818,
    NUMBER_MARIADB_SYM = 819,
    NUMBER_ORACLE_SYM = 820,
    NVARCHAR_SYM = 821,
    OF_SYM = 822,
    OFFSET_SYM = 823,
    OLD_PASSWORD_SYM = 824,
    ONE_SYM = 825,
    ONLY_SYM = 826,
    ONLINE_SYM = 827,
    OPEN_SYM = 828,
    OPTIONS_SYM = 829,
    OPTION = 830,
    OVERLAPS_SYM = 831,
    OWNER_SYM = 832,
    PACK_KEYS_SYM = 833,
    PAGE_SYM = 834,
    PARSER_SYM = 835,
    PARTIAL = 836,
    PARTITIONS_SYM = 837,
    PARTITIONING_SYM = 838,
    PASSWORD_SYM = 839,
    PERIOD_SYM = 840,
    PERSISTENT_SYM = 841,
    PHASE_SYM = 842,
    PLUGINS_SYM = 843,
    PLUGIN_SYM = 844,
    PORT_SYM = 845,
    PRECEDES_SYM = 846,
    PRECEDING_SYM = 847,
    PREPARE_SYM = 848,
    PRESERVE_SYM = 849,
    PREV_SYM = 850,
    PREVIOUS_SYM = 851,
    PRIVILEGES = 852,
    PROCESS = 853,
    PROCESSLIST_SYM = 854,
    PROFILE_SYM = 855,
    PROFILES_SYM = 856,
    PROXY_SYM = 857,
    QUARTER_SYM = 858,
    QUERY_SYM = 859,
    QUICK = 860,
    RAW_MARIADB_SYM = 861,
    RAW_ORACLE_SYM = 862,
    READ_ONLY_SYM = 863,
    REBUILD_SYM = 864,
    RECOVER_SYM = 865,
    REDOFILE_SYM = 866,
    REDO_BUFFER_SIZE_SYM = 867,
    REDUNDANT_SYM = 868,
    RELAY = 869,
    RELAYLOG_SYM = 870,
    RELAY_LOG_FILE_SYM = 871,
    RELAY_LOG_POS_SYM = 872,
    RELAY_THREAD = 873,
    RELOAD = 874,
    REMOVE_SYM = 875,
    REORGANIZE_SYM = 876,
    REPAIR = 877,
    REPEATABLE_SYM = 878,
    REPLAY_SYM = 879,
    REPLICATION = 880,
    RESET_SYM = 881,
    RESTART_SYM = 882,
    RESOURCES = 883,
    RESTORE_SYM = 884,
    RESUME_SYM = 885,
    RETURNED_SQLSTATE_SYM = 886,
    RETURNS_SYM = 887,
    REUSE_SYM = 888,
    REVERSE_SYM = 889,
    ROLE_SYM = 890,
    ROLLBACK_SYM = 891,
    ROLLUP_SYM = 892,
    ROUTINE_SYM = 893,
    ROWCOUNT_SYM = 894,
    ROW_SYM = 895,
    ROW_COUNT_SYM = 896,
    ROW_FORMAT_SYM = 897,
    RTREE_SYM = 898,
    SAVEPOINT_SYM = 899,
    SCHEDULE_SYM = 900,
    SCHEMA_NAME_SYM = 901,
    SECOND_SYM = 902,
    SECURITY_SYM = 903,
    SEQUENCE_SYM = 904,
    SERIALIZABLE_SYM = 905,
    SERIAL_SYM = 906,
    SESSION_SYM = 907,
    SERVER_SYM = 908,
    SETVAL_SYM = 909,
    SHARE_SYM = 910,
    SHUTDOWN = 911,
    SIGNED_SYM = 912,
    SIMPLE_SYM = 913,
    SLAVE = 914,
    SLAVES = 915,
    SLAVE_POS_SYM = 916,
    SLOW = 917,
    SNAPSHOT_SYM = 918,
    SOCKET_SYM = 919,
    SOFT_SYM = 920,
    SONAME_SYM = 921,
    SOUNDS_SYM = 922,
    SOURCE_SYM = 923,
    SQL_BUFFER_RESULT = 924,
    SQL_CACHE_SYM = 925,
    SQL_CALC_FOUND_ROWS = 926,
    SQL_NO_CACHE_SYM = 927,
    SQL_THREAD = 928,
    STAGE_SYM = 929,
    STARTS_SYM = 930,
    START_SYM = 931,
    STATEMENT_SYM = 932,
    STATUS_SYM = 933,
    STOP_SYM = 934,
    STORAGE_SYM = 935,
    STORED_SYM = 936,
    STRING_SYM = 937,
    SUBCLASS_ORIGIN_SYM = 938,
    SUBDATE_SYM = 939,
    SUBJECT_SYM = 940,
    SUBPARTITIONS_SYM = 941,
    SUBPARTITION_SYM = 942,
    SUPER_SYM = 943,
    SUSPEND_SYM = 944,
    SWAPS_SYM = 945,
    SWITCHES_SYM = 946,
    SYSTEM = 947,
    SYSTEM_TIME_SYM = 948,
    TABLES = 949,
    TABLESPACE = 950,
    TABLE_CHECKSUM_SYM = 951,
    TABLE_NAME_SYM = 952,
    TEMPORARY = 953,
    TEMPTABLE_SYM = 954,
    TEXT_SYM = 955,
    THAN_SYM = 956,
    TIES_SYM = 957,
    TIMESTAMP = 958,
    TIMESTAMP_ADD = 959,
    TIMESTAMP_DIFF = 960,
    TIME_SYM = 961,
    TRANSACTION_SYM = 962,
    TRANSACTIONAL_SYM = 963,
    THREADS_SYM = 964,
    TRIGGERS_SYM = 965,
    TRIM_ORACLE = 966,
    TRUNCATE_SYM = 967,
    TYPES_SYM = 968,
    TYPE_SYM = 969,
    UDF_RETURNS_SYM = 970,
    UNBOUNDED_SYM = 971,
    UNCOMMITTED_SYM = 972,
    UNDEFINED_SYM = 973,
    UNDOFILE_SYM = 974,
    UNDO_BUFFER_SIZE_SYM = 975,
    UNICODE_SYM = 976,
    UNINSTALL_SYM = 977,
    UNKNOWN_SYM = 978,
    UNTIL_SYM = 979,
    UPGRADE_SYM = 980,
    USER_SYM = 981,
    USE_FRM = 982,
    VALUE_SYM = 983,
    VARCHAR2_MARIADB_SYM = 984,
    VARCHAR2_ORACLE_SYM = 985,
    VARIABLES = 986,
    VERSIONING_SYM = 987,
    VIA_SYM = 988,
    VIEW_SYM = 989,
    VISIBLE_SYM = 990,
    VIRTUAL_SYM = 991,
    WAIT_SYM = 992,
    WARNINGS = 993,
    WEEK_SYM = 994,
    WEIGHT_STRING_SYM = 995,
    WINDOW_SYM = 996,
    WITHIN = 997,
    WITHOUT = 998,
    WORK_SYM = 999,
    WRAPPER_SYM = 1000,
    WRITE_SYM = 1001,
    X509_SYM = 1002,
    XA_SYM = 1003,
    XML_SYM = 1004,
    YEAR_SYM = 1005,
    CONDITIONLESS_JOIN = 1006,
    ON_SYM = 1007,
    PREC_BELOW_NOT = 1008,
    SUBQUERY_AS_EXPR = 1009,
    PREC_BELOW_IDENTIFIER_OPT_SPECIAL_CASE = 1010,
    USER = 1011,
    PREC_BELOW_CONTRACTION_TOKEN2 = 1012,
    EMPTY_FROM_CLAUSE = 1013
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 199 "/home/buildbot/git/sql/sql_yacc.yy"


  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  uint sp_instr_addr;

  /* structs */
  LEX_CSTRING lex_str;
  Lex_ident_cli_st kwd;
  Lex_ident_cli_st ident_cli;
  Lex_ident_sys_st ident_sys;
  Lex_column_list_privilege_st column_list_privilege;
  Lex_string_with_metadata_st lex_string_with_metadata;
  Lex_spblock_st spblock;
  Lex_spblock_handlers_st spblock_handlers;
  Lex_length_and_dec_st Lex_length_and_dec;
  Lex_cast_type_st Lex_cast_type;
  Lex_field_type_st Lex_field_type;
  Lex_dyncol_type_st Lex_dyncol_type;
  Lex_for_loop_st for_loop;
  Lex_for_loop_bounds_st for_loop_bounds;
  Lex_trim_st trim;
  vers_history_point_t vers_history_point;
  struct
  {
    enum sub_select_type unit_type;
    bool distinct;
  } unit_operation;
  struct
  {
    SELECT_LEX *first;
    SELECT_LEX *prev_last;
  } select_list;
  SQL_I_List<ORDER> *select_order;
  Lex_select_lock select_lock;
  Lex_select_limit select_limit;
  Lex_order_limit_lock *order_limit_lock;

  /* pointers */
  Lex_ident_sys *ident_sys_ptr;
  Create_field *create_field;
  Spvar_definition *spvar_definition;
  Row_definition_list *spvar_definition_list;
  const Type_handler *type_handler;
  const class Sp_handler *sp_handler;
  CHARSET_INFO *charset;
  Condition_information_item *cond_info_item;
  DYNCALL_CREATE_DEF *dyncol_def;
  Diagnostics_information *diag_info;
  Item *item;
  Item_num *item_num;
  Item_param *item_param;
  Item_basic_constant *item_basic_constant;
  Key_part_spec *key_part;
  LEX *lex;
  sp_expr_lex *expr_lex;
  sp_assignment_lex *assignment_lex;
  class sp_lex_cursor *sp_cursor_stmt;
  LEX_CSTRING *lex_str_ptr;
  LEX_USER *lex_user;
  USER_AUTH *user_auth;
  List<Condition_information_item> *cond_info_list;
  List<DYNCALL_CREATE_DEF> *dyncol_def_list;
  List<Item> *item_list;
  List<sp_assignment_lex> *sp_assignment_lex_list;
  List<Statement_information_item> *stmt_info_list;
  List<String> *string_list;
  List<Lex_ident_sys> *ident_sys_list;
  Statement_information_item *stmt_info_item;
  String *string;
  TABLE_LIST *table_list;
  Table_ident *table;
  Qualified_column_ident *qualified_column_ident;
  char *simple_string;
  const char *const_simple_string;
  chooser_compare_func_creator boolfunc2creator;
  class Lex_grant_privilege *lex_grant;
  class Lex_grant_object_name *lex_grant_ident;
  class my_var *myvar;
  class sp_condition_value *spcondvalue;
  class sp_head *sphead;
  class sp_name *spname;
  class sp_variable *spvar;
  class With_element_head *with_element_head;
  class With_clause *with_clause;
  class Virtual_column_info *virtual_column;

  handlerton *db_type;
  st_select_lex *select_lex;
  st_select_lex_unit *select_lex_unit;
  struct p_elem_val *p_elem_value;
  class Window_frame *window_frame;
  class Window_frame_bound *window_frame_bound;
  udf_func *udf;
  st_trg_execution_order trg_execution_order;

  /* enums */
  enum enum_sp_suid_behaviour sp_suid;
  enum enum_sp_aggregate_type sp_aggregate_type;
  enum enum_view_suid view_suid;
  enum Condition_information_item::Name cond_info_item_name;
  enum enum_diag_condition_item_name diag_condition_item_name;
  enum Diagnostics_information::Which_area diag_area;
  enum enum_fk_option m_fk_option;
  enum Item_udftype udf_type;
  enum Key::Keytype key_type;
  enum Statement_information_item::Name stmt_info_item_name;
  enum enum_filetype filetype;
  enum enum_tx_isolation tx_isolation;
  enum enum_var_type var_type;
  enum enum_yes_no_unknown m_yes_no_unk;
  enum ha_choice choice;
  enum ha_key_alg key_alg;
  enum ha_rkey_function ha_rkey_mode;
  enum index_hint_type index_hint;
  enum interval_type interval, interval_time_st;
  enum row_type row_type;
  enum sp_variable::enum_mode spvar_mode;
  enum thr_lock_type lock_type;
  enum enum_mysql_timestamp_type date_time_type;
  enum Window_frame_bound::Bound_precedence_type bound_precedence_type;
  enum Window_frame::Frame_units frame_units;
  enum Window_frame::Frame_exclusion frame_exclusion;
  enum trigger_order_type trigger_action_order_type;
  DDL_options_st object_ddl_options;
  enum vers_kind_t vers_range_unit;
  enum Column_definition::enum_column_versioning vers_column_versioning;
  enum plsql_cursor_attr_t plsql_cursor_attr;
  privilege_t privilege;

#line 946 "/home/buildbot/git/mkdist/sql/yy_mariadb.hh"

};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int MYSQLparse (THD *thd);

#endif /* !YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_YY_MARIADB_HH_INCLUDED  */
