#include<iostream>
using namespace std;
class time{
    private:
    int sec,min,hour;
    public:
    time(){
        sec=2;
        min=5;
        hour=34;
    }
     time(int x,int y,int z){
        sec=x;
        min=y;
        hour=z;
    }
    time( const time &t2){
        sec=t2.sec;
        min=t2.min;
        hour=t2.hour;
    }
    void display(){
        cout<< "time in hour"<<    hour << "time in min"<<    min<< "time in sec"<<   sec<<endl;
    }
};
int main(){
    time t1;
    t1.display();
    time t2(2,3,4);
    t2.display();
    time t3 = t2;
    t3.display();
    return 0;

}