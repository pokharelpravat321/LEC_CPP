#include <iostream>
using namespace std;

class Student {
protected:
    int studID;
    char name[25];

public:
    void getStData() {
        cout << "Enter Student ID: ";
        cin >> studID;
        cout << "Enter name: ";
        cin >> name;
    }

    void showStData() {
        cout << "Student ID: " << studID << endl;
        cout << "Name: " << name << endl;
    }
};

class InternalExam : virtual public Student {
protected:
    int marks1, marks2, marks3;

public:
    void getData() {
        cout << "Enter Internal marks in three subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    void showData() {
        cout << "Internal Marks in Subject 1: " << marks1 << endl;
        cout << "Internal Marks in Subject 2: " << marks2 << endl;
        cout << "Internal Marks in Subject 3: " << marks3 << endl;
    }

    int totInternalMarks() {
        return (marks1 + marks2 + marks3);
    }
};

class ExternalExam : virtual public Student {
protected:
    int marks1, marks2, marks3;

public:
    void getData() {
        cout << "Enter External marks in three subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    void showData() {
        cout << "External Marks in Subject 1: " << marks1 << endl;
        cout << "External Marks in Subject 2: " << marks2 << endl;
        cout << "External Marks in Subject 3: " << marks3 << endl;
    }

    int totExternalMarks() {
        return (marks1 + marks2 + marks3);
    }
};

class Result : public InternalExam, public ExternalExam {
public:
    void getData() {
        InternalExam::getData();
        ExternalExam::getData();
    }

    void showData() {
        InternalExam::showData();
        ExternalExam::showData();
    }

    int totalMarks() {
        return (totInternalMarks() + totExternalMarks());
    }
};

int main() {
    Result r;
    cout << "Enter data for student:" << endl;
    r.getStData();
    cout << "\nEnter marks:" << endl;
    r.getData();
    cout << "\nData for the student is:" << endl;
    r.showStData();
    cout << "\nTotal Marks: " << r.totalMarks() << endl;

    return 0;
}