#include<iostream>
using namespace std;

class student {
public:
    int age;
    char name[20];

    void getinfo() {
        cin >> name;
        cout << "Name of student: " << name << endl;
        cin >> age;
        cout << "Age of student: " << age << endl;
    }
};

int main() {
    int i;
    student s1[5];
    for (i = 0; i < 5; i++) {
        s1[i].getinfo();
    }
    return 0;
}