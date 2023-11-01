#include<iostream>
using namespace std;
class add{
    static int a;
    int b ,c;
    public:
    void getdata(int y){
        b=y;
        c=a+b;
        cout<<"sum is ::"<<c<<endl;
    }
    static void hello(){
        cout<<a<<endl;
        a=a+5;
    }
};
int add::a=0;
int main(){
    add a1;
    int y,i;
    cin>>y;
    a1.getdata(y);
    add::hello();
    for (i=0;i<y;i++){
    a1.getdata(y);
    add::hello();}
    return 0;

}