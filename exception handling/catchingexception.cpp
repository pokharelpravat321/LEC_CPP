#include <iostream>
#include <string>
using namespace std;

// Custom exception class
class MyException {
public:
    MyException(const string& message) : errorMessage(message) {}

    string getErrorMessage() const {
        return errorMessage;
    }

private:
    string errorMessage;
};

int main() {
    try {
        // Simulate an exception
        throw MyException("Custom exception occurred!");
    } catch (const MyException& ex) {
        cout << "Caught custom exception: " << ex.getErrorMessage() << endl;
    } catch (const exception& ex) {
        cout << "Caught standard exception: " << ex.what() << endl;
    } catch (...) {
        cout << "Caught unknown exception!" << endl;
    }

    return 0;
}
