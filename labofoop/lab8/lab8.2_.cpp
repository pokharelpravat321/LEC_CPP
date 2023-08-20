#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Student {
public:
    Student(const string& n, const string& a, const string& p)
        : name(n), address(a), program(p) {}

    friend ostream& operator<<(ostream& os, const Student& student) {
        os << "Name: " << student.name << "\n"
           << "Address: " << student.address << "\n"
           << "Program: " << student.program;
        return os;
    }

    friend istream& operator>>(istream& is, Student& student) {
        cout << "Enter name: ";
        getline(is, student.name);
        cout << "Enter address: ";
        getline(is, student.address);
        cout << "Enter program: ";
        getline(is, student.program);
        return is;
    }

private:
    string name;
    string address;
    string program;
};

int main() {
    fstream file("student_records.txt", ios::out | ios::app);

    if (!file.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    int choice;
    cout << "1. Store student information\n2. Display student information by name\nEnter your choice: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        Student student("", "", "");
        cin >> student;
        file << student << "\n";
    } else if (choice == 2) {
        string searchName;
        cout << "Enter student name to display information: ";
        getline(cin, searchName);

        ifstream readFile("student_records.txt");
        if (readFile.is_open()) {
            string line;
            bool found = false;
            while (getline(readFile, line)) {
                if (line.find("Name: " + searchName) != string::npos) {
                    cout << line << "\n";
                    for (int i = 0; i < 2; ++i) {
                        getline(readFile, line);
                        cout << line << "\n";
                    }
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student with name '" << searchName << "' not found." << endl;
            }

            readFile.close();
        } else {
            cout << "Unable to open file for reading." << endl;
        }
    } else {
        cout << "Invalid choice." << endl;
    }

    file.close();
    return 0;
}
