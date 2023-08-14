//usage of typeid operator
#include <iostream>
#include <typeinfo>

using namespace std;

class Shape {
public:
    virtual ~Shape() {}
};

class Circle : public Shape {};
class Square : public Shape {};
class Triangle : public Shape {};

int main() {
    Shape* shapes[] = {new Circle(), new Square(), new Triangle()};

    for (int i = 0; i < 3; i++) {
        cout << "Object " << i + 1 << " is of type: " << typeid(*shapes[i]).name() << endl;
        delete shapes[i];
    }

    return 0;
}
