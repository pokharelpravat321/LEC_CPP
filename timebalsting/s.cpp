#include<iostream>
usikng namespace std;
class add{
    int a;
    public:
    add(int t){
        a=t;
    }
    int addition operator +(const add& c1,const add& a2){
        
        return add(c1.a+a2.a)

    }
};
int main{
    add a1(4),a2(50);
    add a3=a1+a2;
    return 0;
    cout<<a3;
    
}