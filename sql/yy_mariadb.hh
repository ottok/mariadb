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
    LOCALTIMESTAMP = 426,          /* LOCALTIMESTAMP  */
    LOCATOR_SYM = 427,             /* LOCATOR_SYM  */
    LOCK_SYM = 428,                /* LOCK_SYM  */
    LONGBLOB = 429,                /* LONGBLOB  */
    LONG_SYM = 430,                /* LONG_SYM  */
    LONGTEXT = 431,                /* LONGTEXT  */
    LOOP_SYM = 432,                /* LOOP_SYM  */
    LOW_PRIORITY = 433,            /* LOW_PRIORITY  */
    MASTER_SSL_VERIFY_SERVER_CERT_SYM = 434, /* MASTER_SSL_VERIFY_SERVER_CERT_SYM  */
    MATCH = 435,                   /* MATCH  */
    MAX_SYM = 436,                 /* MAX_SYM  */
    MAXVALUE_SYM = 437,            /* MAXVALUE_SYM  */
    MEDIAN_SYM = 438,              /* MEDIAN_SYM  */
    MEDIUMBLOB = 439,              /* MEDIUMBLOB  */
    MEDIUMINT = 440,               /* MEDIUMINT  */
    MEDIUMTEXT = 441,              /* MEDIUMTEXT  */
    MIN_SYM = 442,                 /* MIN_SYM  */
    MINUS_ORACLE_SYM = 443,        /* MINUS_ORACLE_SYM  */
    MINUTE_MICROSECOND_SYM = 444,  /* MINUTE_MICROSECOND_SYM  */
    MINUTE_SECOND_SYM = 445,       /* MINUTE_SECOND_SYM  */
    MODIFIES_SYM = 446,            /* MODIFIES_SYM  */
    MOD_SYM = 447,                 /* MOD_SYM  */
    NATURAL = 448,                 /* NATURAL  */
    NEG = 449,                     /* NEG  */
    NESTED_SYM = 450,              /* NESTED_SYM  */
    NOT_SYM = 451,                 /* NOT_SYM  */
    NO_WRITE_TO_BINLOG = 452,      /* NO_WRITE_TO_BINLOG  */
    NOW_SYM = 453,                 /* NOW_SYM  */
    NTH_VALUE_SYM = 454,           /* NTH_VALUE_SYM  */
    NTILE_SYM = 455,               /* NTILE_SYM  */
    NULL_SYM = 456,                /* NULL_SYM  */
    NUMERIC_SYM = 457,             /* NUMERIC_SYM  */
    ON = 458,                      /* ON  */
    OPTIMIZE = 459,                /* OPTIMIZE  */
    OPTIONALLY = 460,              /* OPTIONALLY  */
    ORDER_SYM = 461,               /* ORDER_SYM  */
    ORDINALITY_SYM = 462,          /* ORDINALITY_SYM  */
    OR_SYM = 463,                  /* OR_SYM  */
    OTHERS_ORACLE_SYM = 464,       /* OTHERS_ORACLE_SYM  */
    OUTER = 465,                   /* OUTER  */
    OUTFILE = 466,                 /* OUTFILE  */
    OUT_SYM = 467,                 /* OUT_SYM  */
    OVER_SYM = 468,                /* OVER_SYM  */
    PACKAGE_ORACLE_SYM = 469,      /* PACKAGE_ORACLE_SYM  */
    PAGE_CHECKSUM_SYM = 470,       /* PAGE_CHECKSUM_SYM  */
    PARSE_VCOL_EXPR_SYM = 471,     /* PARSE_VCOL_EXPR_SYM  */
    PARTITION_SYM = 472,           /* PARTITION_SYM  */
    PATH_SYM = 473,                /* PATH_SYM  */
    PERCENTILE_CONT_SYM = 474,     /* PERCENTILE_CONT_SYM  */
    PERCENTILE_DISC_SYM = 475,     /* PERCENTILE_DISC_SYM  */
    PERCENT_RANK_SYM = 476,        /* PERCENT_RANK_SYM  */
    PORTION_SYM = 477,             /* PORTION_SYM  */
    POSITION_SYM = 478,            /* POSITION_SYM  */
    PRECISION = 479,               /* PRECISION  */
    PRIMARY_SYM = 480,             /* PRIMARY_SYM  */
    PROCEDURE_SYM = 481,           /* PROCEDURE_SYM  */
    PURGE = 482,                   /* PURGE  */
    RAISE_ORACLE_SYM = 483,        /* RAISE_ORACLE_SYM  */
    RANGE_SYM = 484,               /* RANGE_SYM  */
    RANK_SYM = 485,                /* RANK_SYM  */
    READS_SYM = 486,               /* READS_SYM  */
    READ_SYM = 487,                /* READ_SYM  */
    READ_WRITE_SYM = 488,          /* READ_WRITE_SYM  */
    REAL = 489,                    /* REAL  */
    RECURSIVE_SYM = 490,           /* RECURSIVE_SYM  */
    REFERENCES = 491,              /* REFERENCES  */
    REF_SYSTEM_ID_SYM = 492,       /* REF_SYSTEM_ID_SYM  */
    REGEXP = 493,                  /* REGEXP  */
    RELEASE_SYM = 494,             /* RELEASE_SYM  */
    RENAME = 495,                  /* RENAME  */
    REPEAT_SYM = 496,              /* REPEAT_SYM  */
    REQUIRE_SYM = 497,             /* REQUIRE_SYM  */
    RESIGNAL_SYM = 498,            /* RESIGNAL_SYM  */
    RESTRICT = 499,                /* RESTRICT  */
    RETURNING_SYM = 500,           /* RETURNING_SYM  */
    RETURN_MARIADB_SYM = 501,      /* RETURN_MARIADB_SYM  */
    RETURN_ORACLE_SYM = 502,       /* RETURN_ORACLE_SYM  */
    REVOKE = 503,                  /* REVOKE  */
    RIGHT = 504,                   /* RIGHT  */
    ROW_NUMBER_SYM = 505,          /* ROW_NUMBER_SYM  */
    ROWS_SYM = 506,                /* ROWS_SYM  */
    ROWTYPE_ORACLE_SYM = 507,      /* ROWTYPE_ORACLE_SYM  */
    SECOND_MICROSECOND_SYM = 508,  /* SECOND_MICROSECOND_SYM  */
    SELECT_SYM = 509,              /* SELECT_SYM  */
    SENSITIVE_SYM = 510,           /* SENSITIVE_SYM  */
    SEPARATOR_SYM = 511,           /* SEPARATOR_SYM  */
    SERVER_OPTIONS = 512,          /* SERVER_OPTIONS  */
    SET = 513,                     /* SET  */
    SHOW = 514,                    /* SHOW  */
    SIGNAL_SYM = 515,              /* SIGNAL_SYM  */
    SMALLINT = 516,                /* SMALLINT  */
    SPATIAL_SYM = 517,             /* SPATIAL_SYM  */
    SPECIFIC_SYM = 518,            /* SPECIFIC_SYM  */
    SQL_BIG_RESULT = 519,          /* SQL_BIG_RESULT  */
    SQLEXCEPTION_SYM = 520,        /* SQLEXCEPTION_SYM  */
    SQL_SMALL_RESULT = 521,        /* SQL_SMALL_RESULT  */
    SQLSTATE_SYM = 522,            /* SQLSTATE_SYM  */
    SQL_SYM = 523,                 /* SQL_SYM  */
    SQLWARNING_SYM = 524,          /* SQLWARNING_SYM  */
    SSL_SYM = 525,                 /* SSL_SYM  */
    STARTING = 526,                /* STARTING  */
    STATS_AUTO_RECALC_SYM = 527,   /* STATS_AUTO_RECALC_SYM  */
    STATS_PERSISTENT_SYM = 528,    /* STATS_PERSISTENT_SYM  */
    STATS_SAMPLE_PAGES_SYM = 529,  /* STATS_SAMPLE_PAGES_SYM  */
    STDDEV_SAMP_SYM = 530,         /* STDDEV_SAMP_SYM  */
    STD_SYM = 531,                 /* STD_SYM  */
    STRAIGHT_JOIN = 532,           /* STRAIGHT_JOIN  */
    SUM_SYM = 533,                 /* SUM_SYM  */
    SYSDATE = 534,                 /* SYSDATE  */
    TABLE_REF_PRIORITY = 535,      /* TABLE_REF_PRIORITY  */
    TABLE_SYM = 536,               /* TABLE_SYM  */
    TERMINATED = 537,              /* TERMINATED  */
    THEN_SYM = 538,                /* THEN_SYM  */
    TINYBLOB = 539,                /* TINYBLOB  */
    TINYINT = 540,                 /* TINYINT  */
    TINYTEXT = 541,                /* TINYTEXT  */
    TO_SYM = 542,                  /* TO_SYM  */
    TRAILING = 543,                /* TRAILING  */
    TRIGGER_SYM = 544,             /* TRIGGER_SYM  */
    TRUE_SYM = 545,                /* TRUE_SYM  */
    UNDO_SYM = 546,                /* UNDO_SYM  */
    UNION_SYM = 547,               /* UNION_SYM  */
    UNIQUE_SYM = 548,              /* UNIQUE_SYM  */
    UNLOCK_SYM = 549,              /* UNLOCK_SYM  */
    UNSIGNED = 550,                /* UNSIGNED  */
    UPDATE_SYM = 551,              /* UPDATE_SYM  */
    USAGE = 552,                   /* USAGE  */
    USE_SYM = 553,                 /* USE_SYM  */
    USING = 554,                   /* USING  */
    UTC_DATE_SYM = 555,            /* UTC_DATE_SYM  */
    UTC_TIMESTAMP_SYM = 556,       /* UTC_TIMESTAMP_SYM  */
    UTC_TIME_SYM = 557,            /* UTC_TIME_SYM  */
    VALUES_IN_SYM = 558,           /* VALUES_IN_SYM  */
    VALUES_LESS_SYM = 559,         /* VALUES_LESS_SYM  */
    VALUES = 560,                  /* VALUES  */
    VARBINARY = 561,               /* VARBINARY  */
    VARCHAR = 562,                 /* VARCHAR  */
    VARIANCE_SYM = 563,            /* VARIANCE_SYM  */
    VAR_SAMP_SYM = 564,            /* VAR_SAMP_SYM  */
    VARYING = 565,                 /* VARYING  */
    VECTOR_SYM = 566,              /* VECTOR_SYM  */
    WHEN_SYM = 567,                /* WHEN_SYM  */
    WHERE = 568,                   /* WHERE  */
    WHILE_SYM = 569,               /* WHILE_SYM  */
    WITH = 570,                    /* WITH  */
    XOR = 571,                     /* XOR  */
    YEAR_MONTH_SYM = 572,          /* YEAR_MONTH_SYM  */
    ZEROFILL = 573,                /* ZEROFILL  */
    BODY_MARIADB_SYM = 574,        /* BODY_MARIADB_SYM  */
    ELSEIF_ORACLE_SYM = 575,       /* ELSEIF_ORACLE_SYM  */
    ELSIF_MARIADB_SYM = 576,       /* ELSIF_MARIADB_SYM  */
    EXCEPTION_ORACLE_SYM = 577,    /* EXCEPTION_ORACLE_SYM  */
    GOTO_MARIADB_SYM = 578,        /* GOTO_MARIADB_SYM  */
    NOCOPY_SYM = 579,              /* NOCOPY_SYM  */
    OTHERS_MARIADB_SYM = 580,      /* OTHERS_MARIADB_SYM  */
    PACKAGE_MARIADB_SYM = 581,     /* PACKAGE_MARIADB_SYM  */
    RAISE_MARIADB_SYM = 582,       /* RAISE_MARIADB_SYM  */
    RECORD_SYM = 583,              /* RECORD_SYM  */
    ROWTYPE_MARIADB_SYM = 584,     /* ROWTYPE_MARIADB_SYM  */
    ROWNUM_SYM = 585,              /* ROWNUM_SYM  */
    REPLACE = 586,                 /* REPLACE  */
    SUBSTRING = 587,               /* SUBSTRING  */
    TRIM = 588,                    /* TRIM  */
    ACCOUNT_SYM = 589,             /* ACCOUNT_SYM  */
    ACTION = 590,                  /* ACTION  */
    ADMIN_SYM = 591,               /* ADMIN_SYM  */
    ADDDATE_SYM = 592,             /* ADDDATE_SYM  */
    AFTER_SYM = 593,               /* AFTER_SYM  */
    AGAINST = 594,                 /* AGAINST  */
    AGGREGATE_SYM = 595,           /* AGGREGATE_SYM  */
    ALGORITHM_SYM = 596,           /* ALGORITHM_SYM  */
    ALWAYS_SYM = 597,              /* ALWAYS_SYM  */
    ANY_SYM = 598,                 /* ANY_SYM  */
    ASCII_SYM = 599,               /* ASCII_SYM  */
    AT_SYM = 600,                  /* AT_SYM  */
    ATOMIC_SYM = 601,              /* ATOMIC_SYM  */
    AUTHORS_SYM = 602,             /* AUTHORS_SYM  */
    AUTOEXTEND_SIZE_SYM = 603,     /* AUTOEXTEND_SIZE_SYM  */
    AUTO_INC = 604,                /* AUTO_INC  */
    AUTO_SYM = 605,                /* AUTO_SYM  */
    AVG_ROW_LENGTH = 606,          /* AVG_ROW_LENGTH  */
    AVG_SYM = 607,                 /* AVG_SYM  */
    BACKUP_SYM = 608,              /* BACKUP_SYM  */
    BEGIN_MARIADB_SYM = 609,       /* BEGIN_MARIADB_SYM  */
    BEGIN_ORACLE_SYM = 610,        /* BEGIN_ORACLE_SYM  */
    BINLOG_SYM = 611,              /* BINLOG_SYM  */
    BIT_SYM = 612,                 /* BIT_SYM  */
    BLOCK_SYM = 613,               /* BLOCK_SYM  */
    BOOL_SYM = 614,                /* BOOL_SYM  */
    BOOLEAN_SYM = 615,             /* BOOLEAN_SYM  */
    BTREE_SYM = 616,               /* BTREE_SYM  */
    BYTE_SYM = 617,                /* BYTE_SYM  */
    CACHE_SYM = 618,               /* CACHE_SYM  */
    CASCADED = 619,                /* CASCADED  */
    CATALOG_NAME_SYM = 620,        /* CATALOG_NAME_SYM  */
    CHAIN_SYM = 621,               /* CHAIN_SYM  */
    CHANGED = 622,                 /* CHANGED  */
    CHANNEL_SYM = 623,             /* CHANNEL_SYM  */
    CHARSET = 624,                 /* CHARSET  */
    CHECKPOINT_SYM = 625,          /* CHECKPOINT_SYM  */
    CHECKSUM_SYM = 626,            /* CHECKSUM_SYM  */
    CIPHER_SYM = 627,              /* CIPHER_SYM  */
    CLASS_ORIGIN_SYM = 628,        /* CLASS_ORIGIN_SYM  */
    CLIENT_SYM = 629,              /* CLIENT_SYM  */
    CLOB_MARIADB_SYM = 630,        /* CLOB_MARIADB_SYM  */
    CLOB_ORACLE_SYM = 631,         /* CLOB_ORACLE_SYM  */
    CLOSE_SYM = 632,               /* CLOSE_SYM  */
    COALESCE = 633,                /* COALESCE  */
    CODE_SYM = 634,                /* CODE_SYM  */
    COLLATION_SYM = 635,           /* COLLATION_SYM  */
    COLUMNS = 636,                 /* COLUMNS  */
    COLUMN_ADD_SYM = 637,          /* COLUMN_ADD_SYM  */
    COLUMN_CHECK_SYM = 638,        /* COLUMN_CHECK_SYM  */
    COLUMN_CREATE_SYM = 639,       /* COLUMN_CREATE_SYM  */
    COLUMN_DELETE_SYM = 640,       /* COLUMN_DELETE_SYM  */
    COLUMN_GET_SYM = 641,          /* COLUMN_GET_SYM  */
    COLUMN_SYM = 642,              /* COLUMN_SYM  */
    COLUMN_NAME_SYM = 643,         /* COLUMN_NAME_SYM  */
    COMMENT_SYM = 644,             /* COMMENT_SYM  */
    COMMITTED_SYM = 645,           /* COMMITTED_SYM  */
    COMMIT_SYM = 646,              /* COMMIT_SYM  */
    COMPACT_SYM = 647,             /* COMPACT_SYM  */
    COMPLETION_SYM = 648,          /* COMPLETION_SYM  */
    COMPRESSED_SYM = 649,          /* COMPRESSED_SYM  */
    CONCURRENT = 650,              /* CONCURRENT  */
    CONNECTION_SYM = 651,          /* CONNECTION_SYM  */
    CONSISTENT_SYM = 652,          /* CONSISTENT_SYM  */
    CONSTRAINT_CATALOG_SYM = 653,  /* CONSTRAINT_CATALOG_SYM  */
    CONSTRAINT_NAME_SYM = 654,     /* CONSTRAINT_NAME_SYM  */
    CONSTRAINT_SCHEMA_SYM = 655,   /* CONSTRAINT_SCHEMA_SYM  */
    CONTAINS_SYM = 656,            /* CONTAINS_SYM  */
    CONTEXT_SYM = 657,             /* CONTEXT_SYM  */
    CONTRIBUTORS_SYM = 658,        /* CONTRIBUTORS_SYM  */
    CPU_SYM = 659,                 /* CPU_SYM  */
    CUBE_SYM = 660,                /* CUBE_SYM  */
    CURRENT_SYM = 661,             /* CURRENT_SYM  */
    CURRENT_POS_SYM = 662,         /* CURRENT_POS_SYM  */
    CURSOR_NAME_SYM = 663,         /* CURSOR_NAME_SYM  */
    CYCLE_SYM = 664,               /* CYCLE_SYM  */
    DATAFILE_SYM = 665,            /* DATAFILE_SYM  */
    DATA_SYM = 666,                /* DATA_SYM  */
    DATETIME = 667,                /* DATETIME  */
    DATE_SYM = 668,                /* DATE_SYM  */
    DAY_SYM = 669,                 /* DAY_SYM  */
    DEALLOCATE_SYM = 670,          /* DEALLOCATE_SYM  */
    DEFINER_SYM = 671,             /* DEFINER_SYM  */
    DELAYED_SYM = 672,             /* DELAYED_SYM  */
    DELAY_KEY_WRITE_SYM = 673,     /* DELAY_KEY_WRITE_SYM  */
    DES_KEY_FILE = 674,            /* DES_KEY_FILE  */
    DIAGNOSTICS_SYM = 675,         /* DIAGNOSTICS_SYM  */
    DIRECTORY_SYM = 676,           /* DIRECTORY_SYM  */
    DISABLE_SYM = 677,             /* DISABLE_SYM  */
    DISCARD = 678,                 /* DISCARD  */
    DISK_SYM = 679,                /* DISK_SYM  */
    DO_SYM = 680,                  /* DO_SYM  */
    DUMPFILE = 681,                /* DUMPFILE  */
    DUPLICATE_SYM = 682,           /* DUPLICATE_SYM  */
    DYNAMIC_SYM = 683,             /* DYNAMIC_SYM  */
    ENABLE_SYM = 684,              /* ENABLE_SYM  */
    END = 685,                     /* END  */
    ENDS_SYM = 686,                /* ENDS_SYM  */
    ENGINES_SYM = 687,             /* ENGINES_SYM  */
    ENGINE_SYM = 688,              /* ENGINE_SYM  */
    ENUM = 689,                    /* ENUM  */
    ERROR_SYM = 690,               /* ERROR_SYM  */
    ERRORS = 691,                  /* ERRORS  */
    ESCAPE_SYM = 692,              /* ESCAPE_SYM  */
    EVENTS_SYM = 693,              /* EVENTS_SYM  */
    EVENT_SYM = 694,               /* EVENT_SYM  */
    EVERY_SYM = 695,               /* EVERY_SYM  */
    EXCHANGE_SYM = 696,            /* EXCHANGE_SYM  */
    EXAMINED_SYM = 697,            /* EXAMINED_SYM  */
    EXCLUDE_SYM = 698,             /* EXCLUDE_SYM  */
    EXECUTE_SYM = 699,             /* EXECUTE_SYM  */
    EXCEPTION_MARIADB_SYM = 700,   /* EXCEPTION_MARIADB_SYM  */
    EXIT_MARIADB_SYM = 701,        /* EXIT_MARIADB_SYM  */
    EXIT_ORACLE_SYM = 702,         /* EXIT_ORACLE_SYM  */
    EXPANSION_SYM = 703,           /* EXPANSION_SYM  */
    EXPIRE_SYM = 704,              /* EXPIRE_SYM  */
    EXPORT_SYM = 705,              /* EXPORT_SYM  */
    EXTENDED_SYM = 706,            /* EXTENDED_SYM  */
    EXTENT_SIZE_SYM = 707,         /* EXTENT_SIZE_SYM  */
    FAST_SYM = 708,                /* FAST_SYM  */
    FAULTS_SYM = 709,              /* FAULTS_SYM  */
    FEDERATED_SYM = 710,           /* FEDERATED_SYM  */
    FILE_SYM = 711,                /* FILE_SYM  */
    FIRST_SYM = 712,               /* FIRST_SYM  */
    FIXED_SYM = 713,               /* FIXED_SYM  */
    FLUSH_SYM = 714,               /* FLUSH_SYM  */
    FOLLOWS_SYM = 715,             /* FOLLOWS_SYM  */
    FOLLOWING_SYM = 716,           /* FOLLOWING_SYM  */
    FORCE_SYM = 717,               /* FORCE_SYM  */
    FORMAT_SYM = 718,              /* FORMAT_SYM  */
    FOUND_SYM = 719,               /* FOUND_SYM  */
    FULL = 720,                    /* FULL  */
    FUNCTION_SYM = 721,            /* FUNCTION_SYM  */
    GENERAL = 722,                 /* GENERAL  */
    GENERATED_SYM = 723,           /* GENERATED_SYM  */
    GET_FORMAT = 724,              /* GET_FORMAT  */
    GET_SYM = 725,                 /* GET_SYM  */
    GLOBAL_SYM = 726,              /* GLOBAL_SYM  */
    GRANTS = 727,                  /* GRANTS  */
    HANDLER_SYM = 728,             /* HANDLER_SYM  */
    HARD_SYM = 729,                /* HARD_SYM  */
    HASH_SYM = 730,                /* HASH_SYM  */
    HELP_SYM = 731,                /* HELP_SYM  */
    HIGH_PRIORITY = 732,           /* HIGH_PRIORITY  */
    HISTORY_SYM = 733,             /* HISTORY_SYM  */
    HOST_SYM = 734,                /* HOST_SYM  */
    HOSTS_SYM = 735,               /* HOSTS_SYM  */
    HOUR_SYM = 736,                /* HOUR_SYM  */
    ID_SYM = 737,                  /* ID_SYM  */
    IDENTIFIED_SYM = 738,          /* IDENTIFIED_SYM  */
    IGNORE_SERVER_IDS_SYM = 739,   /* IGNORE_SERVER_IDS_SYM  */
    IMMEDIATE_SYM = 740,           /* IMMEDIATE_SYM  */
    IMPORT = 741,                  /* IMPORT  */
    INCREMENT_SYM = 742,           /* INCREMENT_SYM  */
    INDEXES = 743,                 /* INDEXES  */
    INITIAL_SIZE_SYM = 744,        /* INITIAL_SIZE_SYM  */
    INSERT_METHOD = 745,           /* INSERT_METHOD  */
    INSTALL_SYM = 746,             /* INSTALL_SYM  */
    INVOKER_SYM = 747,             /* INVOKER_SYM  */
    IO_SYM = 748,                  /* IO_SYM  */
    IPC_SYM = 749,                 /* IPC_SYM  */
    ISOLATION = 750,               /* ISOLATION  */
    ISOPEN_SYM = 751,              /* ISOPEN_SYM  */
    ISSUER_SYM = 752,              /* ISSUER_SYM  */
    INVISIBLE_SYM = 753,           /* INVISIBLE_SYM  */
    JSON_SYM = 754,                /* JSON_SYM  */
    KEY_BLOCK_SIZE = 755,          /* KEY_BLOCK_SIZE  */
    LANGUAGE_SYM = 756,            /* LANGUAGE_SYM  */
    LAST_SYM = 757,                /* LAST_SYM  */
    LAST_VALUE = 758,              /* LAST_VALUE  */
    LASTVAL_SYM = 759,             /* LASTVAL_SYM  */
    LEAVES = 760,                  /* LEAVES  */
    LESS_SYM = 761,                /* LESS_SYM  */
    LEVEL_SYM = 762,               /* LEVEL_SYM  */
    LIST_SYM = 763,                /* LIST_SYM  */
    LOCAL_SYM = 764,               /* LOCAL_SYM  */
    LOCKED_SYM = 765,              /* LOCKED_SYM  */
    LOCKS_SYM = 766,               /* LOCKS_SYM  */
    LOGFILE_SYM = 767,             /* LOGFILE_SYM  */
    LOGS_SYM = 768,                /* LOGS_SYM  */
    MASTER_CONNECT_RETRY_SYM = 769, /* MASTER_CONNECT_RETRY_SYM  */
    MASTER_DELAY_SYM = 770,        /* MASTER_DELAY_SYM  */
    MASTER_GTID_POS_SYM = 771,     /* MASTER_GTID_POS_SYM  */
    MASTER_HOST_SYM = 772,         /* MASTER_HOST_SYM  */
    MASTER_LOG_FILE_SYM = 773,     /* MASTER_LOG_FILE_SYM  */
    MASTER_LOG_POS_SYM = 774,      /* MASTER_LOG_POS_SYM  */
    MASTER_PASSWORD_SYM = 775,     /* MASTER_PASSWORD_SYM  */
    MASTER_PORT_SYM = 776,         /* MASTER_PORT_SYM  */
    MASTER_SERVER_ID_SYM = 777,    /* MASTER_SERVER_ID_SYM  */
    MASTER_SSL_CAPATH_SYM = 778,   /* MASTER_SSL_CAPATH_SYM  */
    MASTER_SSL_CA_SYM = 779,       /* MASTER_SSL_CA_SYM  */
    MASTER_SSL_CERT_SYM = 780,     /* MASTER_SSL_CERT_SYM  */
    MASTER_SSL_CIPHER_SYM = 781,   /* MASTER_SSL_CIPHER_SYM  */
    MASTER_SSL_CRL_SYM = 782,      /* MASTER_SSL_CRL_SYM  */
    MASTER_SSL_CRLPATH_SYM = 783,  /* MASTER_SSL_CRLPATH_SYM  */
    MASTER_SSL_KEY_SYM = 784,      /* MASTER_SSL_KEY_SYM  */
    MASTER_SSL_SYM = 785,          /* MASTER_SSL_SYM  */
    MASTER_SYM = 786,              /* MASTER_SYM  */
    MASTER_USER_SYM = 787,         /* MASTER_USER_SYM  */
    MASTER_USE_GTID_SYM = 788,     /* MASTER_USE_GTID_SYM  */
    MASTER_HEARTBEAT_PERIOD_SYM = 789, /* MASTER_HEARTBEAT_PERIOD_SYM  */
    MASTER_DEMOTE_TO_SLAVE_SYM = 790, /* MASTER_DEMOTE_TO_SLAVE_SYM  */
    MAX_CONNECTIONS_PER_HOUR = 791, /* MAX_CONNECTIONS_PER_HOUR  */
    MAX_QUERIES_PER_HOUR = 792,    /* MAX_QUERIES_PER_HOUR  */
    MAX_ROWS = 793,                /* MAX_ROWS  */
    MAX_SIZE_SYM = 794,            /* MAX_SIZE_SYM  */
    MAX_UPDATES_PER_HOUR = 795,    /* MAX_UPDATES_PER_HOUR  */
    MAX_STATEMENT_TIME_SYM = 796,  /* MAX_STATEMENT_TIME_SYM  */
    MAX_USER_CONNECTIONS_SYM = 797, /* MAX_USER_CONNECTIONS_SYM  */
    MEDIUM_SYM = 798,              /* MEDIUM_SYM  */
    MEMORY_SYM = 799,              /* MEMORY_SYM  */
    MERGE_SYM = 800,               /* MERGE_SYM  */
    MESSAGE_TEXT_SYM = 801,        /* MESSAGE_TEXT_SYM  */
    MICROSECOND_SYM = 802,         /* MICROSECOND_SYM  */
    MIGRATE_SYM = 803,             /* MIGRATE_SYM  */
    MINUTE_SYM = 804,              /* MINUTE_SYM  */
    MINVALUE_SYM = 805,            /* MINVALUE_SYM  */
    MIN_ROWS = 806,                /* MIN_ROWS  */
    MODE_SYM = 807,                /* MODE_SYM  */
    MODIFY_SYM = 808,              /* MODIFY_SYM  */
    MONITOR_SYM = 809,             /* MONITOR_SYM  */
    MONTH_SYM = 810,               /* MONTH_SYM  */
    MUTEX_SYM = 811,               /* MUTEX_SYM  */
    MYSQL_SYM = 812,               /* MYSQL_SYM  */
    MYSQL_ERRNO_SYM = 813,         /* MYSQL_ERRNO_SYM  */
    NAMES_SYM = 814,               /* NAMES_SYM  */
    NAME_SYM = 815,                /* NAME_SYM  */
    NATIONAL_SYM = 816,            /* NATIONAL_SYM  */
    NCHAR_SYM = 817,               /* NCHAR_SYM  */
    NEVER_SYM = 818,               /* NEVER_SYM  */
    NEXT_SYM = 819,                /* NEXT_SYM  */
    NEXTVAL_SYM = 820,             /* NEXTVAL_SYM  */
    NOCACHE_SYM = 821,             /* NOCACHE_SYM  */
    NOCYCLE_SYM = 822,             /* NOCYCLE_SYM  */
    NODEGROUP_SYM = 823,           /* NODEGROUP_SYM  */
    NONE_SYM = 824,                /* NONE_SYM  */
    NOTFOUND_SYM = 825,            /* NOTFOUND_SYM  */
    NO_SYM = 826,                  /* NO_SYM  */
    NOMAXVALUE_SYM = 827,          /* NOMAXVALUE_SYM  */
    NOMINVALUE_SYM = 828,          /* NOMINVALUE_SYM  */
    NO_WAIT_SYM = 829,             /* NO_WAIT_SYM  */
    NOWAIT_SYM = 830,              /* NOWAIT_SYM  */
    NUMBER_MARIADB_SYM = 831,      /* NUMBER_MARIADB_SYM  */
    NUMBER_ORACLE_SYM = 832,       /* NUMBER_ORACLE_SYM  */
    NVARCHAR_SYM = 833,            /* NVARCHAR_SYM  */
    OF_SYM = 834,                  /* OF_SYM  */
    OFFSET_SYM = 835,              /* OFFSET_SYM  */
    OLD_PASSWORD_SYM = 836,        /* OLD_PASSWORD_SYM  */
    ONE_SYM = 837,                 /* ONE_SYM  */
    ONLY_SYM = 838,                /* ONLY_SYM  */
    ONLINE_SYM = 839,              /* ONLINE_SYM  */
    OPEN_SYM = 840,                /* OPEN_SYM  */
    OPTIONS_SYM = 841,             /* OPTIONS_SYM  */
    OPTION = 842,                  /* OPTION  */
    OVERLAPS_SYM = 843,            /* OVERLAPS_SYM  */
    OWNER_SYM = 844,               /* OWNER_SYM  */
    PACK_KEYS_SYM = 845,           /* PACK_KEYS_SYM  */
    PAGE_SYM = 846,                /* PAGE_SYM  */
    PARSER_SYM = 847,              /* PARSER_SYM  */
    PARTIAL = 848,                 /* PARTIAL  */
    PARTITIONS_SYM = 849,          /* PARTITIONS_SYM  */
    PARTITIONING_SYM = 850,        /* PARTITIONING_SYM  */
    PASSWORD_SYM = 851,            /* PASSWORD_SYM  */
    PERIOD_SYM = 852,              /* PERIOD_SYM  */
    PERSISTENT_SYM = 853,          /* PERSISTENT_SYM  */
    PHASE_SYM = 854,               /* PHASE_SYM  */
    PLUGINS_SYM = 855,             /* PLUGINS_SYM  */
    PLUGIN_SYM = 856,              /* PLUGIN_SYM  */
    PORT_SYM = 857,                /* PORT_SYM  */
    PRECEDES_SYM = 858,            /* PRECEDES_SYM  */
    PRECEDING_SYM = 859,           /* PRECEDING_SYM  */
    PREPARE_SYM = 860,             /* PREPARE_SYM  */
    PRESERVE_SYM = 861,            /* PRESERVE_SYM  */
    PREV_SYM = 862,                /* PREV_SYM  */
    PREVIOUS_SYM = 863,            /* PREVIOUS_SYM  */
    PRIVILEGES = 864,              /* PRIVILEGES  */
    PROCESS = 865,                 /* PROCESS  */
    PROCESSLIST_SYM = 866,         /* PROCESSLIST_SYM  */
    PROFILE_SYM = 867,             /* PROFILE_SYM  */
    PROFILES_SYM = 868,            /* PROFILES_SYM  */
    PROXY_SYM = 869,               /* PROXY_SYM  */
    QUARTER_SYM = 870,             /* QUARTER_SYM  */
    QUERY_SYM = 871,               /* QUERY_SYM  */
    QUICK = 872,                   /* QUICK  */
    RAW_MARIADB_SYM = 873,         /* RAW_MARIADB_SYM  */
    RAW_ORACLE_SYM = 874,          /* RAW_ORACLE_SYM  */
    READ_ONLY_SYM = 875,           /* READ_ONLY_SYM  */
    REBUILD_SYM = 876,             /* REBUILD_SYM  */
    RECOVER_SYM = 877,             /* RECOVER_SYM  */
    REDOFILE_SYM = 878,            /* REDOFILE_SYM  */
    REDO_BUFFER_SIZE_SYM = 879,    /* REDO_BUFFER_SIZE_SYM  */
    REDUNDANT_SYM = 880,           /* REDUNDANT_SYM  */
    RELAY = 881,                   /* RELAY  */
    RELAYLOG_SYM = 882,            /* RELAYLOG_SYM  */
    RELAY_LOG_FILE_SYM = 883,      /* RELAY_LOG_FILE_SYM  */
    RELAY_LOG_POS_SYM = 884,       /* RELAY_LOG_POS_SYM  */
    RELAY_THREAD = 885,            /* RELAY_THREAD  */
    RELOAD = 886,                  /* RELOAD  */
    REMOVE_SYM = 887,              /* REMOVE_SYM  */
    REORGANIZE_SYM = 888,          /* REORGANIZE_SYM  */
    REPAIR = 889,                  /* REPAIR  */
    REPEATABLE_SYM = 890,          /* REPEATABLE_SYM  */
    REPLAY_SYM = 891,              /* REPLAY_SYM  */
    REPLICATION = 892,             /* REPLICATION  */
    RESET_SYM = 893,               /* RESET_SYM  */
    RESTART_SYM = 894,             /* RESTART_SYM  */
    RESOURCES = 895,               /* RESOURCES  */
    RESTORE_SYM = 896,             /* RESTORE_SYM  */
    RESUME_SYM = 897,              /* RESUME_SYM  */
    RETURNED_SQLSTATE_SYM = 898,   /* RETURNED_SQLSTATE_SYM  */
    RETURNS_SYM = 899,             /* RETURNS_SYM  */
    REUSE_SYM = 900,               /* REUSE_SYM  */
    REVERSE_SYM = 901,             /* REVERSE_SYM  */
    ROLE_SYM = 902,                /* ROLE_SYM  */
    ROLLBACK_SYM = 903,            /* ROLLBACK_SYM  */
    ROLLUP_SYM = 904,              /* ROLLUP_SYM  */
    ROUTINE_SYM = 905,             /* ROUTINE_SYM  */
    ROWCOUNT_SYM = 906,            /* ROWCOUNT_SYM  */
    ROW_SYM = 907,                 /* ROW_SYM  */
    ROW_COUNT_SYM = 908,           /* ROW_COUNT_SYM  */
    ROW_FORMAT_SYM = 909,          /* ROW_FORMAT_SYM  */
    RTREE_SYM = 910,               /* RTREE_SYM  */
    SAVEPOINT_SYM = 911,           /* SAVEPOINT_SYM  */
    SCHEDULE_SYM = 912,            /* SCHEDULE_SYM  */
    SCHEMA_NAME_SYM = 913,         /* SCHEMA_NAME_SYM  */
    SECOND_SYM = 914,              /* SECOND_SYM  */
    SECURITY_SYM = 915,            /* SECURITY_SYM  */
    SEQUENCE_SYM = 916,            /* SEQUENCE_SYM  */
    SERIALIZABLE_SYM = 917,        /* SERIALIZABLE_SYM  */
    SERIAL_SYM = 918,              /* SERIAL_SYM  */
    SESSION_SYM = 919,             /* SESSION_SYM  */
    SESSION_USER_SYM = 920,        /* SESSION_USER_SYM  */
    SERVER_SYM = 921,              /* SERVER_SYM  */
    SETVAL_SYM = 922,              /* SETVAL_SYM  */
    SHARE_SYM = 923,               /* SHARE_SYM  */
    SHUTDOWN = 924,                /* SHUTDOWN  */
    SIGNED_SYM = 925,              /* SIGNED_SYM  */
    SIMPLE_SYM = 926,              /* SIMPLE_SYM  */
    SKIP_SYM = 927,                /* SKIP_SYM  */
    SLAVE = 928,                   /* SLAVE  */
    SLAVES = 929,                  /* SLAVES  */
    SLAVE_POS_SYM = 930,           /* SLAVE_POS_SYM  */
    SLOW = 931,                    /* SLOW  */
    SNAPSHOT_SYM = 932,            /* SNAPSHOT_SYM  */
    SOCKET_SYM = 933,              /* SOCKET_SYM  */
    SOFT_SYM = 934,                /* SOFT_SYM  */
    SONAME_SYM = 935,              /* SONAME_SYM  */
    SOUNDS_SYM = 936,              /* SOUNDS_SYM  */
    SOURCE_SYM = 937,              /* SOURCE_SYM  */
    SQL_AFTER_GTIDS_SYM = 938,     /* SQL_AFTER_GTIDS_SYM  */
    SQL_BEFORE_GTIDS_SYM = 939,    /* SQL_BEFORE_GTIDS_SYM  */
    SQL_BUFFER_RESULT = 940,       /* SQL_BUFFER_RESULT  */
    SQL_CACHE_SYM = 941,           /* SQL_CACHE_SYM  */
    SQL_CALC_FOUND_ROWS = 942,     /* SQL_CALC_FOUND_ROWS  */
    SQL_NO_CACHE_SYM = 943,        /* SQL_NO_CACHE_SYM  */
    SQL_THREAD = 944,              /* SQL_THREAD  */
    STAGE_SYM = 945,               /* STAGE_SYM  */
    STARTS_SYM = 946,              /* STARTS_SYM  */
    START_SYM = 947,               /* START_SYM  */
    STATEMENT_SYM = 948,           /* STATEMENT_SYM  */
    STATUS_SYM = 949,              /* STATUS_SYM  */
    STOP_SYM = 950,                /* STOP_SYM  */
    STORAGE_SYM = 951,             /* STORAGE_SYM  */
    STORED_SYM = 952,              /* STORED_SYM  */
    STRING_SYM = 953,              /* STRING_SYM  */
    SUBCLASS_ORIGIN_SYM = 954,     /* SUBCLASS_ORIGIN_SYM  */
    SUBDATE_SYM = 955,             /* SUBDATE_SYM  */
    SUBJECT_SYM = 956,             /* SUBJECT_SYM  */
    SUBPARTITIONS_SYM = 957,       /* SUBPARTITIONS_SYM  */
    SUBPARTITION_SYM = 958,        /* SUBPARTITION_SYM  */
    SUPER_SYM = 959,               /* SUPER_SYM  */
    SUSPEND_SYM = 960,             /* SUSPEND_SYM  */
    SWAPS_SYM = 961,               /* SWAPS_SYM  */
    SWITCHES_SYM = 962,            /* SWITCHES_SYM  */
    SYSTEM = 963,                  /* SYSTEM  */
    SYSTEM_TIME_SYM = 964,         /* SYSTEM_TIME_SYM  */
    TABLES = 965,                  /* TABLES  */
    TABLESPACE = 966,              /* TABLESPACE  */
    TABLE_CHECKSUM_SYM = 967,      /* TABLE_CHECKSUM_SYM  */
    TABLE_NAME_SYM = 968,          /* TABLE_NAME_SYM  */
    TEMPORARY = 969,               /* TEMPORARY  */
    TEMPTABLE_SYM = 970,           /* TEMPTABLE_SYM  */
    TEXT_SYM = 971,                /* TEXT_SYM  */
    THAN_SYM = 972,                /* THAN_SYM  */
    TIES_SYM = 973,                /* TIES_SYM  */
    TIMESTAMP = 974,               /* TIMESTAMP  */
    TIMESTAMP_ADD = 975,           /* TIMESTAMP_ADD  */
    TIMESTAMP_DIFF = 976,          /* TIMESTAMP_DIFF  */
    TIME_SYM = 977,                /* TIME_SYM  */
    TRANSACTION_SYM = 978,         /* TRANSACTION_SYM  */
    TRANSACTIONAL_SYM = 979,       /* TRANSACTIONAL_SYM  */
    THREADS_SYM = 980,             /* THREADS_SYM  */
    TRIGGERS_SYM = 981,            /* TRIGGERS_SYM  */
    TRIM_ORACLE = 982,             /* TRIM_ORACLE  */
    TRUNCATE_SYM = 983,            /* TRUNCATE_SYM  */
    TYPE_SYM = 984,                /* TYPE_SYM  */
    UDF_RETURNS_SYM = 985,         /* UDF_RETURNS_SYM  */
    UNBOUNDED_SYM = 986,           /* UNBOUNDED_SYM  */
    UNCOMMITTED_SYM = 987,         /* UNCOMMITTED_SYM  */
    UNDEFINED_SYM = 988,           /* UNDEFINED_SYM  */
    UNDOFILE_SYM = 989,            /* UNDOFILE_SYM  */
    UNDO_BUFFER_SIZE_SYM = 990,    /* UNDO_BUFFER_SIZE_SYM  */
    UNICODE_SYM = 991,             /* UNICODE_SYM  */
    UNINSTALL_SYM = 992,           /* UNINSTALL_SYM  */
    UNKNOWN_SYM = 993,             /* UNKNOWN_SYM  */
    UNTIL_SYM = 994,               /* UNTIL_SYM  */
    UPGRADE_SYM = 995,             /* UPGRADE_SYM  */
    USER_SYM = 996,                /* USER_SYM  */
    USE_FRM = 997,                 /* USE_FRM  */
    VALIDATION_SYM = 998,          /* VALIDATION_SYM  */
    VALUE_SYM = 999,               /* VALUE_SYM  */
    VARCHAR2_MARIADB_SYM = 1000,   /* VARCHAR2_MARIADB_SYM  */
    VARCHAR2_ORACLE_SYM = 1001,    /* VARCHAR2_ORACLE_SYM  */
    VARIABLES = 1002,              /* VARIABLES  */
    VERSIONING_SYM = 1003,         /* VERSIONING_SYM  */
    VIA_SYM = 1004,                /* VIA_SYM  */
    VIEW_SYM = 1005,               /* VIEW_SYM  */
    VISIBLE_SYM = 1006,            /* VISIBLE_SYM  */
    VIRTUAL_SYM = 1007,            /* VIRTUAL_SYM  */
    WAIT_SYM = 1008,               /* WAIT_SYM  */
    WARNINGS = 1009,               /* WARNINGS  */
    WEEK_SYM = 1010,               /* WEEK_SYM  */
    WEIGHT_STRING_SYM = 1011,      /* WEIGHT_STRING_SYM  */
    WINDOW_SYM = 1012,             /* WINDOW_SYM  */
    WITHIN = 1013,                 /* WITHIN  */
    WITHOUT = 1014,                /* WITHOUT  */
    WORK_SYM = 1015,               /* WORK_SYM  */
    WRAPPER_SYM = 1016,            /* WRAPPER_SYM  */
    WRITE_SYM = 1017,              /* WRITE_SYM  */
    X509_SYM = 1018,               /* X509_SYM  */
    XA_SYM = 1019,                 /* XA_SYM  */
    XML_SYM = 1020,                /* XML_SYM  */
    YEAR_SYM = 1021,               /* YEAR_SYM  */
    CONDITIONLESS_JOIN = 1022,     /* CONDITIONLESS_JOIN  */
    ON_SYM = 1023,                 /* ON_SYM  */
    PREC_BELOW_NOT = 1024,         /* PREC_BELOW_NOT  */
    SUBQUERY_AS_EXPR = 1025,       /* SUBQUERY_AS_EXPR  */
    PREC_BELOW_IDENTIFIER_OPT_SPECIAL_CASE = 1026, /* PREC_BELOW_IDENTIFIER_OPT_SPECIAL_CASE  */
    USER = 1027,                   /* USER  */
    PREC_BELOW_SP_OBJECT_TYPE = 1028, /* PREC_BELOW_SP_OBJECT_TYPE  */
    PREC_BELOW_CONTRACTION_TOKEN2 = 1029, /* PREC_BELOW_CONTRACTION_TOKEN2  */
    EMPTY_FROM_CLAUSE = 1030       /* EMPTY_FROM_CLAUSE  */
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
  /*
    Longlong_hybrid does not have a default constructor, hence the
    default value below.
  */
  Longlong_hybrid longlong_hybrid_number= Longlong_hybrid(0, false);

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
  class sp_record *sprec;
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
  enum Alter_info::enum_alter_table_algorithm alter_table_algo_val;
  privilege_t privilege;
  struct
  {
    Item *expr;
    LEX_CSTRING expr_str;
  } expr_and_query_str;

#line 989 "/home/buildbot/git/mkdist/sql/yy_mariadb.hh"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int MYSQLparse (THD *thd);


#endif /* !YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_YY_MARIADB_HH_INCLUDED  */
