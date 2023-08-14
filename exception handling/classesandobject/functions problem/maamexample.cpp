#include<iostream>
using namespace std;
 class vehicle{
    private:
    int platenumber;
public:


int getnumber(int a){
    cout<<"enter the number of scooter";
   
platenumber=a;
    return platenumber;

}
 };
 int main(){
    vehicle scooter;
    cout<<scooter.getnumber(88);
    return 0;
 }