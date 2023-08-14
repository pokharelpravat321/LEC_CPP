
#include <iostream>
#include <stdexcept>

using namespace std;

// Custom exception class
class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "Custom Exception: Something went wrong!";
    }
};

void foo() {
    try {
        throw MyException(); // Throw the custom exception
    } catch(const MyException& e) {
        cout << "Caught exception inside foo(): " << e.what() << endl;
        throw; // Rethrow the caught exception
    }
}

int main() {
    try {
        foo(); // Call foo(), which throws and rethrows an exception
    } catch(const MyException& e) {
        cout << "Caught exception inside main(): " << e.what() << endl;
    }

    return 0;
}
