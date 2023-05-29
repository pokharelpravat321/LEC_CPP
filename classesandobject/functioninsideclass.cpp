#include<iostream>
using namespace std;
class student
{
private:
 int roll;
 char name[20];
 char phone[10];
public:
 void getdata(){
 cout<<"enter roll no:  ";
 cin>>roll;
 cout<<"enter your name: ";
 cin>>name;
 cout<<"enter your phone no: ";
 cin>>phone;
 }
 void showdata(){
    cout<<"\nrollno: "<<roll<<endl;
    cout<<"\name:  "<<name<<endl;
    cout<<"\nphone:  "<<phone<<endl;
 }


};
int main()
{
student s1,s2;
s1.getdata();
s2.getdata();
cout<<"\ninformation of first student"<<endl;
cout<<"\ninformation of second student"<<endl;
s2.showdata();
return 0;

}