#include<iostream>
using namespace std;
namespace n1
{
    int X=2;
    void fun()
    {
cout <<"this is fun() of n1"<< endl;


    
}
}                                              
namespace n2
{
int X=5;
void fun()
{
    cout<<n1::X<< endl;
    n2::fun();
}

}
int main()
{
    cout <<n1::X << endl;
    n1::fun();
     cout <<n2::X << endl;
     n2::fun();
     return 0;
}