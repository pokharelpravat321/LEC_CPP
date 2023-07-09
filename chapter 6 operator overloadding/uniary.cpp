#include<iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    complex(int r,int i){
        real=r;
        imag=i;
    }
    void print(){
        cout<<real<<"+"<<imag<<"i"<<endl;


    }
     complex operator +(complex x){
        complex temp;
        temp.real=real+x.real;
        temp.imag=imag+x.imag;
        return temp;
    }
};
int main(){
   complex c1(5,4);
   complex c4(2,3);
   complex c2(2,4);
   complex c3;
c3=c1+c2+c4;
c3.print();

    return 0;
}