# 03 Software Design Specification

## 1. Overview

This document describes the software design of ProjectB - CSV Student Query Engine.

The program is divided into several source files to improve readability and maintainability.

## 2. Architecture

The project uses a simple modular design.

```txt
main.cpp
   |
   | uses
   v
csv_parser.cpp  ---> reads and parses CSV files
   |
   v
index.cpp       ---> defines Student structure and display functions
   |
   v
query_engine.cpp ---> performs search operations