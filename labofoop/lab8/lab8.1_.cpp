#include <iostream>
#include <string>

class Student {
public:
    Student(const std::string& n, int a) : name(n), age(a) {}

    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        os << "Name: " << student.name << ", Age: " << student.age;
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Student& student) {
        std::cout << "Enter name: ";
        is >> student.name;
        std::cout << "Enter age: ";
        is >> student.age;
        return is;
    }

private:
    std::string name;
    int age;
};

int main() {
    using namespace std;

    Student student("Alice", 20);

    cout << "Student information: " << student << endl;

    Student newStudent;
    cout << "Enter new student information:" << endl;
    cin >> newStudent;

    cout << "New student information: " << newStudent << endl;

    return 0;
}