#include<iostream>
using namespace std;
class hari{
    private:
    float a,bk;
    public:
    void display(){
        int sum =a+bk;
        cout<<sum;

    }
    hari(){
        cin>>a;
        cin>>bk;
    }
    ~hari(){
        cout<<"\nenter data again:";
    }

};
int main (){
    hari s1,s2;//__JMPSTUB__
    s1.display();
    s2.display();
    return 0;
}