#include <iostream>
using namespace std;

class Base {
    // Body of Base class
};

class Derived : public Base {
public:
    Derived() {
        cout << "Default constructor from derived class" << endl;
    }
};

int main() {
    Derived d;
    return 0;
}