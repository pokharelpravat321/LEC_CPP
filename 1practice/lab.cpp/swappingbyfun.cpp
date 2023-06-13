#include<iostream>
using namespace std;
int swap(int &a, int &b)
{
int temp;
temp=a;
a=b;
b=temp;

}
int getnum()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;
    return a;
}
int main()
{ 
int num1=getnum();
int num2=getnum();
cout<<"values before swap: "<<num1<<","<<num2;
swap(num1, num2);
cout<<"\nvalues after swap: "<<num1<<","<<num2;
return 0;
}
