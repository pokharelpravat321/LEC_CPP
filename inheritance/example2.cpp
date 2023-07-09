#include<iostream>
using namespace std;
class vechicle{
    public:
    void print(){
        cout<<"it run and roar:\n";

    }
};
class car:public vechicle{
    public:
    void print(){
        cout<<"it has four wheel: \n";
    }
    void allah(){
        cout<<"it canot :";
    }
};

int main(){
    car c1;
    vechicle v1;
    c1.print();
   // v1.allah();
    v1.print();
    return 0;
}