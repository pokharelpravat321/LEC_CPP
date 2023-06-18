#include<iostream>
using namespace std;
class series{
    int a,b,c,d;
    public:
    series(){
        cout<<"enter the no. of number to be display:";
        cin>>d;    
    a=0;
    b=1;}
    
    void calculate(){
        int i;
        cout<<a<<endl;
    cout<<b<<endl;
        for (i=0;i<d;i++){
   
    c=a+b;
    cout<<c<<endl;
    a=b;
    b=c;

        }

    }

};
int main(){
    series s1;
    s1.calculate();
    return 0;

}