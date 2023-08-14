//uanry operator overloadingh using non member functions
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Declare the non-member function as a friend
    friend Complex operator-(const Complex& c);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Define the non-member function
Complex operator-(const Complex& c) {
    return Complex(-c.real, -c.imag);
}

int main() {
    Complex num(3.0, 4.0);

    Complex negNum = -num;

    cout << "Original number: ";
    num.display();

    cout << "Negative number: ";
    negNum.display();

    return 0;
}
