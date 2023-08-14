#include <iostream>
#include <stdexcept>

using namespace std;

void customUnexpected() {
    cout << "An unexpected exception occurred!" << endl;
    // You can perform any necessary cleanup or logging here.
    exit(1);
}

void riskyFunction() {
    throw runtime_error("This is an unexpected exception.");
}

int main() {
    // Set the custom unexpected handler
    set_unexpected(customUnexpected);

    try {
        riskyFunction();
    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
