//pure virtyal functions and abstract class

#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle" << endl;
    }
};

int main() {
    Circle circle;
    Square square;
    Triangle triangle;

    Shape* shapes[] = {&circle, &square, &triangle};

    cout << "Drawing shapes:" << endl;

    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();
    }

    return 0;
}
