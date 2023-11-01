#include<iostream>
using namespace std;
class complex{
    private:
    float real, imag;
    public:
    complex(float x, float y){
        real = x;
        imag= y;
    }
    complex (){}
    complex operator+(complex c2){
        complex c4;
         c4.real= real + c2.real;
        c4.imag= imag + c2.imag;
        return c4;
    }
    void display(){
        cout<<"real number is:"<<endl;
        cout<<real;
        cout<<"imag no is:"<< imag <<endl;
    }




};
int main(){
    
    complex c1(10,11),c2(12,12.2222);
    complex c3= c1 + c2;
    c3.display();
    return 0;

    


}
