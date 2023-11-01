#include<iostream>
using namespace std;
void display(double x,double y){
    cout<<"inside the function\n";
    try{
        if(y==0.0)
        throw y;
        else 
        cout<<"the devision is:"<<(x/y);

    }
catch(double d){
    cout<<"caught double inside function:"<<d;
    throw;
}
cout<<"end of the function\n";

}
int main(){
    cout<<"inside the main";
    try{
        double(3.4,5.66);
        double(3.5, 0);
    }
    catch (double d){
        cout<<"caught double inside main\n"<<d;
    }
    return 0;
}