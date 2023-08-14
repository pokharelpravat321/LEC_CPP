#include<iostream>
using namespace std;
class base{
    protected:
    int protectedvar;
    private:
    int privatevar;
    public:
    int publicvar;
    void getdata(int x,int y,int z){
    protectedvar=x;
    privatevar=y;
    publicvar=z;

    }
    void display(){
        cout<<"protected is:"<<protectedvar;
        cout<<"private is:"<<privatevar;
        cout<<"public is:"<<publicvar;
    }

};
class derived: public base {public:
void fun(
int a;
a=protectedvar;
a=privatevar;
a= publicvar;
)
};

class derived2: protected base {public:
void fun(int a;
a=protectedvar;
a=privatevar;
a= publicvar;
)
};

class derived3: private base {public:
void fun(int a;
a=protectedvar;
a=privatevar;
a= publicvar;
)
};
int main(){
    int num;
    derived d1;
    d1.
}
