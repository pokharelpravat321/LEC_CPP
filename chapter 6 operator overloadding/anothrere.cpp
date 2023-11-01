#include<iostream>
using namespace std;
class hello{
    int a,b,c;
    public:
    hello(){
        a=0;
        b=0;
        c=0;
    }
    hello(int x, int y,int z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<a <<"............"  <<b <<"..........." << c  <<endl; ;

    }
    void operator-(){
        a=-a;
        b=-b;
        c=-c;
    }
};
int main(){
    hello a1(4,5,6);
    a1.display();
    -a1;
    a1.display();
    return 0;
}







