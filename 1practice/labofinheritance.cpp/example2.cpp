#include <iostream>
using namespace std;

class Course {
protected:
    string courseName;
    int creditHours;

public:
    Course(string name, int credits) : courseName(name), creditHours(credits) {}

    virtual void showCourseInfo() {
        cout << "Course Name: " << courseName << endl;
        cout << "Credit Hours: " << creditHours << endl;
    }
};

class Mathematics : public Course {
public:
    Mathematics(string name, int credits) : Course(name, credits) {}

    void showCourseInfo() override {
        cout << "Mathematics Course Information" << endl;
        Course::showCourseInfo();
    }
};

class Science : public Course {
public:
    Science(string name, int credits) : Course(name, credits) {}

    void showCourseInfo() override {
        cout << "Science Course Information" << endl;
        Course::showCourseInfo();
    }
};

class Engineering : public Course {
public:
    Engineering(string name, int credits) : Course(name, credits) {}

    void showCourseInfo() override {
        cout << "Engineering Course Information" << endl;
        Course::showCourseInfo();
    }
};

class Physics : public Science {
public:
    Physics(string name, int credits) : Science(name, credits) {}

    void showCourseInfo() override {
        cout << "Physics Course Information" << endl;
        Science::showCourseInfo();
    }
};

class Chemistry : public Science {
public:
    Chemistry(string name, int credits) : Science(name, credits) {}

    void showCourseInfo() override {
        cout << "Chemistry Course Information" << endl;
        Science::showCourseInfo();
    }
};

int main() {
    Mathematics math("Advanced Calculus", 4);
    Science genericScience("General Science", 3);
    Engineering eng("Introduction to Engineering", 5);
    Physics physics("Quantum Mechanics", 3);
    Chemistry chemistry("Organic Chemistry", 4);

    math.showCourseInfo();
    cout << "----------------------------------" << endl;
    genericScience.showCourseInfo();
    cout << "----------------------------------" << endl;
    eng.showCourseInfo();
    cout << "----------------------------------" << endl;
    physics.showCourseInfo();
    cout << "----------------------------------" << endl;
    chemistry.showCourseInfo();

    return 0;
}



#include<iostream>
using namespace std;
class course{
    
}