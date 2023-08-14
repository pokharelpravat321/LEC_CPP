//abstract class and access them using base class pointer also use virtual functions
#include <iostream>


using namespace std;

class Shape {
public:
    virtual ~Shape() {}
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
    vector<Shape*> shapes;

    shapes.push_back(new Circle());
    shapes.push_back(new Square());
    shapes.push_back(new Triangle());

    cout << "Drawing shapes:" << endl;

    for (Shape* shape : shapes) {
        shape->draw();
        delete shape;
    }

    return 0;
}
