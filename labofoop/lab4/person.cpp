#include<iostream>
#include"person.h"
using namespace std;
void person::getdata(){
    cout<<"enter the name:";
    cin>>name;
    cout<<"enter the age:";
    cin>>age;

}
void person::display(){
    cout<<"\name:"<<name;
    cout<<"\nage:"<<age;

}