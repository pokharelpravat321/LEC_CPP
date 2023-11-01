#include<iostream>
using namespace std;
class time{
    private:
    int sec,min,hour,day;
    public:
    time(){
        sec=0;
        min=0;
        hour=0;
        day=0;
    }
     time(int x,int y,int z,int p){
        sec=x;
        min=y;
        hour=z;
        day=p;
    }
    time addtime( time t2, time t3){
        time temp; 
        temp.sec=t2.sec+t3.sec;
        temp.min=t2.min+t3.min;
        temp.hour=t2.hour+t3.hour;
        temp.day=t2.day+t3.day;
        if(temp.sec>=60){
        
            int p=temp.sec/60;
            temp.min=p+temp.min;
            temp.sec=temp.sec%60;
        }
         if(temp.min>=60){
           int p=temp.min/60;
            temp.hour=p+temp.hour;
            temp.min=temp.min%60;
         }
         if(temp.hour>=24){
            int p=temp.hour/24;
            temp.day=p+temp.day;
            temp.hour=temp.hour%24;
        }
        return (temp);
    }
    void display(){
        cout<< "time in day"<<day<<"time in hour"<<    hour << "time in min"<<    min<< "time in sec"<<   sec<<endl;
    }
};
int main(){
    time t1;
    t1.display();
    time t2(2000,123,4,7);
    time t3(41,564,34,2);
    t3.display();
    t2.display();
    time t4=t2.addtime(t2,t3);
    t4.display();
    return 0;

}