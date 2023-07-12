#include<iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Default constructor from Base class" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Default constructor from Derived class" << endl;
    }
};

int main() {
    Derived d;
    return 0;
}