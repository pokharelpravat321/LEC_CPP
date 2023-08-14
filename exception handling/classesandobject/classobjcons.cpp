#include <iostream>
using namespace std;
class MyClass
{
private:
    int myNumber;

public:
    MyClass() 
    {
        myNumber = 0;
    }
    MyClass(int number) 
    {
        myNumber = number;
    }
    int getNumber()
    {
        return myNumber;
    }
};

int main() 
{
   MyClass obj1;
    cout << "Default Constructor: " << obj1.getNumber() << endl;
    MyClass obj2(10);
    cout << "Parameterized Constructor: " << obj2.getNumber() << endl;

    return 0;
}