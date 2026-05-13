# 06 Traceability Matrix

## Purpose

This document maps project requirements to design modules and test cases.

## Requirement Traceability Matrix

| Requirement ID | Requirement Description | Design Module | Test Case |
|---|---|---|---|
| FR-1 | Load CSV file | csv_parser.cpp | TC-2 |
| FR-2 | Parse normal and quoted CSV lines | csv_parser.cpp | TC-8 |
| FR-3 | Store student records | index.cpp, csv_parser.cpp | TC-2 |
| FR-4 | Display all students | index.cpp, main.cpp | TC-3 |
| FR-5 | Search by student ID | query_engine.cpp | TC-4, TC-5 |
| FR-6 | Search by name keyword | query_engine.cpp | TC-6 |
| FR-7 | Search by major | query_engine.cpp | TC-7 |
| FR-8 | Provide menu interface | main.cpp | TC-3 to TC-9 |
| FR-9 | Exit program safely | main.cpp | TC-9 |
| NFR-1 | Program written in C++ | All source files | TC-1 |
| NFR-2 | Compile using C++17 | Build command | TC-1 |
| NFR-3 | Clear terminal interface | main.cpp | Manual review |
| NFR-4 | Modular design | All source files | Manual review |
| NFR-5 | Include test files | tests folder | TC-2, TC-8 |

## Source File Responsibility Matrix

| Source File | Main Responsibility |
|---|---|
| main.cpp | Program entry point and menu control |
| index.cpp | Student structure support and display functions |
| csv_parser.cpp | CSV file reading and parsing |
| query_engine.cpp | Search and query functions |

## Test File Traceability

| Test File | Requirement Tested |
|---|---|
| tests/students.csv | FR-1, FR-3, FR-4, FR-5, FR-6, FR-7 |
| tests/quoted_students.csv | FR-2 |

## Notes

This matrix helps confirm that each requirement has a related implementation file and a related test case.