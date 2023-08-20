#include <iostream>
#include <cmath>

using namespace std;

class Complex {
public:
    Complex(double r, double i) : real(r), imag(i) {}

    friend double calculateMagnitude(const Complex& c);

private:
    double real;
    double imag;
};

double calculateMagnitude(const Complex& c) {
    return sqrt(c.real * c.real + c.imag * c.imag);
}

int main() {
    using namespace std;

    Complex c(3.0, 4.0);
    double magnitude = calculateMagnitude(c);

    cout << "Complex Number: " << c.real << " + " << c.imag << "i" << endl;
    cout << "Magnitude: " << magnitude << endl;

    return 0;
}