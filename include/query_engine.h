#ifndef QUERY_ENGINE_H
#define QUERY_ENGINE_H

#include <string>
#include <vector>
#include "index.h"

using namespace std;

string toLowerCase(string text);
vector<Student> searchByID(const vector<Student>& students, const string& id);
vector<Student> searchByName(const vector<Student>& students, const string& keyword);
vector<Student> searchByMajor(const vector<Student>& students, const string& keyword);

#endif