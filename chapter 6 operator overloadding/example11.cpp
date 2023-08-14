//fuction call operator overloading
#include <iostream>
using namespace std;

class Adder {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};

int main() {
    Adder add;

    int result = add(5, 3);

    cout << "Result: " << result << endl;

    return 0;
}
