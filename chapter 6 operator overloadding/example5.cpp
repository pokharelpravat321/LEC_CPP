//operator overloading using non member function
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Declare the non-member function as a friend
    friend Complex operator+(const Complex& c1, const Complex& c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Define the non-member function
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

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
