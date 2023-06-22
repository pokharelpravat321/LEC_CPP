#include<iostream>
using namespace std;
class sum{
    double imag,real;
    public:
    void getdata(){
        cout<<"enter real and imaginary part:";
        cin>>imag>>real;

    }
    void calci(sum x){
        double a,b;
        a=imag+x.imag;
        b=real+x.real;
        cout<<"the addition of two complex numbers is:";
        cout<<"("<<a<<","<<b<<")";

    }
};
int main(){
    sum s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s1.calci(s2);
    return 0;
    

}
