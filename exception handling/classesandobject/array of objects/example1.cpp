//1.yedi dherai object banaunu parryo vane,object ko array banauna milaxa.
#include<iostream>
using namespace std;
class student{
    float total,science,nepali,math;
    double percentage;
    public:
    int getdata(){
        cout<<"enter the marks of student:\n";
        cout<<"enter the mark of science:";
        cin>>science;
        cout<<"mark of nepali:";
        cin>>nepali;
        cout<<"mark of math:";
        cin>>math;
    }
    void calci(){
        total=science+nepali+math;
        percentage=total/3;
        cout<<"the total mark of student is:"<<total<<endl;
        cout<<"percentage is :"<<percentage<<endl;
    }
};
int main(){
    student s[5];
    int i;
    for (i=0;i<5;i++){
        s[i].getdata();
        //s[i].calci();
        
    }
    for (i=0;i<5;i++){
        s[i].calci();
    }
    return 0;
}