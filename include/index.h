#ifndef INDEX_H
#define INDEX_H

#include <string>
#include <vector>

using namespace std;

struct Student {
    string id;
    string name;
    string major;
    int year;
};

void printStudent(const Student& student);
void printStudentHeader();
void printAllStudents(const vector<Student>& students);

#endif