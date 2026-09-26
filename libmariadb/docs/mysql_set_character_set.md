## Name
mysql_set_character_set - Sets the default character set for connection

## Synopsis
```C
#include <mysql.h>

int mysql_set_character_set(MYSQL * mysql,
                            const char * csname);
```


## Description
Sets the default character setfor the current connection. Returns zero on success, non-zero on failure.

### Parameters
* `mysql` - a mysql handle, which was previously allocated by [mysql_init()](mysql_init) or [mysql_real_connect()](mysql_real_connect).
* `csname` - character set name
### Notes
* It's strongly recommended to use mysql_set_character_set() instead of `SET NAMES ...` since [mysql_real_escape_string()](mysql_real_escape_string) might fail or deliver unexpected results.


## Return value
Zero on success, non zero if an error occurred

## Supported character sets
The client library supports the following character sets:

| Character set | Description |
|--|--|
| armscii8 | 8 bit character set for Armenian |
| ascii | US ASCII character set |
| big5 | 2 byte character set for traditional Chinese, Hongkong, Macau and Taiwan |
| binary | 8 bit binary character set |
| cp1250 | Windows code page 1250 character set |
| cp1251 | Windows code page 1251 character set |
| cp1256 | Windows code page 1256 character set |
| cp1257 | Windows code page 1257 character set |
| cp850 | MS-DOS Codepage 850 (Western Europe) |
| cp852 | MS-DOS Codepage 852 (Middle Europe) |
| cp866 | MS-DOS Codepage 866 (Russian) |
| cp932 | Microsoft Codepage 932 (Extension to sjis) |
| dec8 | DEC West European |
| eucjpms | UJIS for Windows Japanese |
| euckr | EUC KR-Korean |
| gb2312 | GB-2312 simplified Chinese |
| gbk | GBK simplified Chinese |
| geostd8 | GEOSTD8 Georgian |
| greek | ISO 8859-7 Greek |
| hebrew | ISO 8859-8 Hebrew |
| hp8 | HP West European |
| keybcs2 | DOS Kamenicky Czech-Slovak |
| koi8r | KOI8-R Relcom Russian |
| koi8u | KOI8-U Ukrainian |
| latin1 | CP1252 Western European |
| latin2 | ISO 8859-2 Central Europe |
| latin5 | ISO 8859-9 Turkish |
| latin7 | ISO 8859-13 Baltic |
| macce | MAC Central European |
| macroman | MAC Western European |
| sjis | SJIS for Windows Japanese |
| swe7 | 7-bit Swedish |
| tis620 | TIS620 Thai |
| ucs2 | UCS-2 Unicode |
| ujis | EUC-JP Japanese |
| utf8 | UTF-8 Unicode |
| utf16 | UTF-16 Unicode |
| utf32 | UTF-32 Unicode |
| utf8mb4 | UTF 4-byte Unicode |

## See also
* [mysql_get_character_set_info()](mysql_get_character_set_info)
* [mysql_real_escape_string()](mysql_real_escape_string)
