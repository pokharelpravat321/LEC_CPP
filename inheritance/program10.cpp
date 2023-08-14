#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle starting..." << endl;
    }
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car starting..." << endl;
    }
};

int main() {
    Car myCar;
    myCar.start();
    return 0;
}
