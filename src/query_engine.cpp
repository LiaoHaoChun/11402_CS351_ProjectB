#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string id;
    string name;
    string major;
    int year;
};

string toLowerCase(string text) {
    transform(text.begin(), text.end(), text.begin(),
        [](unsigned char c) {
            return tolower(c);
        });

    return text;
}

vector<Student> searchByID(const vector<Student>& students, const string& id) {
    vector<Student> results;

    for (const Student& student : students) {
        if (student.id == id) {
            results.push_back(student);
        }
    }

    return results;
}

vector<Student> searchByName(const vector<Student>& students, const string& keyword) {
    vector<Student> results;
    string lowerKeyword = toLowerCase(keyword);

    for (const Student& student : students) {
        string lowerName = toLowerCase(student.name);

        if (lowerName.find(lowerKeyword) != string::npos) {
            results.push_back(student);
        }
    }

    return results;
}

vector<Student> searchByMajor(const vector<Student>& students, const string& keyword) {
    vector<Student> results;
    string lowerKeyword = toLowerCase(keyword);

    for (const Student& student : students) {
        string lowerMajor = toLowerCase(student.major);

        if (lowerMajor.find(lowerKeyword) != string::npos) {
            results.push_back(student);
        }
    }

    return results;
}