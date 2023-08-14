#include<iostream>
using namespace std;
class time{
    int hrs,min;
    public:
    time(int);
    void display();
};
time::time(int t){
    cout<<"basic to class conversation:";
    hrs=t/60;
    min=t%60;
};
void time:: display(){
    cout<<"hours:"<<hrs<<endl;
    cout<<"minutes:"<<min<<endl;
};
int main(){
    int duration;
    cout<<"enter the duration in minutes:";
    cin>>duration;
    time t1=duration;
    t1.display();
}