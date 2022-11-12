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

#ifndef YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_YY_ORACLE_HH_INCLUDED
# define YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_YY_ORACLE_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ORAdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABORT_SYM = 258,
    IMPOSSIBLE_ACTION = 259,
    FORCE_LOOKAHEAD = 260,
    END_OF_INPUT = 261,
    COLON_ORACLE_SYM = 262,
    PARAM_MARKER = 263,
    FOR_SYSTEM_TIME_SYM = 264,
    LEFT_PAREN_ALT = 265,
    LEFT_PAREN_WITH = 266,
    LEFT_PAREN_LIKE = 267,
    ORACLE_CONCAT_SYM = 268,
    PERCENT_ORACLE_SYM = 269,
    WITH_CUBE_SYM = 270,
    WITH_ROLLUP_SYM = 271,
    WITH_SYSTEM_SYM = 272,
    IDENT = 273,
    IDENT_QUOTED = 274,
    LEX_HOSTNAME = 275,
    UNDERSCORE_CHARSET = 276,
    BIN_NUM = 277,
    DECIMAL_NUM = 278,
    FLOAT_NUM = 279,
    HEX_NUM = 280,
    HEX_STRING = 281,
    LONG_NUM = 282,
    NCHAR_STRING = 283,
    NUM = 284,
    TEXT_STRING = 285,
    ULONGLONG_NUM = 286,
    AND_AND_SYM = 287,
    DOT_DOT_SYM = 288,
    EQUAL_SYM = 289,
    GE = 290,
    LE = 291,
    MYSQL_CONCAT_SYM = 292,
    NE = 293,
    NOT2_SYM = 294,
    OR2_SYM = 295,
    SET_VAR = 296,
    SHIFT_LEFT = 297,
    SHIFT_RIGHT = 298,
    ACCESSIBLE_SYM = 299,
    ADD = 300,
    ALL = 301,
    ALTER = 302,
    ANALYZE_SYM = 303,
    AND_SYM = 304,
    ASC = 305,
    ASENSITIVE_SYM = 306,
    AS = 307,
    BEFORE_SYM = 308,
    BETWEEN_SYM = 309,
    BIGINT = 310,
    BINARY = 311,
    BIT_AND = 312,
    BIT_OR = 313,
    BIT_XOR = 314,
    BLOB_MARIADB_SYM = 315,
    BLOB_ORACLE_SYM = 316,
    BODY_ORACLE_SYM = 317,
    BOTH = 318,
    BY = 319,
    CALL_SYM = 320,
    CASCADE = 321,
    CASE_SYM = 322,
    CAST_SYM = 323,
    CHANGE = 324,
    CHAR_SYM = 325,
    CHECK_SYM = 326,
    COLLATE_SYM = 327,
    CONDITION_SYM = 328,
    CONSTRAINT = 329,
    CONTINUE_MARIADB_SYM = 330,
    CONTINUE_ORACLE_SYM = 331,
    CONVERT_SYM = 332,
    COUNT_SYM = 333,
    CREATE = 334,
    CROSS = 335,
    CUME_DIST_SYM = 336,
    CURDATE = 337,
    CURRENT_ROLE = 338,
    CURRENT_USER = 339,
    CURSOR_SYM = 340,
    CURTIME = 341,
    DATABASE = 342,
    DATABASES = 343,
    DATE_ADD_INTERVAL = 344,
    DATE_SUB_INTERVAL = 345,
    DAY_HOUR_SYM = 346,
    DAY_MICROSECOND_SYM = 347,
    DAY_MINUTE_SYM = 348,
    DAY_SECOND_SYM = 349,
    DECIMAL_SYM = 350,
    DECLARE_MARIADB_SYM = 351,
    DECLARE_ORACLE_SYM = 352,
    DEFAULT = 353,
    DELETE_DOMAIN_ID_SYM = 354,
    DELETE_SYM = 355,
    DENSE_RANK_SYM = 356,
    DESCRIBE = 357,
    DESC = 358,
    DETERMINISTIC_SYM = 359,
    DISTINCT = 360,
    DIV_SYM = 361,
    DO_DOMAIN_IDS_SYM = 362,
    DOUBLE_SYM = 363,
    DROP = 364,
    DUAL_SYM = 365,
    EACH_SYM = 366,
    ELSEIF_MARIADB_SYM = 367,
    ELSE = 368,
    ELSIF_ORACLE_SYM = 369,
    ENCLOSED = 370,
    ESCAPED = 371,
    EXCEPT_SYM = 372,
    EXISTS = 373,
    EXTRACT_SYM = 374,
    FALSE_SYM = 375,
    FETCH_SYM = 376,
    FIRST_VALUE_SYM = 377,
    FLOAT_SYM = 378,
    FOREIGN = 379,
    FOR_SYM = 380,
    FROM = 381,
    FULLTEXT_SYM = 382,
    GOTO_ORACLE_SYM = 383,
    GRANT = 384,
    GROUP_CONCAT_SYM = 385,
    JSON_ARRAYAGG_SYM = 386,
    JSON_OBJECTAGG_SYM = 387,
    GROUP_SYM = 388,
    HAVING = 389,
    HOUR_MICROSECOND_SYM = 390,
    HOUR_MINUTE_SYM = 391,
    HOUR_SECOND_SYM = 392,
    IF_SYM = 393,
    IGNORE_DOMAIN_IDS_SYM = 394,
    IGNORE_SYM = 395,
    INDEX_SYM = 396,
    INFILE = 397,
    INNER_SYM = 398,
    INOUT_SYM = 399,
    INSENSITIVE_SYM = 400,
    INSERT = 401,
    IN_SYM = 402,
    INTERSECT_SYM = 403,
    INTERVAL_SYM = 404,
    INTO = 405,
    INT_SYM = 406,
    IS = 407,
    ITERATE_SYM = 408,
    JOIN_SYM = 409,
    KEYS = 410,
    KEY_SYM = 411,
    KILL_SYM = 412,
    LAG_SYM = 413,
    LEADING = 414,
    LEAD_SYM = 415,
    LEAVE_SYM = 416,
    LEFT = 417,
    LIKE = 418,
    LIMIT = 419,
    LINEAR_SYM = 420,
    LINES = 421,
    LOAD = 422,
    LOCATOR_SYM = 423,
    LOCK_SYM = 424,
    LONGBLOB = 425,
    LONG_SYM = 426,
    LONGTEXT = 427,
    LOOP_SYM = 428,
    LOW_PRIORITY = 429,
    MASTER_SSL_VERIFY_SERVER_CERT_SYM = 430,
    MATCH = 431,
    MAX_SYM = 432,
    MAXVALUE_SYM = 433,
    MEDIAN_SYM = 434,
    MEDIUMBLOB = 435,
    MEDIUMINT = 436,
    MEDIUMTEXT = 437,
    MIN_SYM = 438,
    MINUTE_MICROSECOND_SYM = 439,
    MINUTE_SECOND_SYM = 440,
    MODIFIES_SYM = 441,
    MOD_SYM = 442,
    NATURAL = 443,
    NEG = 444,
    NOT_SYM = 445,
    NO_WRITE_TO_BINLOG = 446,
    NOW_SYM = 447,
    NTH_VALUE_SYM = 448,
    NTILE_SYM = 449,
    NULL_SYM = 450,
    NUMERIC_SYM = 451,
    ON = 452,
    OPTIMIZE = 453,
    OPTIONALLY = 454,
    ORDER_SYM = 455,
    OR_SYM = 456,
    OTHERS_ORACLE_SYM = 457,
    OUTER = 458,
    OUTFILE = 459,
    OUT_SYM = 460,
    OVER_SYM = 461,
    PACKAGE_ORACLE_SYM = 462,
    PAGE_CHECKSUM_SYM = 463,
    PARSE_VCOL_EXPR_SYM = 464,
    PARTITION_SYM = 465,
    PERCENTILE_CONT_SYM = 466,
    PERCENTILE_DISC_SYM = 467,
    PERCENT_RANK_SYM = 468,
    PORTION_SYM = 469,
    POSITION_SYM = 470,
    PRECISION = 471,
    PRIMARY_SYM = 472,
    PROCEDURE_SYM = 473,
    PURGE = 474,
    RAISE_ORACLE_SYM = 475,
    RANGE_SYM = 476,
    RANK_SYM = 477,
    READS_SYM = 478,
    READ_SYM = 479,
    READ_WRITE_SYM = 480,
    REAL = 481,
    RECURSIVE_SYM = 482,
    REFERENCES = 483,
    REF_SYSTEM_ID_SYM = 484,
    REGEXP = 485,
    RELEASE_SYM = 486,
    RENAME = 487,
    REPEAT_SYM = 488,
    REPLACE = 489,
    REQUIRE_SYM = 490,
    RESIGNAL_SYM = 491,
    RESTRICT = 492,
    RETURNING_SYM = 493,
    RETURN_MARIADB_SYM = 494,
    RETURN_ORACLE_SYM = 495,
    REVOKE = 496,
    RIGHT = 497,
    ROW_NUMBER_SYM = 498,
    ROWS_SYM = 499,
    ROWTYPE_ORACLE_SYM = 500,
    SECOND_MICROSECOND_SYM = 501,
    SELECT_SYM = 502,
    SENSITIVE_SYM = 503,
    SEPARATOR_SYM = 504,
    SERVER_OPTIONS = 505,
    SET = 506,
    SHOW = 507,
    SIGNAL_SYM = 508,
    SMALLINT = 509,
    SPATIAL_SYM = 510,
    SPECIFIC_SYM = 511,
    SQL_BIG_RESULT = 512,
    SQLEXCEPTION_SYM = 513,
    SQL_SMALL_RESULT = 514,
    SQLSTATE_SYM = 515,
    SQL_SYM = 516,
    SQLWARNING_SYM = 517,
    SSL_SYM = 518,
    STARTING = 519,
    STATS_AUTO_RECALC_SYM = 520,
    STATS_PERSISTENT_SYM = 521,
    STATS_SAMPLE_PAGES_SYM = 522,
    STDDEV_SAMP_SYM = 523,
    STD_SYM = 524,
    STRAIGHT_JOIN = 525,
    SUBSTRING = 526,
    SUM_SYM = 527,
    SYSDATE = 528,
    TABLE_REF_PRIORITY = 529,
    TABLE_SYM = 530,
    TERMINATED = 531,
    THEN_SYM = 532,
    TINYBLOB = 533,
    TINYINT = 534,
    TINYTEXT = 535,
    TO_SYM = 536,
    TRAILING = 537,
    TRIGGER_SYM = 538,
    TRIM = 539,
    TRUE_SYM = 540,
    UNDO_SYM = 541,
    UNION_SYM = 542,
    UNIQUE_SYM = 543,
    UNLOCK_SYM = 544,
    UNSIGNED = 545,
    UPDATE_SYM = 546,
    USAGE = 547,
    USE_SYM = 548,
    USING = 549,
    UTC_DATE_SYM = 550,
    UTC_TIMESTAMP_SYM = 551,
    UTC_TIME_SYM = 552,
    VALUES_IN_SYM = 553,
    VALUES_LESS_SYM = 554,
    VALUES = 555,
    VARBINARY = 556,
    VARCHAR = 557,
    VARIANCE_SYM = 558,
    VAR_SAMP_SYM = 559,
    VARYING = 560,
    WHEN_SYM = 561,
    WHERE = 562,
    WHILE_SYM = 563,
    WITH = 564,
    XOR = 565,
    YEAR_MONTH_SYM = 566,
    ZEROFILL = 567,
    BODY_MARIADB_SYM = 568,
    ELSEIF_ORACLE_SYM = 569,
    ELSIF_MARIADB_SYM = 570,
    EXCEPTION_ORACLE_SYM = 571,
    GOTO_MARIADB_SYM = 572,
    OTHERS_MARIADB_SYM = 573,
    PACKAGE_MARIADB_SYM = 574,
    RAISE_MARIADB_SYM = 575,
    ROWTYPE_MARIADB_SYM = 576,
    ACCOUNT_SYM = 577,
    ACTION = 578,
    ADMIN_SYM = 579,
    ADDDATE_SYM = 580,
    AFTER_SYM = 581,
    AGAINST = 582,
    AGGREGATE_SYM = 583,
    ALGORITHM_SYM = 584,
    ALWAYS_SYM = 585,
    ANY_SYM = 586,
    ASCII_SYM = 587,
    AT_SYM = 588,
    ATOMIC_SYM = 589,
    AUTHORS_SYM = 590,
    AUTOEXTEND_SIZE_SYM = 591,
    AUTO_INC = 592,
    AUTO_SYM = 593,
    AVG_ROW_LENGTH = 594,
    AVG_SYM = 595,
    BACKUP_SYM = 596,
    BEGIN_MARIADB_SYM = 597,
    BEGIN_ORACLE_SYM = 598,
    BINLOG_SYM = 599,
    BIT_SYM = 600,
    BLOCK_SYM = 601,
    BOOL_SYM = 602,
    BOOLEAN_SYM = 603,
    BTREE_SYM = 604,
    BYTE_SYM = 605,
    CACHE_SYM = 606,
    CASCADED = 607,
    CATALOG_NAME_SYM = 608,
    CHAIN_SYM = 609,
    CHANGED = 610,
    CHARSET = 611,
    CHECKPOINT_SYM = 612,
    CHECKSUM_SYM = 613,
    CIPHER_SYM = 614,
    CLASS_ORIGIN_SYM = 615,
    CLIENT_SYM = 616,
    CLOB_MARIADB_SYM = 617,
    CLOB_ORACLE_SYM = 618,
    CLOSE_SYM = 619,
    COALESCE = 620,
    CODE_SYM = 621,
    COLLATION_SYM = 622,
    COLUMNS = 623,
    COLUMN_ADD_SYM = 624,
    COLUMN_CHECK_SYM = 625,
    COLUMN_CREATE_SYM = 626,
    COLUMN_DELETE_SYM = 627,
    COLUMN_GET_SYM = 628,
    COLUMN_SYM = 629,
    COLUMN_NAME_SYM = 630,
    COMMENT_SYM = 631,
    COMMITTED_SYM = 632,
    COMMIT_SYM = 633,
    COMPACT_SYM = 634,
    COMPLETION_SYM = 635,
    COMPRESSED_SYM = 636,
    CONCURRENT = 637,
    CONNECTION_SYM = 638,
    CONSISTENT_SYM = 639,
    CONSTRAINT_CATALOG_SYM = 640,
    CONSTRAINT_NAME_SYM = 641,
    CONSTRAINT_SCHEMA_SYM = 642,
    CONTAINS_SYM = 643,
    CONTEXT_SYM = 644,
    CONTRIBUTORS_SYM = 645,
    CPU_SYM = 646,
    CUBE_SYM = 647,
    CURRENT_SYM = 648,
    CURRENT_POS_SYM = 649,
    CURSOR_NAME_SYM = 650,
    CYCLE_SYM = 651,
    DATAFILE_SYM = 652,
    DATA_SYM = 653,
    DATETIME = 654,
    DATE_FORMAT_SYM = 655,
    DATE_SYM = 656,
    DAY_SYM = 657,
    DEALLOCATE_SYM = 658,
    DECODE_MARIADB_SYM = 659,
    DECODE_ORACLE_SYM = 660,
    DEFINER_SYM = 661,
    DELAYED_SYM = 662,
    DELAY_KEY_WRITE_SYM = 663,
    DES_KEY_FILE = 664,
    DIAGNOSTICS_SYM = 665,
    DIRECTORY_SYM = 666,
    DISABLE_SYM = 667,
    DISCARD = 668,
    DISK_SYM = 669,
    DO_SYM = 670,
    DUMPFILE = 671,
    DUPLICATE_SYM = 672,
    DYNAMIC_SYM = 673,
    ENABLE_SYM = 674,
    END = 675,
    ENDS_SYM = 676,
    ENGINES_SYM = 677,
    ENGINE_SYM = 678,
    ENUM = 679,
    ERROR_SYM = 680,
    ERRORS = 681,
    ESCAPE_SYM = 682,
    EVENTS_SYM = 683,
    EVENT_SYM = 684,
    EVERY_SYM = 685,
    EXCHANGE_SYM = 686,
    EXAMINED_SYM = 687,
    EXCLUDE_SYM = 688,
    EXECUTE_SYM = 689,
    EXCEPTION_MARIADB_SYM = 690,
    EXIT_MARIADB_SYM = 691,
    EXIT_ORACLE_SYM = 692,
    EXPANSION_SYM = 693,
    EXPIRE_SYM = 694,
    EXPORT_SYM = 695,
    EXTENDED_SYM = 696,
    EXTENT_SIZE_SYM = 697,
    FAST_SYM = 698,
    FAULTS_SYM = 699,
    FEDERATED_SYM = 700,
    FILE_SYM = 701,
    FIRST_SYM = 702,
    FIXED_SYM = 703,
    FLUSH_SYM = 704,
    FOLLOWS_SYM = 705,
    FOLLOWING_SYM = 706,
    FORCE_SYM = 707,
    FORMAT_SYM = 708,
    FOUND_SYM = 709,
    FULL = 710,
    FUNCTION_SYM = 711,
    GENERAL = 712,
    GENERATED_SYM = 713,
    GET_FORMAT = 714,
    GET_SYM = 715,
    GLOBAL_SYM = 716,
    GRANTS = 717,
    HANDLER_SYM = 718,
    HARD_SYM = 719,
    HASH_SYM = 720,
    HELP_SYM = 721,
    HIGH_PRIORITY = 722,
    HISTORY_SYM = 723,
    HOST_SYM = 724,
    HOSTS_SYM = 725,
    HOUR_SYM = 726,
    ID_SYM = 727,
    IDENTIFIED_SYM = 728,
    IGNORE_SERVER_IDS_SYM = 729,
    IMMEDIATE_SYM = 730,
    IMPORT = 731,
    INCREMENT_SYM = 732,
    INDEXES = 733,
    INITIAL_SIZE_SYM = 734,
    INSERT_METHOD = 735,
    INSTALL_SYM = 736,
    INVOKER_SYM = 737,
    IO_SYM = 738,
    IPC_SYM = 739,
    ISOLATION = 740,
    ISOPEN_SYM = 741,
    ISSUER_SYM = 742,
    INVISIBLE_SYM = 743,
    JSON_SYM = 744,
    KEY_BLOCK_SIZE = 745,
    LANGUAGE_SYM = 746,
    LAST_SYM = 747,
    LAST_VALUE = 748,
    LASTVAL_SYM = 749,
    LEAVES = 750,
    LESS_SYM = 751,
    LEVEL_SYM = 752,
    LIST_SYM = 753,
    LOCAL_SYM = 754,
    LOCKS_SYM = 755,
    LOGFILE_SYM = 756,
    LOGS_SYM = 757,
    MASTER_CONNECT_RETRY_SYM = 758,
    MASTER_DELAY_SYM = 759,
    MASTER_GTID_POS_SYM = 760,
    MASTER_HOST_SYM = 761,
    MASTER_LOG_FILE_SYM = 762,
    MASTER_LOG_POS_SYM = 763,
    MASTER_PASSWORD_SYM = 764,
    MASTER_PORT_SYM = 765,
    MASTER_SERVER_ID_SYM = 766,
    MASTER_SSL_CAPATH_SYM = 767,
    MASTER_SSL_CA_SYM = 768,
    MASTER_SSL_CERT_SYM = 769,
    MASTER_SSL_CIPHER_SYM = 770,
    MASTER_SSL_CRL_SYM = 771,
    MASTER_SSL_CRLPATH_SYM = 772,
    MASTER_SSL_KEY_SYM = 773,
    MASTER_SSL_SYM = 774,
    MASTER_SYM = 775,
    MASTER_USER_SYM = 776,
    MASTER_USE_GTID_SYM = 777,
    MASTER_HEARTBEAT_PERIOD_SYM = 778,
    MAX_CONNECTIONS_PER_HOUR = 779,
    MAX_QUERIES_PER_HOUR = 780,
    MAX_ROWS = 781,
    MAX_SIZE_SYM = 782,
    MAX_UPDATES_PER_HOUR = 783,
    MAX_STATEMENT_TIME_SYM = 784,
    MAX_USER_CONNECTIONS_SYM = 785,
    MEDIUM_SYM = 786,
    MEMORY_SYM = 787,
    MERGE_SYM = 788,
    MESSAGE_TEXT_SYM = 789,
    MICROSECOND_SYM = 790,
    MIGRATE_SYM = 791,
    MINUTE_SYM = 792,
    MINVALUE_SYM = 793,
    MIN_ROWS = 794,
    MODE_SYM = 795,
    MODIFY_SYM = 796,
    MONITOR_SYM = 797,
    MONTH_SYM = 798,
    MUTEX_SYM = 799,
    MYSQL_SYM = 800,
    MYSQL_ERRNO_SYM = 801,
    NAMES_SYM = 802,
    NAME_SYM = 803,
    NATIONAL_SYM = 804,
    NCHAR_SYM = 805,
    NEVER_SYM = 806,
    NEW_SYM = 807,
    NEXT_SYM = 808,
    NEXTVAL_SYM = 809,
    NOCACHE_SYM = 810,
    NOCYCLE_SYM = 811,
    NODEGROUP_SYM = 812,
    NONE_SYM = 813,
    NOTFOUND_SYM = 814,
    NO_SYM = 815,
    NOMAXVALUE_SYM = 816,
    NOMINVALUE_SYM = 817,
    NO_WAIT_SYM = 818,
    NOWAIT_SYM = 819,
    NUMBER_MARIADB_SYM = 820,
    NUMBER_ORACLE_SYM = 821,
    NVARCHAR_SYM = 822,
    OF_SYM = 823,
    OFFSET_SYM = 824,
    OLD_PASSWORD_SYM = 825,
    ONE_SYM = 826,
    ONLY_SYM = 827,
    ONLINE_SYM = 828,
    OPEN_SYM = 829,
    OPTIONS_SYM = 830,
    OPTION = 831,
    OVERLAPS_SYM = 832,
    OWNER_SYM = 833,
    PACK_KEYS_SYM = 834,
    PAGE_SYM = 835,
    PARSER_SYM = 836,
    PARTIAL = 837,
    PARTITIONS_SYM = 838,
    PARTITIONING_SYM = 839,
    PASSWORD_SYM = 840,
    PERIOD_SYM = 841,
    PERSISTENT_SYM = 842,
    PHASE_SYM = 843,
    PLUGINS_SYM = 844,
    PLUGIN_SYM = 845,
    PORT_SYM = 846,
    PRECEDES_SYM = 847,
    PRECEDING_SYM = 848,
    PREPARE_SYM = 849,
    PRESERVE_SYM = 850,
    PREV_SYM = 851,
    PREVIOUS_SYM = 852,
    PRIVILEGES = 853,
    PROCESS = 854,
    PROCESSLIST_SYM = 855,
    PROFILE_SYM = 856,
    PROFILES_SYM = 857,
    PROXY_SYM = 858,
    QUARTER_SYM = 859,
    QUERY_SYM = 860,
    QUICK = 861,
    RAW_MARIADB_SYM = 862,
    RAW_ORACLE_SYM = 863,
    READ_ONLY_SYM = 864,
    REBUILD_SYM = 865,
    RECOVER_SYM = 866,
    REDOFILE_SYM = 867,
    REDO_BUFFER_SIZE_SYM = 868,
    REDUNDANT_SYM = 869,
    RELAY = 870,
    RELAYLOG_SYM = 871,
    RELAY_LOG_FILE_SYM = 872,
    RELAY_LOG_POS_SYM = 873,
    RELAY_THREAD = 874,
    RELOAD = 875,
    REMOVE_SYM = 876,
    REORGANIZE_SYM = 877,
    REPAIR = 878,
    REPEATABLE_SYM = 879,
    REPLAY_SYM = 880,
    REPLICATION = 881,
    RESET_SYM = 882,
    RESTART_SYM = 883,
    RESOURCES = 884,
    RESTORE_SYM = 885,
    RESUME_SYM = 886,
    RETURNED_SQLSTATE_SYM = 887,
    RETURNS_SYM = 888,
    REUSE_SYM = 889,
    REVERSE_SYM = 890,
    ROLE_SYM = 891,
    ROLLBACK_SYM = 892,
    ROLLUP_SYM = 893,
    ROUTINE_SYM = 894,
    ROWCOUNT_SYM = 895,
    ROW_SYM = 896,
    ROW_COUNT_SYM = 897,
    ROW_FORMAT_SYM = 898,
    RTREE_SYM = 899,
    SAVEPOINT_SYM = 900,
    SCHEDULE_SYM = 901,
    SCHEMA_NAME_SYM = 902,
    SECOND_SYM = 903,
    SECURITY_SYM = 904,
    SEQUENCE_SYM = 905,
    SERIALIZABLE_SYM = 906,
    SERIAL_SYM = 907,
    SESSION_SYM = 908,
    SERVER_SYM = 909,
    SETVAL_SYM = 910,
    SHARE_SYM = 911,
    SHUTDOWN = 912,
    SIGNED_SYM = 913,
    SIMPLE_SYM = 914,
    SLAVE = 915,
    SLAVES = 916,
    SLAVE_POS_SYM = 917,
    SLOW = 918,
    SNAPSHOT_SYM = 919,
    SOCKET_SYM = 920,
    SOFT_SYM = 921,
    SONAME_SYM = 922,
    SOUNDS_SYM = 923,
    SOURCE_SYM = 924,
    SQL_BUFFER_RESULT = 925,
    SQL_CACHE_SYM = 926,
    SQL_CALC_FOUND_ROWS = 927,
    SQL_NO_CACHE_SYM = 928,
    SQL_THREAD = 929,
    STAGE_SYM = 930,
    STARTS_SYM = 931,
    START_SYM = 932,
    STATEMENT_SYM = 933,
    STATUS_SYM = 934,
    STOP_SYM = 935,
    STORAGE_SYM = 936,
    STORED_SYM = 937,
    STRING_SYM = 938,
    SUBCLASS_ORIGIN_SYM = 939,
    SUBDATE_SYM = 940,
    SUBJECT_SYM = 941,
    SUBPARTITIONS_SYM = 942,
    SUBPARTITION_SYM = 943,
    SUPER_SYM = 944,
    SUSPEND_SYM = 945,
    SWAPS_SYM = 946,
    SWITCHES_SYM = 947,
    SYSTEM = 948,
    SYSTEM_TIME_SYM = 949,
    TABLES = 950,
    TABLESPACE = 951,
    TABLE_CHECKSUM_SYM = 952,
    TABLE_NAME_SYM = 953,
    TEMPORARY = 954,
    TEMPTABLE_SYM = 955,
    TEXT_SYM = 956,
    THAN_SYM = 957,
    TIES_SYM = 958,
    TIMESTAMP = 959,
    TIMESTAMP_ADD = 960,
    TIMESTAMP_DIFF = 961,
    TIME_SYM = 962,
    TRANSACTION_SYM = 963,
    TRANSACTIONAL_SYM = 964,
    THREADS_SYM = 965,
    TRIGGERS_SYM = 966,
    TRIM_ORACLE = 967,
    TRUNCATE_SYM = 968,
    TYPES_SYM = 969,
    TYPE_SYM = 970,
    UDF_RETURNS_SYM = 971,
    UNBOUNDED_SYM = 972,
    UNCOMMITTED_SYM = 973,
    UNDEFINED_SYM = 974,
    UNDOFILE_SYM = 975,
    UNDO_BUFFER_SIZE_SYM = 976,
    UNICODE_SYM = 977,
    UNINSTALL_SYM = 978,
    UNKNOWN_SYM = 979,
    UNTIL_SYM = 980,
    UPGRADE_SYM = 981,
    USER_SYM = 982,
    USE_FRM = 983,
    VALUE_SYM = 984,
    VARCHAR2_MARIADB_SYM = 985,
    VARCHAR2_ORACLE_SYM = 986,
    VARIABLES = 987,
    VERSIONING_SYM = 988,
    VIA_SYM = 989,
    VIEW_SYM = 990,
    VISIBLE_SYM = 991,
    VIRTUAL_SYM = 992,
    WAIT_SYM = 993,
    WARNINGS = 994,
    WEEK_SYM = 995,
    WEIGHT_STRING_SYM = 996,
    WINDOW_SYM = 997,
    WITHIN = 998,
    WITHOUT = 999,
    WORK_SYM = 1000,
    WRAPPER_SYM = 1001,
    WRITE_SYM = 1002,
    X509_SYM = 1003,
    XA_SYM = 1004,
    XML_SYM = 1005,
    YEAR_SYM = 1006,
    CONDITIONLESS_JOIN = 1007,
    ON_SYM = 1008,
    PREC_BELOW_NOT = 1009,
    SUBQUERY_AS_EXPR = 1010,
    PREC_BELOW_IDENTIFIER_OPT_SPECIAL_CASE = 1011,
    USER = 1012,
    PREC_BELOW_CONTRACTION_TOKEN2 = 1013,
    EMPTY_FROM_CLAUSE = 1014
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 203 "/home/buildbot/git/sql/sql_yacc.yy"


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

#line 947 "/home/buildbot/git/mkdist/sql/yy_oracle.hh"

};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int ORAparse (THD *thd);

#endif /* !YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_YY_ORACLE_HH_INCLUDED  */
