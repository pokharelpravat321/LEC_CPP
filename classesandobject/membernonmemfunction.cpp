#include <iostream>
class MyClass 
{
public:
    void memberFunction() 
    {
        std::cout << "This is a member function." << std::endl;
    }
};

void nonMemberFunction() 
{
    std::cout << "This is a non-member function." << std::endl;
}

int main() 
{
    MyClass myObject;
    myObject.memberFunction();
    nonMemberFunction();
    return 0;
}