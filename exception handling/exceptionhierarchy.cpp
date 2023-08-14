#include <iostream>
#include <stdexcept>

using namespace std;

class CustomException : public exception {
public:
    const char* what() const noexcept {
        return "Custom Exception: Something went wrong!";
    }
};

void level3() {
    cout << "Level 3 started." << endl;
    throw CustomException();
    cout << "Level 3 completed." << endl;
}

void level2() {
    cout << "Level 2 started." << endl;
    try {
        level3();
    } catch (const exception &e) {
        cout << "Caught exception in Level 2: " << e.what() << endl;
        throw;
    }
    cout << "Level 2 completed." << endl;
}

void level1() {
    cout << "Level 1 started." << endl;
    try {
        level2();
    } catch (const exception &e) {
        cout << "Caught exception in Level 1: " << e.what() << endl;
        throw;
    }
    cout << "Level 1 completed." << endl;
}

int main() {
    cout << "Main started." << endl;
    try {
        level1();
    } catch (const exception &e) {
        cout << "Caught exception in Main: " << e.what() << endl;
    }
    cout << "Main completed." << endl;

    return 0;
}
