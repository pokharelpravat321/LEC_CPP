#include<iostream>
using namespace std;
class a{
    private:
    int x;
    public:
   void getnum(int x){
    this -> x=x;
   }
   void shownum(){
    cout<<"\n"<<x;
   }
};
int main(){
a obj1,obj2;
obj1.getnum(5);
obj2.getnum(2);
obj1.shownum();
obj2.shownum();
return 0;
}