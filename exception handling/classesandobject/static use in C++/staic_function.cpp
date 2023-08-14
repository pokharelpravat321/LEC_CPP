// 1.kunai pani function static banauda tesma static variables matra pass ya processing hunxa 
//2.static function main function ma call garnu parda object banayera call garnu hudaina.class name::function name() garnu parxa


#include<iostream>
using namespace std;
class hello{
    private:
    static int a;
    int s,b;
    public:
    void getdata(int x){
b=x;
s=a+b;
cout<<s<<endl;
a=a+5;
}
    static void add(){
        cout<<a<<endl;

    }
};
int hello::a=9;

int main(){
    int x;
    cout<<"enter the value of x";
    cin>>x;
    hello h1,h2;
    h1.getdata(x);
    hello::add();
    h2.getdata(x);
    hello::add();
    return 0;
}