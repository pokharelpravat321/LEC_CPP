//example of binary operator ovearloading
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Binary operator + overloading
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    Complex sum = num1 + num2;

    cout << "num1: ";
    num1.display();

    cout << "num2: ";
    num2.display();

    cout << "Sum: ";
    sum.display();

    return 0;
}
