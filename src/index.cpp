#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Student {
    string id;
    string name;
    string major;
    int year;
};

void printStudent(const Student& student) {
    cout << left
         << setw(10) << student.id
         << setw(20) << student.name
         << setw(30) << student.major
         << setw(6) << student.year
         << endl;
}

void printStudentHeader() {
    cout << left
         << setw(10) << "ID"
         << setw(20) << "Name"
         << setw(30) << "Major"
         << setw(6) << "Year"
         << endl;

    cout << string(66, '-') << endl;
}

void printAllStudents(const vector<Student>& students) {
    if (students.empty()) {
        cout << "No student records found." << endl;
        return;
    }

    printStudentHeader();

    for (const Student& student : students) {
        printStudent(student);
    }
}