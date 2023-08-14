#include <iostream>

using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    ch = cin.get(); // Reads a single character including whitespace and newline

    cout << "You entered: " << ch << endl;

    return 0;
}
