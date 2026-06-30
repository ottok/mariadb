## Dynamic Column Error Codes

Error codes are defined as enum in `enum enum_dyncol_func_result`.

|Value | Name | Description
|-|-|-
| 0      | `ER_DYNCOL_OK` | OK
| 0      | `ER_DYNCOL_NO` | (the same as `ER_DYNCOL_OK` but for functions which return a YES/NO)
| 1      | `ER_DYNCOL_YES` | YES response or success
| 2      | `ER_DYNCOL_TRUNCATED` | Operation succeeded but the data was truncated
| -1     | `ER_DYNCOL_FORMAT` | Wrong format of the encoded string
| -2     | `ER_DYNCOL_LIMIT` | A limit of implementation reached
| -3     | `ER_DYNCOL_RESOURCE` | Out of resources
| -4     | `ER_DYNCOL_DATA` | Incorrect input data
| -5     | `ER_DYNCOL_UNKNOWN_CHARSET` | Unknown character set