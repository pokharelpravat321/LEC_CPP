#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void getnum(int &a, int &b) {
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;}
int main()

{ 
int num1=getnum();
int num2=getnum();
cout<<"values before swap: "<<num1<<","<<num2;
swap(num1, num2);
cout<<"values after swap: "<<num1<<","<<num2;
return 0; }