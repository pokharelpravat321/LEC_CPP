#include<iostream>
using namespace std;

class base_one {
public:
    base_one() {
        cout << "Base one class constructor" << endl;
    }
};

class base_two {
public:
    base_two() {
        cout << "Base two class constructor" << endl;
    }
};

class derived : public base_two, public base_one {
public:
    derived() {
        cout << "Derived class constructor" << endl;
    }
};

int main() {
    derived d;
    return 0;
}