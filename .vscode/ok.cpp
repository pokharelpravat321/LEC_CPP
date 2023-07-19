#include<iostream>
using namespace std;

class parent{
    public:
    parent(){
      cout<<"this is parenet class"<<endl;
    }
 ~parent(){
    cout<<"program terminated"<<endl;
 }
};
class child:public parent{
    public:
    child(){
        cout<<"this is child class"<<endl;
     }
     ~child(){
        cout<<"program terminated again"<<endl;
     }
};
int main(){
    parent p1;
    //child c1;
    return 0;
}