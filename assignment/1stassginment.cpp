#include <iostream>
using namespace std;
class MyClass 
{
public:
    void memberFunction() 
    {
        cout << "This is a member function." << std::endl;
    }
};

void nonMemberFunction() 
{
    cout << "This is a non-member function." << std::endl;
}

int main() 
{
    MyClass myObject;
    myObject.memberFunction();
    nonMemberFunction();
    return 0;
}