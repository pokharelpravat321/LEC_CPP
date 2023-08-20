#include<iostream>
using namespace std;
class complex       {
         private:
         double real,imag;
//const double real=10;
public:
double constant(){
    real=20;
return real ;
}
double getimaginary(){
    cout<<"get imagimary numbwer";
    cin>>imag;
return imag;
}
void display(double d,double c);

};
void complex::display(double d,double c){
    cout<<"complexno.is   "<< d<<"+"<< " i"<< c;
}
 int main(){
complex x1;
double y,z;
z=x1.constant();
y=x1.getimaginary();
x1.display(z,y);
return 0;
}


