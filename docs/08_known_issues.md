# 08 Known Issues

## 1. Limited CSV Format Support

The current parser supports basic CSV fields and quoted fields, but it may not support every possible CSV edge case.

Examples of unsupported or partially supported cases:

- Multiline quoted fields
- Escaped quotation marks inside quoted fields
- Different delimiters such as semicolon

## 2. No Data Editing

The program only supports reading and searching student records.

It does not support:

- Adding new records
- Editing existing records
- Deleting records
- Saving modified records

## 3. No Advanced Query Language

The query engine only supports simple searches.

It does not support advanced SQL-like queries such as:

```sql
SELECT * FROM students WHERE major = 'Computer Science' AND year = 3;