//unary operator overloading
#include<iostream>
using namespace std;
class  hari     {
         private:
int a;

public:
void display(){
    cout<<"the value of a is :"<<a;
}
hari (){cin>>a;}
hari operator ++(int ){
    a=a+1;
}
hari operator++(){
    a++;
}

};
 int main(){
hari h1;
h1.display();
++h1;
h1.display();
h1++;
h1.display();



return 0;}


