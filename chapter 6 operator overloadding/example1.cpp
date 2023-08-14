//unary oprator overtloading

#include<iostream>
using namespace std;

class A {
private:
    int a, b, c;

public:
    A(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    A operator-() {
        A result(-a, -b, -c);
        return result;
    }

    void display() {
        cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    }
};

int main() {
    int x, y, z;
    cout << "Enter values for x, y, and z: ";
    cin >> x >> y >> z;

    A a(x, y, z);
    cout << "Original object: ";
    a.display();

    A neg_a = -a;
    cout << "Negative  object: ";
    neg_a.display();

    return 0;
}
