//#include <iostream>
using namespace std;

class CustomMemory {
private:
    int value;

public:
    CustomMemory(int val = 0) : value(val) {
        cout << "Constructor called for value: " << value << endl;
    }

    void display() {
        cout << "Value: " << value << endl;
    }

    // Overload the new operator
    void* operator new(size_t size) {
        cout << "Custom new called, size: " << size << endl;
        void* ptr = ::operator new(size);
        return ptr;
    }

    // Overload the delete operator
    void operator delete(void* ptr) {
        cout << "Custom delete called" << endl;
        ::operator delete(ptr);
    }
};

int main() {
    CustomMemory* obj = new CustomMemory(42);
    obj->display();

    delete obj;

    return 0;
}