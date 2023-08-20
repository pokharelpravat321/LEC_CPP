#include <iostream>

using namespace std;

class Complex {
public:
    Complex(double r, double i) : real(r), imag(i) {
        totalObjects++;
    }

    static void displayTotalObjects() {
        cout << "Total number of Complex objects created: " << totalObjects << endl;
    }

private:
    double real;
    double imag;
    static int totalObjects;
};

int Complex::totalObjects = 0; // Initialize the static member

int main() {
    using namespace std;

    Complex c1(2.5, 3.7);
    Complex c2(1.0, 2.0);
    Complex c3(3.2, 4.8);

    Complex::displayTotalObjects(); // Display the total number of objects

    return 0;
}