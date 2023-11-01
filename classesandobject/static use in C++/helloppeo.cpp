#include<iostream>
using namespace std;
class clecius{
    float cel;
    public:
    void getdata(){
        cout<<"enter the temperatue in celcius:"<<endl;
        cin>>cel;

    }
    void display(){
        cout<<"the temperature in celsius is:"<<cel<<endl;
    }
    float redata(){
        return cel;
    }
};
class fahreneit{
    float feh;
    public:
    fahreneit(clecius &c1){
        float p;
        p=c1.redata();
        float q;
        q=(1.8*p)+32;
         feh = q;
    }

 void display(){
        cout<<"the temperature in fahernheit: "<<feh;
    }
};
int main(){
    clecius c1;
    c1.getdata();
    c1.display();
    fahreneit f1(c1);
    
    f1.display();
    return 0;
}