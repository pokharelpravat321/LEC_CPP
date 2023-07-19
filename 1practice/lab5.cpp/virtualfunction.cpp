#include<iostream>
using namespace std;
class parent 
{
    public:
    virtual void display()
    {
        cout<<"this is parent class...";
    }
};
class child:public parent
{
    void display()
    {
        cout<<"this is parent class";
    }
};
int main()
{
   parent *Bptr;
   Bptr=&c1;
   Bptr->display();
}
