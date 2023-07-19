#include<iostream>
using namespace std;
class parent
{
    public:
    parent()
    {
        cout<<"this is constructor"<<endl;
    }
    ~parent()
    {
        cout<"this is destructor";
    }
};
class child : public parent
{
    public:
    child()
    {
        cout<<"this constructor of child class";
    }
    ~child()
    {
        cout<"this is destructor";
    }
};
int main()
{
    parent p1;
   return 0;

}
