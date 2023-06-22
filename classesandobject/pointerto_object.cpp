#include<iostream>
using namespace std;
class employee{
    private:
    char name[30];
    float salary;
    public:
    void getdata(){
        cout<<"\n enter the name:";
        cin>>name;
        cout<<"enter the salary:";
        cin>>salary;
    }
    void showdata(){
        cout<<"\n name is:"<<name<<endl;
        cout<<"salary is:"<<salary<<endl;
    }
};
int main(){
    employee *eptr;
    employee e;
    eptr=&e;
    eptr->getdata();
    cout<<"\n accessing data through pointer variable:";
    eptr->showdata();
    return 0;
}