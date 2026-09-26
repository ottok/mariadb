## Dynamic Column types and definitions

### Dynamic column types
`enum enum_dynamic_column_type` defines the column types:

| type                | structure field       |
|-|-
| `DYN_COL_NULL`     | -                      |
| `DYN_COL_INT`      | `value.x.long_value` |
| `DYN_COL_UINT`     | `value.x.ulong_value` |
| `DYN_COL_DOUBLE`   | `value.x.double_value` |
| `DYN_COL_STRING`   | `value.x.string.value`, `value.x.string.charset` |
| `DYN_COL_DECIMAL`  | `value.x.decimal.value` |
| `DYN_COL_DATETIME` | `value.x.time_value` |
| `DYN_COL_DATE`     | `value.x.time_value` |
| `DYN_COL_TIME`     | `value.x.time_value` |
| `DYN_COL_DYNCOL`   | `value.x.string.value` |

#### Notes
* Values with type `DYN_COL_NULL` do not ever occur in dynamic columns blobs. 
* Type `DYN_COL_DYNCOL` means that the value is a packed dynamic blob. This is how nested dynamic columns are done.
* `DYN_COL_DECIMAL` type is not supported in MariaDB Connector/C yet, but in MariaDB Server >= 5.3

### Error codes
Most of dynamic column api functions return an error code, which is defined as `enum enum_dyncol_func_result`:

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



