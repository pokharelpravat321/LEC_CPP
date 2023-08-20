#include<iostream>
using namespace std;
#include <iostream>

void swapNumbers(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}
int getnum(){
    int a;
    cout<<"entere a number: ";
    cin>>a;
    return a;
}

int main() {



int num1=getnum();
int num2=getnum();


   

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 <<endl;

    swapNumbers(&num1, &num2);

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 <<endl;

    return 0;
}
