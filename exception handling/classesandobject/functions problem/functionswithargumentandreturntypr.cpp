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
    int display(add x,add y){
        sum=x.a+y.a;
        return add(sum)
       // cout<<"the sum of two numbers is:"<<sum;
    }
    int displayy(add y)
    (int p= y.a;
     return p;
      
    )
};
int main(){
    add a2,a1;
    a2.getdata();
    a1.getdata();

    add a4=a1.display(a2,a1);
    cout<<"the sum of two numbers is:"<<a4.displayy();
    return 0;
}


    