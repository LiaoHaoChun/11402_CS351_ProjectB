# 04 Test Plan

## 1. Purpose

This document describes the test plan for ProjectB - CSV Student Query Engine.

The goal of testing is to verify that the program can correctly load CSV files, parse student records, and perform query operations.

## 2. Test Environment

Recommended test environment:

- Operating System: Windows, Linux, or macOS
- Compiler: g++
- C++ Standard: C++17
- Terminal or VS Code integrated terminal

Compile command:

```bash
g++ -std=c++17 src/main.cpp src/index.cpp src/csv_parser.cpp src/query_engine.cpp -o projectB