//index operaot overloading
#include <iostream>
using namespace std;

class Array {
private:
    int* arr;
    int size;

public:
    Array(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;
        }
    }

    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        cout << "Index out of bounds!" << endl;
        static int dummy;
        return dummy;  // Return a dummy value in case of out-of-bounds access
    }

    ~Array() {
        delete[] arr;
    }
};

int main() {
    Array myArray(5);

    cout << "Array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    myArray[2] = 20;  // Assign a new value using index operator

    cout << "Modified array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Accessing an out-of-bounds index
    cout << "Accessing index 10: ";
    cout << myArray[10] << endl;

    return 0;
}
