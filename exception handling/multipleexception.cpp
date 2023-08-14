#include <iostream>

using namespace std;

class DivideByZeroException {
public:
    void displayErrorMessage() {
        cout << "Error: Division by zero!" << endl;
    }
};

class NegativeValueException {
public:
    void displayErrorMessage() {
        cout << "Error: Negative value encountered!" << endl;
    }
};

int safeDivision(int numerator, int denominator) {
    if (denominator == 0) {
        throw DivideByZeroException();
    }
    if (numerator < 0 || denominator < 0) {
        throw NegativeValueException();
    }
    return numerator / denominator;
}

int main() {
    int numerator, denominator;

    try {
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;

        int result = safeDivision(numerator, denominator);
        cout << "Result of division: " << result << endl;
    }
    catch (DivideByZeroException &ex) {
        ex.displayErrorMessage();
    }
    catch (NegativeValueException &ex) {
        ex.displayErrorMessage();
    }

    return 0;
}
