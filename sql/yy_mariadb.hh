/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_YY_MARIADB_HH_INCLUDED
# define YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_YY_MARIADB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int MYSQLdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ABORT_SYM = 258,               /* ABORT_SYM  */
    IMPOSSIBLE_ACTION = 259,       /* IMPOSSIBLE_ACTION  */
    FORCE_LOOKAHEAD = 260,         /* FORCE_LOOKAHEAD  */
    END_OF_INPUT = 261,            /* END_OF_INPUT  */
    COLON_ORACLE_SYM = 262,        /* COLON_ORACLE_SYM  */
    PARAM_MARKER = 263,            /* PARAM_MARKER  */
    FOR_SYSTEM_TIME_SYM = 264,     /* FOR_SYSTEM_TIME_SYM  */
    LEFT_PAREN_ALT = 265,          /* LEFT_PAREN_ALT  */
    LEFT_PAREN_WITH = 266,         /* LEFT_PAREN_WITH  */
    LEFT_PAREN_LIKE = 267,         /* LEFT_PAREN_LIKE  */
    ORACLE_CONCAT_SYM = 268,       /* ORACLE_CONCAT_SYM  */
    PERCENT_ORACLE_SYM = 269,      /* PERCENT_ORACLE_SYM  */
    WITH_CUBE_SYM = 270,           /* WITH_CUBE_SYM  */
    WITH_ROLLUP_SYM = 271,         /* WITH_ROLLUP_SYM  */
    WITH_SYSTEM_SYM = 272,         /* WITH_SYSTEM_SYM  */
    IDENT = 273,                   /* IDENT  */
    IDENT_QUOTED = 274,            /* IDENT_QUOTED  */
    LEX_HOSTNAME = 275,            /* LEX_HOSTNAME  */
    UNDERSCORE_CHARSET = 276,      /* UNDERSCORE_CHARSET  */
    BIN_NUM = 277,                 /* BIN_NUM  */
    DECIMAL_NUM = 278,             /* DECIMAL_NUM  */
    FLOAT_NUM = 279,               /* FLOAT_NUM  */
    HEX_NUM = 280,                 /* HEX_NUM  */
    HEX_STRING = 281,              /* HEX_STRING  */
    LONG_NUM = 282,                /* LONG_NUM  */
    NCHAR_STRING = 283,            /* NCHAR_STRING  */
    NUM = 284,                     /* NUM  */
    TEXT_STRING = 285,             /* TEXT_STRING  */
    ULONGLONG_NUM = 286,           /* ULONGLONG_NUM  */
    AND_AND_SYM = 287,             /* AND_AND_SYM  */
    DOT_DOT_SYM = 288,             /* DOT_DOT_SYM  */
    EQUAL_SYM = 289,               /* EQUAL_SYM  */
    GE = 290,                      /* GE  */
    LE = 291,                      /* LE  */
    MYSQL_CONCAT_SYM = 292,        /* MYSQL_CONCAT_SYM  */
    NE = 293,                      /* NE  */
    NOT2_SYM = 294,                /* NOT2_SYM  */
    OR2_SYM = 295,                 /* OR2_SYM  */
    SET_VAR = 296,                 /* SET_VAR  */
    SHIFT_LEFT = 297,              /* SHIFT_LEFT  */
    SHIFT_RIGHT = 298,             /* SHIFT_RIGHT  */
    ACCESSIBLE_SYM = 299,          /* ACCESSIBLE_SYM  */
    ADD = 300,                     /* ADD  */
    ALL = 301,                     /* ALL  */
    ALTER = 302,                   /* ALTER  */
    ANALYZE_SYM = 303,             /* ANALYZE_SYM  */
    AND_SYM = 304,                 /* AND_SYM  */
    ASC = 305,                     /* ASC  */
    ASENSITIVE_SYM = 306,          /* ASENSITIVE_SYM  */
    AS = 307,                      /* AS  */
    BEFORE_SYM = 308,              /* BEFORE_SYM  */
    BETWEEN_SYM = 309,             /* BETWEEN_SYM  */
    BIGINT = 310,                  /* BIGINT  */
    BINARY = 311,                  /* BINARY  */
    BIT_AND = 312,                 /* BIT_AND  */
    BIT_OR = 313,                  /* BIT_OR  */
    BIT_XOR = 314,                 /* BIT_XOR  */
    BLOB_MARIADB_SYM = 315,        /* BLOB_MARIADB_SYM  */
    BLOB_ORACLE_SYM = 316,         /* BLOB_ORACLE_SYM  */
    BODY_ORACLE_SYM = 317,         /* BODY_ORACLE_SYM  */
    BOTH = 318,                    /* BOTH  */
    BY = 319,                      /* BY  */
    CALL_SYM = 320,                /* CALL_SYM  */
    CASCADE = 321,                 /* CASCADE  */
    CASE_SYM = 322,                /* CASE_SYM  */
    CAST_SYM = 323,                /* CAST_SYM  */
    CHANGE = 324,                  /* CHANGE  */
    CHAR_SYM = 325,                /* CHAR_SYM  */
    CHECK_SYM = 326,               /* CHECK_SYM  */
    COLLATE_SYM = 327,             /* COLLATE_SYM  */
    CONDITION_SYM = 328,           /* CONDITION_SYM  */
    CONSTRAINT = 329,              /* CONSTRAINT  */
    CONTINUE_MARIADB_SYM = 330,    /* CONTINUE_MARIADB_SYM  */
    CONTINUE_ORACLE_SYM = 331,     /* CONTINUE_ORACLE_SYM  */
    CONVERT_SYM = 332,             /* CONVERT_SYM  */
    COUNT_SYM = 333,               /* COUNT_SYM  */
    CREATE = 334,                  /* CREATE  */
    CROSS = 335,                   /* CROSS  */
    CUME_DIST_SYM = 336,           /* CUME_DIST_SYM  */
    CURDATE = 337,                 /* CURDATE  */
    CURRENT_ROLE = 338,            /* CURRENT_ROLE  */
    CURRENT_USER = 339,            /* CURRENT_USER  */
    CURSOR_SYM = 340,              /* CURSOR_SYM  */
    CURTIME = 341,                 /* CURTIME  */
    DATABASE = 342,                /* DATABASE  */
    DATABASES = 343,               /* DATABASES  */
    DATE_ADD_INTERVAL = 344,       /* DATE_ADD_INTERVAL  */
    DATE_SUB_INTERVAL = 345,       /* DATE_SUB_INTERVAL  */
    DAY_HOUR_SYM = 346,            /* DAY_HOUR_SYM  */
    DAY_MICROSECOND_SYM = 347,     /* DAY_MICROSECOND_SYM  */
    DAY_MINUTE_SYM = 348,          /* DAY_MINUTE_SYM  */
    DAY_SECOND_SYM = 349,          /* DAY_SECOND_SYM  */
    DECIMAL_SYM = 350,             /* DECIMAL_SYM  */
    DECLARE_MARIADB_SYM = 351,     /* DECLARE_MARIADB_SYM  */
    DECLARE_ORACLE_SYM = 352,      /* DECLARE_ORACLE_SYM  */
    DEFAULT = 353,                 /* DEFAULT  */
    DELETE_DOMAIN_ID_SYM = 354,    /* DELETE_DOMAIN_ID_SYM  */
    DELETE_SYM = 355,              /* DELETE_SYM  */
    DENSE_RANK_SYM = 356,          /* DENSE_RANK_SYM  */
    DESCRIBE = 357,                /* DESCRIBE  */
    DESC = 358,                    /* DESC  */
    DETERMINISTIC_SYM = 359,       /* DETERMINISTIC_SYM  */
    DISTINCT = 360,                /* DISTINCT  */
    DIV_SYM = 361,                 /* DIV_SYM  */
    DO_DOMAIN_IDS_SYM = 362,       /* DO_DOMAIN_IDS_SYM  */
    DOUBLE_SYM = 363,              /* DOUBLE_SYM  */
    DROP = 364,                    /* DROP  */
    DUAL_SYM = 365,                /* DUAL_SYM  */
    EACH_SYM = 366,                /* EACH_SYM  */
    ELSEIF_MARIADB_SYM = 367,      /* ELSEIF_MARIADB_SYM  */
    ELSE = 368,                    /* ELSE  */
    ELSIF_ORACLE_SYM = 369,        /* ELSIF_ORACLE_SYM  */
    EMPTY_SYM = 370,               /* EMPTY_SYM  */
    ENCLOSED = 371,                /* ENCLOSED  */
    ESCAPED = 372,                 /* ESCAPED  */
    EXCEPT_SYM = 373,              /* EXCEPT_SYM  */
    EXISTS = 374,                  /* EXISTS  */
    EXTRACT_SYM = 375,             /* EXTRACT_SYM  */
    FALSE_SYM = 376,               /* FALSE_SYM  */
    FETCH_SYM = 377,               /* FETCH_SYM  */
    FIRST_VALUE_SYM = 378,         /* FIRST_VALUE_SYM  */
    FLOAT_SYM = 379,               /* FLOAT_SYM  */
    FOREIGN = 380,                 /* FOREIGN  */
    FOR_SYM = 381,                 /* FOR_SYM  */
    FROM = 382,                    /* FROM  */
    FULLTEXT_SYM = 383,            /* FULLTEXT_SYM  */
    GOTO_ORACLE_SYM = 384,         /* GOTO_ORACLE_SYM  */
    GRANT = 385,                   /* GRANT  */
    GROUP_CONCAT_SYM = 386,        /* GROUP_CONCAT_SYM  */
    JSON_ARRAYAGG_SYM = 387,       /* JSON_ARRAYAGG_SYM  */
    JSON_OBJECTAGG_SYM = 388,      /* JSON_OBJECTAGG_SYM  */
    JSON_TABLE_SYM = 389,          /* JSON_TABLE_SYM  */
    GROUP_SYM = 390,               /* GROUP_SYM  */
    HAVING = 391,                  /* HAVING  */
    HOUR_MICROSECOND_SYM = 392,    /* HOUR_MICROSECOND_SYM  */
    HOUR_MINUTE_SYM = 393,         /* HOUR_MINUTE_SYM  */
    HOUR_SECOND_SYM = 394,         /* HOUR_SECOND_SYM  */
    IF_SYM = 395,                  /* IF_SYM  */
    IGNORE_DOMAIN_IDS_SYM = 396,   /* IGNORE_DOMAIN_IDS_SYM  */
    IGNORE_SYM = 397,              /* IGNORE_SYM  */
    IGNORED_SYM = 398,             /* IGNORED_SYM  */
    INDEX_SYM = 399,               /* INDEX_SYM  */
    INFILE = 400,                  /* INFILE  */
    INNER_SYM = 401,               /* INNER_SYM  */
    INOUT_SYM = 402,               /* INOUT_SYM  */
    INSENSITIVE_SYM = 403,         /* INSENSITIVE_SYM  */
    INSERT = 404,                  /* INSERT  */
    IN_SYM = 405,                  /* IN_SYM  */
    INTERSECT_SYM = 406,           /* INTERSECT_SYM  */
    INTERVAL_SYM = 407,            /* INTERVAL_SYM  */
    INTO = 408,                    /* INTO  */
    INT_SYM = 409,                 /* INT_SYM  */
    IS = 410,                      /* IS  */
    ITERATE_SYM = 411,             /* ITERATE_SYM  */
    JOIN_SYM = 412,                /* JOIN_SYM  */
    KEYS = 413,                    /* KEYS  */
    KEY_SYM = 414,                 /* KEY_SYM  */
    KILL_SYM = 415,                /* KILL_SYM  */
    LAG_SYM = 416,                 /* LAG_SYM  */
    LEADING = 417,                 /* LEADING  */
    LEAD_SYM = 418,                /* LEAD_SYM  */
    LEAVE_SYM = 419,               /* LEAVE_SYM  */
    LEFT = 420,                    /* LEFT  */
    LIKE = 421,                    /* LIKE  */
    LIMIT = 422,                   /* LIMIT  */
    LINEAR_SYM = 423,              /* LINEAR_SYM  */
    LINES = 424,                   /* LINES  */
    LOAD = 425,                    /* LOAD  */
    LOCATOR_SYM = 426,             /* LOCATOR_SYM  */
    LOCK_SYM = 427,                /* LOCK_SYM  */
    LONGBLOB = 428,                /* LONGBLOB  */
    LONG_SYM = 429,                /* LONG_SYM  */
    LONGTEXT = 430,                /* LONGTEXT  */
    LOOP_SYM = 431,                /* LOOP_SYM  */
    LOW_PRIORITY = 432,            /* LOW_PRIORITY  */
    MASTER_SSL_VERIFY_SERVER_CERT_SYM = 433, /* MASTER_SSL_VERIFY_SERVER_CERT_SYM  */
    MATCH = 434,                   /* MATCH  */
    MAX_SYM = 435,                 /* MAX_SYM  */
    MAXVALUE_SYM = 436,            /* MAXVALUE_SYM  */
    MEDIAN_SYM = 437,              /* MEDIAN_SYM  */
    MEDIUMBLOB = 438,              /* MEDIUMBLOB  */
    MEDIUMINT = 439,               /* MEDIUMINT  */
    MEDIUMTEXT = 440,              /* MEDIUMTEXT  */
    MIN_SYM = 441,                 /* MIN_SYM  */
    MINUS_ORACLE_SYM = 442,        /* MINUS_ORACLE_SYM  */
    MINUTE_MICROSECOND_SYM = 443,  /* MINUTE_MICROSECOND_SYM  */
    MINUTE_SECOND_SYM = 444,       /* MINUTE_SECOND_SYM  */
    MODIFIES_SYM = 445,            /* MODIFIES_SYM  */
    MOD_SYM = 446,                 /* MOD_SYM  */
    NATURAL = 447,                 /* NATURAL  */
    NEG = 448,                     /* NEG  */
    NESTED_SYM = 449,              /* NESTED_SYM  */
    NOT_SYM = 450,                 /* NOT_SYM  */
    NO_WRITE_TO_BINLOG = 451,      /* NO_WRITE_TO_BINLOG  */
    NOW_SYM = 452,                 /* NOW_SYM  */
    NTH_VALUE_SYM = 453,           /* NTH_VALUE_SYM  */
    NTILE_SYM = 454,               /* NTILE_SYM  */
    NULL_SYM = 455,                /* NULL_SYM  */
    NUMERIC_SYM = 456,             /* NUMERIC_SYM  */
    ON = 457,                      /* ON  */
    OPTIMIZE = 458,                /* OPTIMIZE  */
    OPTIONALLY = 459,              /* OPTIONALLY  */
    ORDER_SYM = 460,               /* ORDER_SYM  */
    ORDINALITY_SYM = 461,          /* ORDINALITY_SYM  */
    OR_SYM = 462,                  /* OR_SYM  */
    OTHERS_ORACLE_SYM = 463,       /* OTHERS_ORACLE_SYM  */
    OUTER = 464,                   /* OUTER  */
    OUTFILE = 465,                 /* OUTFILE  */
    OUT_SYM = 466,                 /* OUT_SYM  */
    OVER_SYM = 467,                /* OVER_SYM  */
    PACKAGE_ORACLE_SYM = 468,      /* PACKAGE_ORACLE_SYM  */
    PAGE_CHECKSUM_SYM = 469,       /* PAGE_CHECKSUM_SYM  */
    PARSE_VCOL_EXPR_SYM = 470,     /* PARSE_VCOL_EXPR_SYM  */
    PARTITION_SYM = 471,           /* PARTITION_SYM  */
    PATH_SYM = 472,                /* PATH_SYM  */
    PERCENTILE_CONT_SYM = 473,     /* PERCENTILE_CONT_SYM  */
    PERCENTILE_DISC_SYM = 474,     /* PERCENTILE_DISC_SYM  */
    PERCENT_RANK_SYM = 475,        /* PERCENT_RANK_SYM  */
    PORTION_SYM = 476,             /* PORTION_SYM  */
    POSITION_SYM = 477,            /* POSITION_SYM  */
    PRECISION = 478,               /* PRECISION  */
    PRIMARY_SYM = 479,             /* PRIMARY_SYM  */
    PROCEDURE_SYM = 480,           /* PROCEDURE_SYM  */
    PURGE = 481,                   /* PURGE  */
    RAISE_ORACLE_SYM = 482,        /* RAISE_ORACLE_SYM  */
    RANGE_SYM = 483,               /* RANGE_SYM  */
    RANK_SYM = 484,                /* RANK_SYM  */
    READS_SYM = 485,               /* READS_SYM  */
    READ_SYM = 486,                /* READ_SYM  */
    READ_WRITE_SYM = 487,          /* READ_WRITE_SYM  */
    REAL = 488,                    /* REAL  */
    RECURSIVE_SYM = 489,           /* RECURSIVE_SYM  */
    REFERENCES = 490,              /* REFERENCES  */
    REF_SYSTEM_ID_SYM = 491,       /* REF_SYSTEM_ID_SYM  */
    REGEXP = 492,                  /* REGEXP  */
    RELEASE_SYM = 493,             /* RELEASE_SYM  */
    RENAME = 494,                  /* RENAME  */
    REPEAT_SYM = 495,              /* REPEAT_SYM  */
    REQUIRE_SYM = 496,             /* REQUIRE_SYM  */
    RESIGNAL_SYM = 497,            /* RESIGNAL_SYM  */
    RESTRICT = 498,                /* RESTRICT  */
    RETURNING_SYM = 499,           /* RETURNING_SYM  */
    RETURN_MARIADB_SYM = 500,      /* RETURN_MARIADB_SYM  */
    RETURN_ORACLE_SYM = 501,       /* RETURN_ORACLE_SYM  */
    REVOKE = 502,                  /* REVOKE  */
    RIGHT = 503,                   /* RIGHT  */
    ROW_NUMBER_SYM = 504,          /* ROW_NUMBER_SYM  */
    ROWS_SYM = 505,                /* ROWS_SYM  */
    ROWTYPE_ORACLE_SYM = 506,      /* ROWTYPE_ORACLE_SYM  */
    SECOND_MICROSECOND_SYM = 507,  /* SECOND_MICROSECOND_SYM  */
    SELECT_SYM = 508,              /* SELECT_SYM  */
    SENSITIVE_SYM = 509,           /* SENSITIVE_SYM  */
    SEPARATOR_SYM = 510,           /* SEPARATOR_SYM  */
    SERVER_OPTIONS = 511,          /* SERVER_OPTIONS  */
    SET = 512,                     /* SET  */
    SHOW = 513,                    /* SHOW  */
    SIGNAL_SYM = 514,              /* SIGNAL_SYM  */
    SMALLINT = 515,                /* SMALLINT  */
    SPATIAL_SYM = 516,             /* SPATIAL_SYM  */
    SPECIFIC_SYM = 517,            /* SPECIFIC_SYM  */
    SQL_BIG_RESULT = 518,          /* SQL_BIG_RESULT  */
    SQLEXCEPTION_SYM = 519,        /* SQLEXCEPTION_SYM  */
    SQL_SMALL_RESULT = 520,        /* SQL_SMALL_RESULT  */
    SQLSTATE_SYM = 521,            /* SQLSTATE_SYM  */
    SQL_SYM = 522,                 /* SQL_SYM  */
    SQLWARNING_SYM = 523,          /* SQLWARNING_SYM  */
    SSL_SYM = 524,                 /* SSL_SYM  */
    STARTING = 525,                /* STARTING  */
    STATS_AUTO_RECALC_SYM = 526,   /* STATS_AUTO_RECALC_SYM  */
    STATS_PERSISTENT_SYM = 527,    /* STATS_PERSISTENT_SYM  */
    STATS_SAMPLE_PAGES_SYM = 528,  /* STATS_SAMPLE_PAGES_SYM  */
    STDDEV_SAMP_SYM = 529,         /* STDDEV_SAMP_SYM  */
    STD_SYM = 530,                 /* STD_SYM  */
    STRAIGHT_JOIN = 531,           /* STRAIGHT_JOIN  */
    SUM_SYM = 532,                 /* SUM_SYM  */
    SYSDATE = 533,                 /* SYSDATE  */
    TABLE_REF_PRIORITY = 534,      /* TABLE_REF_PRIORITY  */
    TABLE_SYM = 535,               /* TABLE_SYM  */
    TERMINATED = 536,              /* TERMINATED  */
    THEN_SYM = 537,                /* THEN_SYM  */
    TINYBLOB = 538,                /* TINYBLOB  */
    TINYINT = 539,                 /* TINYINT  */
    TINYTEXT = 540,                /* TINYTEXT  */
    TO_SYM = 541,                  /* TO_SYM  */
    TRAILING = 542,                /* TRAILING  */
    TRIGGER_SYM = 543,             /* TRIGGER_SYM  */
    TRUE_SYM = 544,                /* TRUE_SYM  */
    UNDO_SYM = 545,                /* UNDO_SYM  */
    UNION_SYM = 546,               /* UNION_SYM  */
    UNIQUE_SYM = 547,              /* UNIQUE_SYM  */
    UNLOCK_SYM = 548,              /* UNLOCK_SYM  */
    UNSIGNED = 549,                /* UNSIGNED  */
    UPDATE_SYM = 550,              /* UPDATE_SYM  */
    USAGE = 551,                   /* USAGE  */
    USE_SYM = 552,                 /* USE_SYM  */
    USING = 553,                   /* USING  */
    UTC_DATE_SYM = 554,            /* UTC_DATE_SYM  */
    UTC_TIMESTAMP_SYM = 555,       /* UTC_TIMESTAMP_SYM  */
    UTC_TIME_SYM = 556,            /* UTC_TIME_SYM  */
    VALUES_IN_SYM = 557,           /* VALUES_IN_SYM  */
    VALUES_LESS_SYM = 558,         /* VALUES_LESS_SYM  */
    VALUES = 559,                  /* VALUES  */
    VARBINARY = 560,               /* VARBINARY  */
    VARCHAR = 561,                 /* VARCHAR  */
    VARIANCE_SYM = 562,            /* VARIANCE_SYM  */
    VAR_SAMP_SYM = 563,            /* VAR_SAMP_SYM  */
    VARYING = 564,                 /* VARYING  */
    WHEN_SYM = 565,                /* WHEN_SYM  */
    WHERE = 566,                   /* WHERE  */
    WHILE_SYM = 567,               /* WHILE_SYM  */
    WITH = 568,                    /* WITH  */
    XOR = 569,                     /* XOR  */
    YEAR_MONTH_SYM = 570,          /* YEAR_MONTH_SYM  */
    ZEROFILL = 571,                /* ZEROFILL  */
    BODY_MARIADB_SYM = 572,        /* BODY_MARIADB_SYM  */
    ELSEIF_ORACLE_SYM = 573,       /* ELSEIF_ORACLE_SYM  */
    ELSIF_MARIADB_SYM = 574,       /* ELSIF_MARIADB_SYM  */
    EXCEPTION_ORACLE_SYM = 575,    /* EXCEPTION_ORACLE_SYM  */
    GOTO_MARIADB_SYM = 576,        /* GOTO_MARIADB_SYM  */
    OTHERS_MARIADB_SYM = 577,      /* OTHERS_MARIADB_SYM  */
    PACKAGE_MARIADB_SYM = 578,     /* PACKAGE_MARIADB_SYM  */
    RAISE_MARIADB_SYM = 579,       /* RAISE_MARIADB_SYM  */
    ROWTYPE_MARIADB_SYM = 580,     /* ROWTYPE_MARIADB_SYM  */
    ROWNUM_SYM = 581,              /* ROWNUM_SYM  */
    REPLACE = 582,                 /* REPLACE  */
    SUBSTRING = 583,               /* SUBSTRING  */
    TRIM = 584,                    /* TRIM  */
    ACCOUNT_SYM = 585,             /* ACCOUNT_SYM  */
    ACTION = 586,                  /* ACTION  */
    ADMIN_SYM = 587,               /* ADMIN_SYM  */
    ADDDATE_SYM = 588,             /* ADDDATE_SYM  */
    AFTER_SYM = 589,               /* AFTER_SYM  */
    AGAINST = 590,                 /* AGAINST  */
    AGGREGATE_SYM = 591,           /* AGGREGATE_SYM  */
    ALGORITHM_SYM = 592,           /* ALGORITHM_SYM  */
    ALWAYS_SYM = 593,              /* ALWAYS_SYM  */
    ANY_SYM = 594,                 /* ANY_SYM  */
    ASCII_SYM = 595,               /* ASCII_SYM  */
    AT_SYM = 596,                  /* AT_SYM  */
    ATOMIC_SYM = 597,              /* ATOMIC_SYM  */
    AUTHORS_SYM = 598,             /* AUTHORS_SYM  */
    AUTOEXTEND_SIZE_SYM = 599,     /* AUTOEXTEND_SIZE_SYM  */
    AUTO_INC = 600,                /* AUTO_INC  */
    AUTO_SYM = 601,                /* AUTO_SYM  */
    AVG_ROW_LENGTH = 602,          /* AVG_ROW_LENGTH  */
    AVG_SYM = 603,                 /* AVG_SYM  */
    BACKUP_SYM = 604,              /* BACKUP_SYM  */
    BEGIN_MARIADB_SYM = 605,       /* BEGIN_MARIADB_SYM  */
    BEGIN_ORACLE_SYM = 606,        /* BEGIN_ORACLE_SYM  */
    BINLOG_SYM = 607,              /* BINLOG_SYM  */
    BIT_SYM = 608,                 /* BIT_SYM  */
    BLOCK_SYM = 609,               /* BLOCK_SYM  */
    BOOL_SYM = 610,                /* BOOL_SYM  */
    BOOLEAN_SYM = 611,             /* BOOLEAN_SYM  */
    BTREE_SYM = 612,               /* BTREE_SYM  */
    BYTE_SYM = 613,                /* BYTE_SYM  */
    CACHE_SYM = 614,               /* CACHE_SYM  */
    CASCADED = 615,                /* CASCADED  */
    CATALOG_NAME_SYM = 616,        /* CATALOG_NAME_SYM  */
    CHAIN_SYM = 617,               /* CHAIN_SYM  */
    CHANGED = 618,                 /* CHANGED  */
    CHANNEL_SYM = 619,             /* CHANNEL_SYM  */
    CHARSET = 620,                 /* CHARSET  */
    CHECKPOINT_SYM = 621,          /* CHECKPOINT_SYM  */
    CHECKSUM_SYM = 622,            /* CHECKSUM_SYM  */
    CIPHER_SYM = 623,              /* CIPHER_SYM  */
    CLASS_ORIGIN_SYM = 624,        /* CLASS_ORIGIN_SYM  */
    CLIENT_SYM = 625,              /* CLIENT_SYM  */
    CLOB_MARIADB_SYM = 626,        /* CLOB_MARIADB_SYM  */
    CLOB_ORACLE_SYM = 627,         /* CLOB_ORACLE_SYM  */
    CLOSE_SYM = 628,               /* CLOSE_SYM  */
    COALESCE = 629,                /* COALESCE  */
    CODE_SYM = 630,                /* CODE_SYM  */
    COLLATION_SYM = 631,           /* COLLATION_SYM  */
    COLUMNS = 632,                 /* COLUMNS  */
    COLUMN_ADD_SYM = 633,          /* COLUMN_ADD_SYM  */
    COLUMN_CHECK_SYM = 634,        /* COLUMN_CHECK_SYM  */
    COLUMN_CREATE_SYM = 635,       /* COLUMN_CREATE_SYM  */
    COLUMN_DELETE_SYM = 636,       /* COLUMN_DELETE_SYM  */
    COLUMN_GET_SYM = 637,          /* COLUMN_GET_SYM  */
    COLUMN_SYM = 638,              /* COLUMN_SYM  */
    COLUMN_NAME_SYM = 639,         /* COLUMN_NAME_SYM  */
    COMMENT_SYM = 640,             /* COMMENT_SYM  */
    COMMITTED_SYM = 641,           /* COMMITTED_SYM  */
    COMMIT_SYM = 642,              /* COMMIT_SYM  */
    COMPACT_SYM = 643,             /* COMPACT_SYM  */
    COMPLETION_SYM = 644,          /* COMPLETION_SYM  */
    COMPRESSED_SYM = 645,          /* COMPRESSED_SYM  */
    CONCURRENT = 646,              /* CONCURRENT  */
    CONNECTION_SYM = 647,          /* CONNECTION_SYM  */
    CONSISTENT_SYM = 648,          /* CONSISTENT_SYM  */
    CONSTRAINT_CATALOG_SYM = 649,  /* CONSTRAINT_CATALOG_SYM  */
    CONSTRAINT_NAME_SYM = 650,     /* CONSTRAINT_NAME_SYM  */
    CONSTRAINT_SCHEMA_SYM = 651,   /* CONSTRAINT_SCHEMA_SYM  */
    CONTAINS_SYM = 652,            /* CONTAINS_SYM  */
    CONTEXT_SYM = 653,             /* CONTEXT_SYM  */
    CONTRIBUTORS_SYM = 654,        /* CONTRIBUTORS_SYM  */
    CPU_SYM = 655,                 /* CPU_SYM  */
    CUBE_SYM = 656,                /* CUBE_SYM  */
    CURRENT_SYM = 657,             /* CURRENT_SYM  */
    CURRENT_POS_SYM = 658,         /* CURRENT_POS_SYM  */
    CURSOR_NAME_SYM = 659,         /* CURSOR_NAME_SYM  */
    CYCLE_SYM = 660,               /* CYCLE_SYM  */
    DATAFILE_SYM = 661,            /* DATAFILE_SYM  */
    DATA_SYM = 662,                /* DATA_SYM  */
    DATETIME = 663,                /* DATETIME  */
    DATE_SYM = 664,                /* DATE_SYM  */
    DAY_SYM = 665,                 /* DAY_SYM  */
    DEALLOCATE_SYM = 666,          /* DEALLOCATE_SYM  */
    DEFINER_SYM = 667,             /* DEFINER_SYM  */
    DELAYED_SYM = 668,             /* DELAYED_SYM  */
    DELAY_KEY_WRITE_SYM = 669,     /* DELAY_KEY_WRITE_SYM  */
    DES_KEY_FILE = 670,            /* DES_KEY_FILE  */
    DIAGNOSTICS_SYM = 671,         /* DIAGNOSTICS_SYM  */
    DIRECTORY_SYM = 672,           /* DIRECTORY_SYM  */
    DISABLE_SYM = 673,             /* DISABLE_SYM  */
    DISCARD = 674,                 /* DISCARD  */
    DISK_SYM = 675,                /* DISK_SYM  */
    DO_SYM = 676,                  /* DO_SYM  */
    DUMPFILE = 677,                /* DUMPFILE  */
    DUPLICATE_SYM = 678,           /* DUPLICATE_SYM  */
    DYNAMIC_SYM = 679,             /* DYNAMIC_SYM  */
    ENABLE_SYM = 680,              /* ENABLE_SYM  */
    END = 681,                     /* END  */
    ENDS_SYM = 682,                /* ENDS_SYM  */
    ENGINES_SYM = 683,             /* ENGINES_SYM  */
    ENGINE_SYM = 684,              /* ENGINE_SYM  */
    ENUM = 685,                    /* ENUM  */
    ERROR_SYM = 686,               /* ERROR_SYM  */
    ERRORS = 687,                  /* ERRORS  */
    ESCAPE_SYM = 688,              /* ESCAPE_SYM  */
    EVENTS_SYM = 689,              /* EVENTS_SYM  */
    EVENT_SYM = 690,               /* EVENT_SYM  */
    EVERY_SYM = 691,               /* EVERY_SYM  */
    EXCHANGE_SYM = 692,            /* EXCHANGE_SYM  */
    EXAMINED_SYM = 693,            /* EXAMINED_SYM  */
    EXCLUDE_SYM = 694,             /* EXCLUDE_SYM  */
    EXECUTE_SYM = 695,             /* EXECUTE_SYM  */
    EXCEPTION_MARIADB_SYM = 696,   /* EXCEPTION_MARIADB_SYM  */
    EXIT_MARIADB_SYM = 697,        /* EXIT_MARIADB_SYM  */
    EXIT_ORACLE_SYM = 698,         /* EXIT_ORACLE_SYM  */
    EXPANSION_SYM = 699,           /* EXPANSION_SYM  */
    EXPIRE_SYM = 700,              /* EXPIRE_SYM  */
    EXPORT_SYM = 701,              /* EXPORT_SYM  */
    EXTENDED_SYM = 702,            /* EXTENDED_SYM  */
    EXTENT_SIZE_SYM = 703,         /* EXTENT_SIZE_SYM  */
    FAST_SYM = 704,                /* FAST_SYM  */
    FAULTS_SYM = 705,              /* FAULTS_SYM  */
    FEDERATED_SYM = 706,           /* FEDERATED_SYM  */
    FILE_SYM = 707,                /* FILE_SYM  */
    FIRST_SYM = 708,               /* FIRST_SYM  */
    FIXED_SYM = 709,               /* FIXED_SYM  */
    FLUSH_SYM = 710,               /* FLUSH_SYM  */
    FOLLOWS_SYM = 711,             /* FOLLOWS_SYM  */
    FOLLOWING_SYM = 712,           /* FOLLOWING_SYM  */
    FORCE_SYM = 713,               /* FORCE_SYM  */
    FORMAT_SYM = 714,              /* FORMAT_SYM  */
    FOUND_SYM = 715,               /* FOUND_SYM  */
    FULL = 716,                    /* FULL  */
    FUNCTION_SYM = 717,            /* FUNCTION_SYM  */
    GENERAL = 718,                 /* GENERAL  */
    GENERATED_SYM = 719,           /* GENERATED_SYM  */
    GET_FORMAT = 720,              /* GET_FORMAT  */
    GET_SYM = 721,                 /* GET_SYM  */
    GLOBAL_SYM = 722,              /* GLOBAL_SYM  */
    GRANTS = 723,                  /* GRANTS  */
    HANDLER_SYM = 724,             /* HANDLER_SYM  */
    HARD_SYM = 725,                /* HARD_SYM  */
    HASH_SYM = 726,                /* HASH_SYM  */
    HELP_SYM = 727,                /* HELP_SYM  */
    HIGH_PRIORITY = 728,           /* HIGH_PRIORITY  */
    HISTORY_SYM = 729,             /* HISTORY_SYM  */
    HOST_SYM = 730,                /* HOST_SYM  */
    HOSTS_SYM = 731,               /* HOSTS_SYM  */
    HOUR_SYM = 732,                /* HOUR_SYM  */
    ID_SYM = 733,                  /* ID_SYM  */
    IDENTIFIED_SYM = 734,          /* IDENTIFIED_SYM  */
    IGNORE_SERVER_IDS_SYM = 735,   /* IGNORE_SERVER_IDS_SYM  */
    IMMEDIATE_SYM = 736,           /* IMMEDIATE_SYM  */
    IMPORT = 737,                  /* IMPORT  */
    INCREMENT_SYM = 738,           /* INCREMENT_SYM  */
    INDEXES = 739,                 /* INDEXES  */
    INITIAL_SIZE_SYM = 740,        /* INITIAL_SIZE_SYM  */
    INSERT_METHOD = 741,           /* INSERT_METHOD  */
    INSTALL_SYM = 742,             /* INSTALL_SYM  */
    INVOKER_SYM = 743,             /* INVOKER_SYM  */
    IO_SYM = 744,                  /* IO_SYM  */
    IPC_SYM = 745,                 /* IPC_SYM  */
    ISOLATION = 746,               /* ISOLATION  */
    ISOPEN_SYM = 747,              /* ISOPEN_SYM  */
    ISSUER_SYM = 748,              /* ISSUER_SYM  */
    INVISIBLE_SYM = 749,           /* INVISIBLE_SYM  */
    JSON_SYM = 750,                /* JSON_SYM  */
    KEY_BLOCK_SIZE = 751,          /* KEY_BLOCK_SIZE  */
    LANGUAGE_SYM = 752,            /* LANGUAGE_SYM  */
    LAST_SYM = 753,                /* LAST_SYM  */
    LAST_VALUE = 754,              /* LAST_VALUE  */
    LASTVAL_SYM = 755,             /* LASTVAL_SYM  */
    LEAVES = 756,                  /* LEAVES  */
    LESS_SYM = 757,                /* LESS_SYM  */
    LEVEL_SYM = 758,               /* LEVEL_SYM  */
    LIST_SYM = 759,                /* LIST_SYM  */
    LOCAL_SYM = 760,               /* LOCAL_SYM  */
    LOCKED_SYM = 761,              /* LOCKED_SYM  */
    LOCKS_SYM = 762,               /* LOCKS_SYM  */
    LOGFILE_SYM = 763,             /* LOGFILE_SYM  */
    LOGS_SYM = 764,                /* LOGS_SYM  */
    MASTER_CONNECT_RETRY_SYM = 765, /* MASTER_CONNECT_RETRY_SYM  */
    MASTER_DELAY_SYM = 766,        /* MASTER_DELAY_SYM  */
    MASTER_GTID_POS_SYM = 767,     /* MASTER_GTID_POS_SYM  */
    MASTER_HOST_SYM = 768,         /* MASTER_HOST_SYM  */
    MASTER_LOG_FILE_SYM = 769,     /* MASTER_LOG_FILE_SYM  */
    MASTER_LOG_POS_SYM = 770,      /* MASTER_LOG_POS_SYM  */
    MASTER_PASSWORD_SYM = 771,     /* MASTER_PASSWORD_SYM  */
    MASTER_PORT_SYM = 772,         /* MASTER_PORT_SYM  */
    MASTER_SERVER_ID_SYM = 773,    /* MASTER_SERVER_ID_SYM  */
    MASTER_SSL_CAPATH_SYM = 774,   /* MASTER_SSL_CAPATH_SYM  */
    MASTER_SSL_CA_SYM = 775,       /* MASTER_SSL_CA_SYM  */
    MASTER_SSL_CERT_SYM = 776,     /* MASTER_SSL_CERT_SYM  */
    MASTER_SSL_CIPHER_SYM = 777,   /* MASTER_SSL_CIPHER_SYM  */
    MASTER_SSL_CRL_SYM = 778,      /* MASTER_SSL_CRL_SYM  */
    MASTER_SSL_CRLPATH_SYM = 779,  /* MASTER_SSL_CRLPATH_SYM  */
    MASTER_SSL_KEY_SYM = 780,      /* MASTER_SSL_KEY_SYM  */
    MASTER_SSL_SYM = 781,          /* MASTER_SSL_SYM  */
    MASTER_SYM = 782,              /* MASTER_SYM  */
    MASTER_USER_SYM = 783,         /* MASTER_USER_SYM  */
    MASTER_USE_GTID_SYM = 784,     /* MASTER_USE_GTID_SYM  */
    MASTER_HEARTBEAT_PERIOD_SYM = 785, /* MASTER_HEARTBEAT_PERIOD_SYM  */
    MASTER_DEMOTE_TO_SLAVE_SYM = 786, /* MASTER_DEMOTE_TO_SLAVE_SYM  */
    MAX_CONNECTIONS_PER_HOUR = 787, /* MAX_CONNECTIONS_PER_HOUR  */
    MAX_QUERIES_PER_HOUR = 788,    /* MAX_QUERIES_PER_HOUR  */
    MAX_ROWS = 789,                /* MAX_ROWS  */
    MAX_SIZE_SYM = 790,            /* MAX_SIZE_SYM  */
    MAX_UPDATES_PER_HOUR = 791,    /* MAX_UPDATES_PER_HOUR  */
    MAX_STATEMENT_TIME_SYM = 792,  /* MAX_STATEMENT_TIME_SYM  */
    MAX_USER_CONNECTIONS_SYM = 793, /* MAX_USER_CONNECTIONS_SYM  */
    MEDIUM_SYM = 794,              /* MEDIUM_SYM  */
    MEMORY_SYM = 795,              /* MEMORY_SYM  */
    MERGE_SYM = 796,               /* MERGE_SYM  */
    MESSAGE_TEXT_SYM = 797,        /* MESSAGE_TEXT_SYM  */
    MICROSECOND_SYM = 798,         /* MICROSECOND_SYM  */
    MIGRATE_SYM = 799,             /* MIGRATE_SYM  */
    MINUTE_SYM = 800,              /* MINUTE_SYM  */
    MINVALUE_SYM = 801,            /* MINVALUE_SYM  */
    MIN_ROWS = 802,                /* MIN_ROWS  */
    MODE_SYM = 803,                /* MODE_SYM  */
    MODIFY_SYM = 804,              /* MODIFY_SYM  */
    MONITOR_SYM = 805,             /* MONITOR_SYM  */
    MONTH_SYM = 806,               /* MONTH_SYM  */
    MUTEX_SYM = 807,               /* MUTEX_SYM  */
    MYSQL_SYM = 808,               /* MYSQL_SYM  */
    MYSQL_ERRNO_SYM = 809,         /* MYSQL_ERRNO_SYM  */
    NAMES_SYM = 810,               /* NAMES_SYM  */
    NAME_SYM = 811,                /* NAME_SYM  */
    NATIONAL_SYM = 812,            /* NATIONAL_SYM  */
    NCHAR_SYM = 813,               /* NCHAR_SYM  */
    NEVER_SYM = 814,               /* NEVER_SYM  */
    NEXT_SYM = 815,                /* NEXT_SYM  */
    NEXTVAL_SYM = 816,             /* NEXTVAL_SYM  */
    NOCACHE_SYM = 817,             /* NOCACHE_SYM  */
    NOCYCLE_SYM = 818,             /* NOCYCLE_SYM  */
    NODEGROUP_SYM = 819,           /* NODEGROUP_SYM  */
    NONE_SYM = 820,                /* NONE_SYM  */
    NOTFOUND_SYM = 821,            /* NOTFOUND_SYM  */
    NO_SYM = 822,                  /* NO_SYM  */
    NOMAXVALUE_SYM = 823,          /* NOMAXVALUE_SYM  */
    NOMINVALUE_SYM = 824,          /* NOMINVALUE_SYM  */
    NO_WAIT_SYM = 825,             /* NO_WAIT_SYM  */
    NOWAIT_SYM = 826,              /* NOWAIT_SYM  */
    NUMBER_MARIADB_SYM = 827,      /* NUMBER_MARIADB_SYM  */
    NUMBER_ORACLE_SYM = 828,       /* NUMBER_ORACLE_SYM  */
    NVARCHAR_SYM = 829,            /* NVARCHAR_SYM  */
    OF_SYM = 830,                  /* OF_SYM  */
    OFFSET_SYM = 831,              /* OFFSET_SYM  */
    OLD_PASSWORD_SYM = 832,        /* OLD_PASSWORD_SYM  */
    ONE_SYM = 833,                 /* ONE_SYM  */
    ONLY_SYM = 834,                /* ONLY_SYM  */
    ONLINE_SYM = 835,              /* ONLINE_SYM  */
    OPEN_SYM = 836,                /* OPEN_SYM  */
    OPTIONS_SYM = 837,             /* OPTIONS_SYM  */
    OPTION = 838,                  /* OPTION  */
    OVERLAPS_SYM = 839,            /* OVERLAPS_SYM  */
    OWNER_SYM = 840,               /* OWNER_SYM  */
    PACK_KEYS_SYM = 841,           /* PACK_KEYS_SYM  */
    PAGE_SYM = 842,                /* PAGE_SYM  */
    PARSER_SYM = 843,              /* PARSER_SYM  */
    PARTIAL = 844,                 /* PARTIAL  */
    PARTITIONS_SYM = 845,          /* PARTITIONS_SYM  */
    PARTITIONING_SYM = 846,        /* PARTITIONING_SYM  */
    PASSWORD_SYM = 847,            /* PASSWORD_SYM  */
    PERIOD_SYM = 848,              /* PERIOD_SYM  */
    PERSISTENT_SYM = 849,          /* PERSISTENT_SYM  */
    PHASE_SYM = 850,               /* PHASE_SYM  */
    PLUGINS_SYM = 851,             /* PLUGINS_SYM  */
    PLUGIN_SYM = 852,              /* PLUGIN_SYM  */
    PORT_SYM = 853,                /* PORT_SYM  */
    PRECEDES_SYM = 854,            /* PRECEDES_SYM  */
    PRECEDING_SYM = 855,           /* PRECEDING_SYM  */
    PREPARE_SYM = 856,             /* PREPARE_SYM  */
    PRESERVE_SYM = 857,            /* PRESERVE_SYM  */
    PREV_SYM = 858,                /* PREV_SYM  */
    PREVIOUS_SYM = 859,            /* PREVIOUS_SYM  */
    PRIVILEGES = 860,              /* PRIVILEGES  */
    PROCESS = 861,                 /* PROCESS  */
    PROCESSLIST_SYM = 862,         /* PROCESSLIST_SYM  */
    PROFILE_SYM = 863,             /* PROFILE_SYM  */
    PROFILES_SYM = 864,            /* PROFILES_SYM  */
    PROXY_SYM = 865,               /* PROXY_SYM  */
    QUARTER_SYM = 866,             /* QUARTER_SYM  */
    QUERY_SYM = 867,               /* QUERY_SYM  */
    QUICK = 868,                   /* QUICK  */
    RAW_MARIADB_SYM = 869,         /* RAW_MARIADB_SYM  */
    RAW_ORACLE_SYM = 870,          /* RAW_ORACLE_SYM  */
    READ_ONLY_SYM = 871,           /* READ_ONLY_SYM  */
    REBUILD_SYM = 872,             /* REBUILD_SYM  */
    RECOVER_SYM = 873,             /* RECOVER_SYM  */
    REDOFILE_SYM = 874,            /* REDOFILE_SYM  */
    REDO_BUFFER_SIZE_SYM = 875,    /* REDO_BUFFER_SIZE_SYM  */
    REDUNDANT_SYM = 876,           /* REDUNDANT_SYM  */
    RELAY = 877,                   /* RELAY  */
    RELAYLOG_SYM = 878,            /* RELAYLOG_SYM  */
    RELAY_LOG_FILE_SYM = 879,      /* RELAY_LOG_FILE_SYM  */
    RELAY_LOG_POS_SYM = 880,       /* RELAY_LOG_POS_SYM  */
    RELAY_THREAD = 881,            /* RELAY_THREAD  */
    RELOAD = 882,                  /* RELOAD  */
    REMOVE_SYM = 883,              /* REMOVE_SYM  */
    REORGANIZE_SYM = 884,          /* REORGANIZE_SYM  */
    REPAIR = 885,                  /* REPAIR  */
    REPEATABLE_SYM = 886,          /* REPEATABLE_SYM  */
    REPLAY_SYM = 887,              /* REPLAY_SYM  */
    REPLICATION = 888,             /* REPLICATION  */
    RESET_SYM = 889,               /* RESET_SYM  */
    RESTART_SYM = 890,             /* RESTART_SYM  */
    RESOURCES = 891,               /* RESOURCES  */
    RESTORE_SYM = 892,             /* RESTORE_SYM  */
    RESUME_SYM = 893,              /* RESUME_SYM  */
    RETURNED_SQLSTATE_SYM = 894,   /* RETURNED_SQLSTATE_SYM  */
    RETURNS_SYM = 895,             /* RETURNS_SYM  */
    REUSE_SYM = 896,               /* REUSE_SYM  */
    REVERSE_SYM = 897,             /* REVERSE_SYM  */
    ROLE_SYM = 898,                /* ROLE_SYM  */
    ROLLBACK_SYM = 899,            /* ROLLBACK_SYM  */
    ROLLUP_SYM = 900,              /* ROLLUP_SYM  */
    ROUTINE_SYM = 901,             /* ROUTINE_SYM  */
    ROWCOUNT_SYM = 902,            /* ROWCOUNT_SYM  */
    ROW_SYM = 903,                 /* ROW_SYM  */
    ROW_COUNT_SYM = 904,           /* ROW_COUNT_SYM  */
    ROW_FORMAT_SYM = 905,          /* ROW_FORMAT_SYM  */
    RTREE_SYM = 906,               /* RTREE_SYM  */
    SAVEPOINT_SYM = 907,           /* SAVEPOINT_SYM  */
    SCHEDULE_SYM = 908,            /* SCHEDULE_SYM  */
    SCHEMA_NAME_SYM = 909,         /* SCHEMA_NAME_SYM  */
    SECOND_SYM = 910,              /* SECOND_SYM  */
    SECURITY_SYM = 911,            /* SECURITY_SYM  */
    SEQUENCE_SYM = 912,            /* SEQUENCE_SYM  */
    SERIALIZABLE_SYM = 913,        /* SERIALIZABLE_SYM  */
    SERIAL_SYM = 914,              /* SERIAL_SYM  */
    SESSION_SYM = 915,             /* SESSION_SYM  */
    SERVER_SYM = 916,              /* SERVER_SYM  */
    SETVAL_SYM = 917,              /* SETVAL_SYM  */
    SHARE_SYM = 918,               /* SHARE_SYM  */
    SHUTDOWN = 919,                /* SHUTDOWN  */
    SIGNED_SYM = 920,              /* SIGNED_SYM  */
    SIMPLE_SYM = 921,              /* SIMPLE_SYM  */
    SKIP_SYM = 922,                /* SKIP_SYM  */
    SLAVE = 923,                   /* SLAVE  */
    SLAVES = 924,                  /* SLAVES  */
    SLAVE_POS_SYM = 925,           /* SLAVE_POS_SYM  */
    SLOW = 926,                    /* SLOW  */
    SNAPSHOT_SYM = 927,            /* SNAPSHOT_SYM  */
    SOCKET_SYM = 928,              /* SOCKET_SYM  */
    SOFT_SYM = 929,                /* SOFT_SYM  */
    SONAME_SYM = 930,              /* SONAME_SYM  */
    SOUNDS_SYM = 931,              /* SOUNDS_SYM  */
    SOURCE_SYM = 932,              /* SOURCE_SYM  */
    SQL_AFTER_GTIDS_SYM = 933,     /* SQL_AFTER_GTIDS_SYM  */
    SQL_BEFORE_GTIDS_SYM = 934,    /* SQL_BEFORE_GTIDS_SYM  */
    SQL_BUFFER_RESULT = 935,       /* SQL_BUFFER_RESULT  */
    SQL_CACHE_SYM = 936,           /* SQL_CACHE_SYM  */
    SQL_CALC_FOUND_ROWS = 937,     /* SQL_CALC_FOUND_ROWS  */
    SQL_NO_CACHE_SYM = 938,        /* SQL_NO_CACHE_SYM  */
    SQL_THREAD = 939,              /* SQL_THREAD  */
    STAGE_SYM = 940,               /* STAGE_SYM  */
    STARTS_SYM = 941,              /* STARTS_SYM  */
    START_SYM = 942,               /* START_SYM  */
    STATEMENT_SYM = 943,           /* STATEMENT_SYM  */
    STATUS_SYM = 944,              /* STATUS_SYM  */
    STOP_SYM = 945,                /* STOP_SYM  */
    STORAGE_SYM = 946,             /* STORAGE_SYM  */
    STORED_SYM = 947,              /* STORED_SYM  */
    STRING_SYM = 948,              /* STRING_SYM  */
    SUBCLASS_ORIGIN_SYM = 949,     /* SUBCLASS_ORIGIN_SYM  */
    SUBDATE_SYM = 950,             /* SUBDATE_SYM  */
    SUBJECT_SYM = 951,             /* SUBJECT_SYM  */
    SUBPARTITIONS_SYM = 952,       /* SUBPARTITIONS_SYM  */
    SUBPARTITION_SYM = 953,        /* SUBPARTITION_SYM  */
    SUPER_SYM = 954,               /* SUPER_SYM  */
    SUSPEND_SYM = 955,             /* SUSPEND_SYM  */
    SWAPS_SYM = 956,               /* SWAPS_SYM  */
    SWITCHES_SYM = 957,            /* SWITCHES_SYM  */
    SYSTEM = 958,                  /* SYSTEM  */
    SYSTEM_TIME_SYM = 959,         /* SYSTEM_TIME_SYM  */
    TABLES = 960,                  /* TABLES  */
    TABLESPACE = 961,              /* TABLESPACE  */
    TABLE_CHECKSUM_SYM = 962,      /* TABLE_CHECKSUM_SYM  */
    TABLE_NAME_SYM = 963,          /* TABLE_NAME_SYM  */
    TEMPORARY = 964,               /* TEMPORARY  */
    TEMPTABLE_SYM = 965,           /* TEMPTABLE_SYM  */
    TEXT_SYM = 966,                /* TEXT_SYM  */
    THAN_SYM = 967,                /* THAN_SYM  */
    TIES_SYM = 968,                /* TIES_SYM  */
    TIMESTAMP = 969,               /* TIMESTAMP  */
    TIMESTAMP_ADD = 970,           /* TIMESTAMP_ADD  */
    TIMESTAMP_DIFF = 971,          /* TIMESTAMP_DIFF  */
    TIME_SYM = 972,                /* TIME_SYM  */
    TRANSACTION_SYM = 973,         /* TRANSACTION_SYM  */
    TRANSACTIONAL_SYM = 974,       /* TRANSACTIONAL_SYM  */
    THREADS_SYM = 975,             /* THREADS_SYM  */
    TRIGGERS_SYM = 976,            /* TRIGGERS_SYM  */
    TRIM_ORACLE = 977,             /* TRIM_ORACLE  */
    TRUNCATE_SYM = 978,            /* TRUNCATE_SYM  */
    TYPE_SYM = 979,                /* TYPE_SYM  */
    UDF_RETURNS_SYM = 980,         /* UDF_RETURNS_SYM  */
    UNBOUNDED_SYM = 981,           /* UNBOUNDED_SYM  */
    UNCOMMITTED_SYM = 982,         /* UNCOMMITTED_SYM  */
    UNDEFINED_SYM = 983,           /* UNDEFINED_SYM  */
    UNDOFILE_SYM = 984,            /* UNDOFILE_SYM  */
    UNDO_BUFFER_SIZE_SYM = 985,    /* UNDO_BUFFER_SIZE_SYM  */
    UNICODE_SYM = 986,             /* UNICODE_SYM  */
    UNINSTALL_SYM = 987,           /* UNINSTALL_SYM  */
    UNKNOWN_SYM = 988,             /* UNKNOWN_SYM  */
    UNTIL_SYM = 989,               /* UNTIL_SYM  */
    UPGRADE_SYM = 990,             /* UPGRADE_SYM  */
    USER_SYM = 991,                /* USER_SYM  */
    USE_FRM = 992,                 /* USE_FRM  */
    VALIDATION_SYM = 993,          /* VALIDATION_SYM  */
    VALUE_SYM = 994,               /* VALUE_SYM  */
    VARCHAR2_MARIADB_SYM = 995,    /* VARCHAR2_MARIADB_SYM  */
    VARCHAR2_ORACLE_SYM = 996,     /* VARCHAR2_ORACLE_SYM  */
    VARIABLES = 997,               /* VARIABLES  */
    VERSIONING_SYM = 998,          /* VERSIONING_SYM  */
    VIA_SYM = 999,                 /* VIA_SYM  */
    VIEW_SYM = 1000,               /* VIEW_SYM  */
    VISIBLE_SYM = 1001,            /* VISIBLE_SYM  */
    VIRTUAL_SYM = 1002,            /* VIRTUAL_SYM  */
    WAIT_SYM = 1003,               /* WAIT_SYM  */
    WARNINGS = 1004,               /* WARNINGS  */
    WEEK_SYM = 1005,               /* WEEK_SYM  */
    WEIGHT_STRING_SYM = 1006,      /* WEIGHT_STRING_SYM  */
    WINDOW_SYM = 1007,             /* WINDOW_SYM  */
    WITHIN = 1008,                 /* WITHIN  */
    WITHOUT = 1009,                /* WITHOUT  */
    WORK_SYM = 1010,               /* WORK_SYM  */
    WRAPPER_SYM = 1011,            /* WRAPPER_SYM  */
    WRITE_SYM = 1012,              /* WRITE_SYM  */
    X509_SYM = 1013,               /* X509_SYM  */
    XA_SYM = 1014,                 /* XA_SYM  */
    XML_SYM = 1015,                /* XML_SYM  */
    YEAR_SYM = 1016,               /* YEAR_SYM  */
    CONDITIONLESS_JOIN = 1017,     /* CONDITIONLESS_JOIN  */
    ON_SYM = 1018,                 /* ON_SYM  */
    PREC_BELOW_NOT = 1019,         /* PREC_BELOW_NOT  */
    SUBQUERY_AS_EXPR = 1020,       /* SUBQUERY_AS_EXPR  */
    PREC_BELOW_IDENTIFIER_OPT_SPECIAL_CASE = 1021, /* PREC_BELOW_IDENTIFIER_OPT_SPECIAL_CASE  */
    USER = 1022,                   /* USER  */
    PREC_BELOW_SP_OBJECT_TYPE = 1023, /* PREC_BELOW_SP_OBJECT_TYPE  */
    PREC_BELOW_CONTRACTION_TOKEN2 = 1024, /* PREC_BELOW_CONTRACTION_TOKEN2  */
    EMPTY_FROM_CLAUSE = 1025       /* EMPTY_FROM_CLAUSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 195 "/home/buildbot/git/sql/sql_yacc.yy"

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
  Lex_exact_charset_extended_collation_attrs_st
                    Lex_exact_charset_extended_collation_attrs;
  Lex_extended_collation_st Lex_extended_collation;
  Lex_dyncol_type_st Lex_dyncol_type;
  Lex_for_loop_st for_loop;
  Lex_for_loop_bounds_st for_loop_bounds;
  Lex_trim_st trim;
  Json_table_column::On_response json_on_response;
  Lex_substring_spec_st substring_spec;
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
  engine_option_value *engine_option_value_ptr;

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
  struct
  {
    Item *expr;
    LEX_CSTRING expr_str;
  } expr_and_query_str;

#line 977 "/home/buildbot/git/mkdist/sql/yy_mariadb.hh"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int MYSQLparse (THD *thd);


#endif /* !YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_YY_MARIADB_HH_INCLUDED  */
