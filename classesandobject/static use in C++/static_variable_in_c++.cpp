// kunai pani static variable class ma declear garna mildaina.
//static variable declear garda sadai class bhahira class name :: gari call garne.
#include<iostream>
using namespace std;
class add{
    private:
    static int a;
    int b,s;
    public:
    void getdata(){
        cout<<"enter the value of b:";
        cin>>b;
        s=a+b;
        cout<<"the sum is :"<<s<<endl;
       a=a+1;

    }


};
 int add::a=2;
int main(){
    add s2,s1, s3,s4;
    s2.getdata();
    s1.getdata();
    s3.getdata();
    s4.getdata();
    return 0;

}