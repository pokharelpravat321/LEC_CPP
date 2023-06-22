//object as function argument and return type 
//addtion of two integers number
#include<iostream>
using namespace std;
class add{
    private:
    int a,sum;
    public:
    void getdata(){
    cout<<"enter any two integers:";
    cin>>a;


    }
    void display(add x,add y){
        sum=x.a+y.a;
        cout<<"the sum of two numbers is:"<<sum;
    }
};
int main(){
    add a2,a1;
    a2.getdata();
    a1.getdata();
    a1.display(a2,a1);
    return 0;
}


    