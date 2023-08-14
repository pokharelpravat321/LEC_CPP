#include<iostream>
using namespace std;

class base {
public:
    base() {
        cout << "Default constructor from base class" << endl;
    }

    base(int data) {
        cout << "Parameterized constructor from base class" << endl;
    }
};

class derived : public base {
public:
    derived(int data) {
        cout << "Parameterized constructor from derived class" << endl;
    }
};

int main() {
    derived d(5);
    return 0;
}