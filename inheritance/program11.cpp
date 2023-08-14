#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing square." << endl;
    }
};

int main() {
    Circle myCircle;
    Square mySquare;

    myCircle.draw();
    mySquare.draw();

    return 0;
}
