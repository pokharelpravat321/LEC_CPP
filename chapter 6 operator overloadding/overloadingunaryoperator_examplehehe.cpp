#include<iostream>
using namespace std;

class hello {
         private:
         int a,b;



public:
void getdata(){
    cout<<"enter the value of a and b:";
    cin>>a>>b;
    
}
void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
void operator*(){
    a=a*5;
    b=b*2;
}
};
 int main(){
    hello h;
    h.getdata();
    h.display();
    *h;
    h.display();
    *h;
    h.display();
return 0;
}


