#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string id;
    string name;
    string major;
    int year;
};

// Functions from csv_parser.cpp
vector<Student> loadStudentsFromCSV(const string& filePath);

// Functions from index.cpp
void printAllStudents(const vector<Student>& students);

// Functions from query_engine.cpp
vector<Student> searchByID(const vector<Student>& students, const string& id);
vector<Student> searchByName(const vector<Student>& students, const string& keyword);
vector<Student> searchByMajor(const vector<Student>& students, const string& keyword);

void showMenu() {
    cout << endl;
    cout << "===== CSV Student Query Engine =====" << endl;
    cout << "1. Display all students" << endl;
    cout << "2. Search by ID" << endl;
    cout << "3. Search by name" << endl;
    cout << "4. Search by major" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter choice: ";
}

int main() {
    string filePath;

    cout << "===== ProjectB: CSV Student Query Engine =====" << endl;
    cout << "Enter CSV file path: ";
    getline(cin, filePath);

    vector<Student> students = loadStudentsFromCSV(filePath);

    if (students.empty()) {
        cout << "No records loaded. Program ended." << endl;
        return 0;
    }

    cout << "Loaded " << students.size() << " student records." << endl;

    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            printAllStudents(students);
        }
        else if (choice == 2) {
            string id;
            cout << "Enter student ID: ";
            getline(cin, id);

            vector<Student> results = searchByID(students, id);

            if (results.empty()) {
                cout << "No student found with ID: " << id << endl;
            }
            else {
                printAllStudents(results);
            }
        }
        else if (choice == 3) {
            string keyword;
            cout << "Enter name keyword: ";
            getline(cin, keyword);

            vector<Student> results = searchByName(students, keyword);

            if (results.empty()) {
                cout << "No student found with name keyword: " << keyword << endl;
            }
            else {
                printAllStudents(results);
            }
        }
        else if (choice == 4) {
            string keyword;
            cout << "Enter major keyword: ";
            getline(cin, keyword);

            vector<Student> results = searchByMajor(students, keyword);

            if (results.empty()) {
                cout << "No student found with major keyword: " << keyword << endl;
            }
            else {
                printAllStudents(results);
            }
        }
        else if (choice == 0) {
            cout << "Program exited." << endl;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}