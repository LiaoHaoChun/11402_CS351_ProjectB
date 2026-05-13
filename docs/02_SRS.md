# 02 Software Requirements Specification

## 1. Introduction

This document describes the software requirements for ProjectB - CSV Student Query Engine.

The program is a command-line C++ application that reads student data from a CSV file and provides simple query functions.

## 2. Functional Requirements

### FR-1: Load CSV File

The system shall read student records from a CSV file.

Each record should contain the following fields:

- Student ID
- Name
- Major
- Year

### FR-2: Parse CSV Lines

The system shall parse CSV lines into separate fields.

The parser should support:

- Normal comma-separated fields
- Quoted fields
- Commas inside quoted fields

Example:

```csv
1104,"David, Jr.",Computer Science,2