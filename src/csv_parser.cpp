#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string id;
    string name;
    string major;
    int year;
};

vector<string> parseCSVLine(const string& line) {
    vector<string> fields;
    string currentField;
    bool insideQuotes = false;

    for (char ch : line) {
        if (ch == '"') {
            insideQuotes = !insideQuotes;
        }
        else if (ch == ',' && !insideQuotes) {
            fields.push_back(currentField);
            currentField.clear();
        }
        else {
            currentField += ch;
        }
    }

    fields.push_back(currentField);

    return fields;
}

vector<Student> loadStudentsFromCSV(const string& filePath) {
    vector<Student> students;
    ifstream file(filePath);

    if (!file.is_open()) {
        cout << "Error: Cannot open file: " << filePath << endl;
        return students;
    }

    string line;

    // Skip header row
    getline(file, line);

    while (getline(file, line)) {
        if (line.empty()) {
            continue;
        }

        vector<string> fields = parseCSVLine(line);

        if (fields.size() != 4) {
            cout << "Warning: Skipping invalid row: " << line << endl;
            continue;
        }

        Student student;
        student.id = fields[0];
        student.name = fields[1];
        student.major = fields[2];

        try {
            student.year = stoi(fields[3]);
        }
        catch (...) {
            cout << "Warning: Invalid year value. Row skipped: " << line << endl;
            continue;
        }

        students.push_back(student);
    }

    file.close();

    return students;
}