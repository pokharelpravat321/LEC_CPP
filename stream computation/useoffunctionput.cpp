#include <iostream>

int main() {
    using namespace std;

    char ch = 'A';

    cout << "Using the put function to display characters:" << endl;

    for (int i = 0; i < 5; ++i) {
        cout.put(ch); // Using the put function to output a character
        ch++; 
    }

    cout << endl;

    return 0;
}
