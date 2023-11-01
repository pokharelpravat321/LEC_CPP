#include<iostream>
using namespace std;
class test{
    private:
    int data;
    public:
    test(int n=0){
        data=n;

    }
    void setdata(int n){
        data=n;
        cout<<data<<endl;
    }
    int getdata const() const {return data;}
};
int main(){
    test t1(3);

    const t2(4);
    t1.setdata(3);
    cout<<t1.getdata() <<endl;
    test *p=const_cast<test*>(&t2);
    p->t2.setdata(3);
    cout<<t2.getdata()<<endl;
    return 0;
}