#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Default constructor from Base class" << endl;
    }
};

class Derived : public Base {
    // Body of Derived class
};

int main() {
    Derived d;
    return 0;
}