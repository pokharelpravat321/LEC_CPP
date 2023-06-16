#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void getnum(int &a, int &b) {
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
}

int main() {
    int num1, num2;
    getnum(num1, num2);

    cout << "Values before swap: " << num1 << ", " << num2 << endl;
    swap(num1, num2);
    cout << "Values after swap: " << num1 << ", " << num2 << endl;

    return 0;
}