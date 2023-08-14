#include<iostream>
using namespace std;
class A{
    public:
    int data;
    void getdata()
{
    cout<<"enter the value of data";
    cin>> data;

}
void showdata(){
cout<<"the value of data is"<<data<<endl;
}
};
class B{
    public:
     A a;
    int b;
    void getdata(){
       a.getdata();
        cout<<"enter the value of b:";
        cin>>b;
        

    }
    void showdata()
    {
        a.showdata();
        
    
    cout<<"the value of b is:" << b <<endl;
    }
};

int main()
     {
        B c3;
        c3.getdata();
        c3.showdata();
        return 0;
     }