#ifndef CSV_PARSER_H
#define CSV_PARSER_H

#include <string>
#include <vector>
#include "index.h"

using namespace std;

vector<string> parseCSVLine(const string& line);
vector<Student> loadStudentsFromCSV(const string& filePath);

#endif