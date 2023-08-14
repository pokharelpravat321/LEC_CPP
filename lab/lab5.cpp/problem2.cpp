#include<iostream>
using namespace std;
class time{
    private:

    int hr,min,sec;
    public:
    time(){
        hr=12;
        min=0;
        sec=0;
    }
    time(int x,int y,int z){
    hr=x;
    min=y;
    sec=z;
    }
    void display(){
        cout<<"time is:\n";
        cout<<hr<< "hour "<< min <<" minute and "<< sec <<"sec"<<endl;
    }
    time( const time& t1 ){
        hr=t1.hr;
        min=t1.min;
        sec=t1.sec;
    }
    
};
 int calc_h(int s){
    int t;
    t=s/3600;
    if (t>=1){
        return t;}
        else {
            return 0;
        }

    
    }
    int calc_m(int s){
    int t;
    t=s/60;
    if (t>=1){
        return t;}
        else {
            return 0;
        }

    
    }
    
int main(){
    int s,o,p,q,l,n;
    cout<<"time in second:\n";
    cin>>s;
    o=calc_h(s);
    l=s-(o*3600);

    p=calc_m(l);
    n=l-(p*60);
    //q=n;
    time t1,t2(o,p,n);
    t1.display();
    t2.display();
    time t3=t1;
    t3.display();
    return 0;

}