#include<iostream>
using namespace std;
class average{
    private:
    double a,b,c,avg;
    public:
    average(){
        cout<<"enter the value of three numbers:";
        cin>>a;
        cin>>b;
        cin>>c;
    }
    void calculate(){
        avg=(a+b+c)/3;

    }
    void display(){
        cout<<"the average is:";
        cout<<avg;

    }

};
int main(){
    average a1;
    a1.calculate();
    a1.display();
    return 0;
}