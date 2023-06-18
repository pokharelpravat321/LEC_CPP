#include<iostream>
using namespace std;
class temperature{
    private:
    double celcius,fahern;
    public:
    temperature(){
        cout<<"enter the temperature in celsius:";
        cin>>celcius;
    }
    void calculation(){
        fahern=((celcius*9)/5)+32;
    }
    void display(){
        cout<<"the temperature in farenheit is:";
        cout<<fahern;
    }
    
};
int main(){
    temperature t1;
    t1.calculation();
    t1.display();
    return 0;
}