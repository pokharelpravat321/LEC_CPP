#include<iostream>
using namespace std;


class number1
{
int a;
public:
void getdata(int x)
{
a = x;
}
void display()
{
cout<<a<<endl;
}
int getnum()
{
return a;
}

};
class number2
{
int a;
public:

void getdata(int x)
{
a = x;
}
void display()
{
cout<<a<<endl;
}
number2(){}
number2(number1 N1)
{
a = N1.a;
}
};
int main()
{

number1 N1;
N1.getdata(25);
cout<<"Value of N1 from number1: ";
N1.display();
number2 N2;
N2 = N1; //N2 = number2(N1);
cout<<"Value of N2 from number2: ";
N2.display();

return 0;
}