#include<iostream>
using namespace std;
class student {
    protected:
    char name[20];
    public:
    void ram (){
        cout<<"enter the name of student\n";
        cin>> name;
    }
    
};
class test: public student{
    protected:
    int mark,science,math,nep;
    public:
    void getdata(){
        cout<<"enter the marks:\n";
        cout<<"enter the mark in science ,math and nepali:\n";
        cin>>science>>math>>nep;
    }
    
};
class result:public  test{
    protected:
    int total;
    public:
    void dispalay(){
        cout<<name;
        total=science+math+nep;
        cout<<"total maerk of student is:";
        cout<<total<<endl;

    }
};
int main(){
    int a,i;
    cout<<"enter the number of students whose result is to be published:";
    cin>>a;
    
    result r[a];
    for (i=0;i<a;i++){
        r[i].ram();
        r[i].getdata();
         r[i].dispalay();
    }
    return 0;
}

