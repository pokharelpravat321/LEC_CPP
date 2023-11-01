#include<iostream>
using namespace std;
class b;
class a{
    int x;
    public:
    void getdata(int y){
        x=y;
    }
    friend void add(a &a1,b &b1);

};
class b{
    int y;
    public:
    void getdata(int x){
        y=x;
    }
    friend void add(a &a1,b &b1);
};
int main(){
    a a1;
    b b1;
    a1.getdata(3);
    b1.getdata(4);
    add(a1,b1);
    return 0;
}
void add(a &a1,b &b1){
    int sum = a1.x+b1.y;
    cout<<sum;
}