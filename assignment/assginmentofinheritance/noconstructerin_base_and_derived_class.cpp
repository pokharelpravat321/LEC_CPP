#include<iostream>
using namespace std;

class Base {
    // body of base class
    // no constructor
};

class Derived : public Base {
    // body of derived class
    // no constructor
public:
    void message() {
        cout << "No constructor in base and derived class" << endl;
    }
};

int main() {
    Derived d;
    d.message();
    
    return 0;
}