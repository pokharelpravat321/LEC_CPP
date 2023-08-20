
#include <iostream>
using namespace std;

int main() {

    double a, b, div;
 
    cout << "Enter numerator: ";
    cin >> a;

    cout << "Enter denominator: ";
    cin >> b;

    try {

        
        if (b == 0)
            throw 0;

        divide = a / b;
        cout << a << " / " << b << " = " << divide << endl;
    } 

    catch (int num_exception) {
        cout << "Error: Cannot divide by " << num_exception << endl;
    }

    return 0;
}