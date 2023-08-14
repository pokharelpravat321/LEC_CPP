#include <iostream>
using namespace std;
class DivideByZeroException {
public:
    DivideByZeroException() {
        message = "Error: Division by zero!";
    }

    const char* what() const {
        return message.c_str();
    }

private:
    string message;
};

class Calculator {
public:
    static double divide(double numerator, double denominator) {
        if (denominator == 0) {
            throw DivideByZeroException();
        }
        return numerator / denominator;
    }
};

int main() {
    double numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        double result = Calculator::divide(numerator, denominator);
        cout << "Result: " << result <<endl;
    } catch (const DivideByZeroException& ex) {
        cout<< "Exception caught: " << ex.what() <<endl;
    }

    return 0;
}
