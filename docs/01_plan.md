# 01 Project Plan

## Project Overview

ProjectB is a C++ command-line CSV Student Query Engine. The program reads student records from CSV files and allows users to search and display student data.

This project follows a simple software development workflow:

1. Create tasks in Jira
2. Create repository and project structure in GitHub
3. Implement source code in VS Code
4. Commit changes using Git
5. Push code to GitHub
6. Test program behavior
7. Document results and known issues

## Objectives

The main objectives are:

- Build a simple C++ program using multiple source files
- Practice CSV parsing
- Practice command-line input and output
- Practice basic search functionality
- Practice software engineering documentation
- Practice GitHub workflow

## Planned Features

### Feature 1: CSV File Loading

The program should load student records from a CSV file.

### Feature 2: CSV Parsing

The program should parse normal CSV fields and quoted CSV fields.

### Feature 3: Display All Records

The program should display all loaded student records in the terminal.

### Feature 4: Search by ID

The program should allow users to search for a student using student ID.

### Feature 5: Search by Name

The program should allow users to search for students using a name keyword.

### Feature 6: Search by Major

The program should allow users to search for students by major.

## Tasks

| Task ID | Task Description | Status |
|---|---|---|
| T1 | Create project folder structure | Completed |
| T2 | Create documentation files | Completed |
| T3 | Create CSV test files | Completed |
| T4 | Implement CSV parser | In Progress |
| T5 | Implement query engine | In Progress |
| T6 | Implement main menu | In Progress |
| T7 | Test with normal CSV file | Not Started |
| T8 | Test with quoted CSV file | Not Started |
| T9 | Update README and documentation | Not Started |

## Development Schedule

| Phase | Description |
|---|---|
| Phase 1 | Set up Jira, GitHub, and VS Code project |
| Phase 2 | Write documentation and define requirements |
| Phase 3 | Implement CSV parser |
| Phase 4 | Implement query engine |
| Phase 5 | Write and run tests |
| Phase 6 | Final review and submission |

## Risks

| Risk | Possible Impact | Mitigation |
|---|---|---|
| CSV parsing may not handle quoted commas | Incorrect data parsing | Add quoted CSV test file |
| Program may fail if file path is incorrect | User cannot load data | Display clear error message |
| Source files may not compile together | Build failure | Provide clear compile command |
| Requirements may be incomplete | Missing expected behavior | Keep documentation updated |

## Tools

- Jira: Task planning
- GitHub: Version control and submission
- VS Code: Code editing
- g++: Compilation
- Terminal: Program execution