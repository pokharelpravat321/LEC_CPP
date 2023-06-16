#include<iostream>
using namespace std;

int add (int a ,int b)
{
return a*b;

}
int add (int a, int b , int c)
{
return a+b*c;
}
int main ()
{
cout<<add(10,12)<<endl;
cout<<add(23,43,63);
return 0;
    }