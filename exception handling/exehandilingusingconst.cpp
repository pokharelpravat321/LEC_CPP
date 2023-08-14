#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called." << endl;
        throw runtime_error("Exception inside constructor.");
    }

    ~MyClass() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    try {
        MyClass obj;
    } catch (const exception &e) {
        cout << "Caught an exception: " << e.what() << endl;
    }

    cout << "Program continues after exception." << endl;

    return 0;
}
