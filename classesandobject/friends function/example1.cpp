//1.yedi friend function banauda private data access garnu paryo vane object banaunu parxa.rw friend function decleare garda friend ani function anme lekhnu parxa
//2.
#include<iostream>
using namespace std;
class hello{
    private:
    float a;
    public:
    void getdata(){
        cout<<"enter the value of a:";
        cin>>a;
    }
    
    friend void show(hello h);



};

void show(hello h){
    int sum=h.a*h.a*h.a;
    cout<<sum;
}
int main(){
    hello h2;
   h2.getdata();
    show(h2);
    return 0;
}