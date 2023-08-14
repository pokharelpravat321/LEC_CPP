#include<iostream>
using namespace std;
class circle{
     int r;
    double area,perimeter;
    public:
    circle(){
    cout<<"enter the radus of circle:";
    cin>>r; 
    }
    void calculate();
    void display();

};
void circle::calculate(){
    area=3.14*r*r;
    perimeter=2*3.14*r;

}
void circle::display(){
    cout<<"area is:"<<area;
    cout<<"perimeter is:"<<perimeter;
}

int main(){
circle a;
a.calculate();
a.display();
return 0;
}