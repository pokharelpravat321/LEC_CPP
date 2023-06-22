//object as function argument and return type 
//kunai pani object pathauda receive garne bela class name ani kunai vaeriable declear garnu parxa
#include<iostream>
using namespace std;
class multi{
    private:
    int a;
    public:
    void getdata(){
    cout<<"enter ant integers or numbers:";
    cin>>a;}
    int bracket(multi y){
      int app=a*y.a;
      return app;
    }
};
int main(){
    multi m1,m2;
    m1.getdata();
    m2.getdata();
    int ply=m1.bracket(m2);
    cout<<"the multiply of two numbers is:"<<ply;
    return 0;

}