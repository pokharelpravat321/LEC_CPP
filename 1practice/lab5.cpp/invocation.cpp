// C++ program to show the order of constructor calls
// in Multiple Inheritance

#include <iostream>
using namespace std;
class Parent1
{
	public:
	Parent1()
	{
		cout <<  "first base class" << endl;
	}
};
class Child : public Parent1, public Parent2
{
	public:
	Child()
	{
		cout << " child class" << endl;
	}
};
int main() {
	Child obj1;
	return 0;
}
