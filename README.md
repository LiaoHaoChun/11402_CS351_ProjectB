# Project B: CSV Mini Database & Query Engine

## Overview

Project B is a small C++ program that works as a mini database and query engine for CSV files.

The program is designed to:

1. Load data from a CSV file.
2. Parse CSV records into rows and fields.
3. Support quoted fields in CSV data.
4. Build a simple in-memory index.
5. Execute simple query commands.
6. Display matching records to the user.

This project is intended to demonstrate an end-to-end software development workflow, including planning, repository setup, branching, pull requests, code review, and merge procedures.

## Project Goals

The main goals of this project are:

- Practice parsing CSV files in C++.
- Understand how tabular data can be stored in memory.
- Implement a simple search/query mechanism.
- Learn the basic idea of indexing for faster lookup.
- Follow a structured software development process using Jira, GitHub, and VSCode.

## Features

Current planned features include:

- Read a CSV file from disk.
- Parse rows and columns from CSV input.
- Handle basic quoted fields.
- Store CSV data in memory.
- Search records by column value.
- Build a simple index for one selected column.
- Execute simple text-based query commands.

## Example CSV File

Example file: `students.csv`

```csv
id,name,major,year
1001,Alice,CS,3
1002,Bob,EE,2
1003,Charlie,CS,4