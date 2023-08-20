#include <iostream>

using namespace std;

class Complex {
public:
    Complex(double r, double i) : realPart(r), imagPart(i) {}

    double getReal() const {
        return realPart;
    }

    double getImaginary() const {
        return imagPart;
    }

    void display() const {
        cout << "Complex Number: " << realPart << " + " << imagPart << "i" << endl;
    }

private:
    const double realPart;
    const double imagPart;
};

int main() {
    const Complex complexNumber(2.5, 3.7);

    cout << "Real Part: " << complexNumber.getReal() << endl;
    cout << "Imaginary Part: " << complexNumber.getImaginary() << endl;

    complexNumber.display();

    return 0;
}