//conversion from basic to user defined types
#include <iostream>
using namespace std;

class Distance {
private:
    double meters;

public:
    Distance(double m = 0.0) : meters(m) {}

    void display() {
        cout << "Distance: " << meters << " meters" << endl;
    }
};

int main() {
    double distanceInMeters = 1500.0;

    // Conversion from double to Distance using constructor
    Distance d = distanceInMeters;

    d.display();

    return 0;
}
