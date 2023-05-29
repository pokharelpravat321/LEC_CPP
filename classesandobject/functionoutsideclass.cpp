#include<iostream>
using namespace std;
class student {
    private:
    int roll;
    char name[20];
    char phone[10];
    public:
    void getdata();//function declaration
    void showdata();

};

void student::getdata()//function definition
{
    cout<<"\n enter roll no:"<<endl;
    cin>>roll;

    cout<<"\n enter your name:"<<endl;
    cin>>name;

    cout<<"\n enter your phone no:"<<endl;
    cin>>phone;

}
void student::showdata()
{
    cout<<"name: "<<name<<endl;
    cout<<"roll no: " <<roll<<endl;
    cout<<"phone  no : "<<phone<<endl;

}


int main()
{
    student s1,s2;
    s1.getdata();
    s2.getdata();
    cout<<"\n first student"<<endl;
    s1.showdata();
     
    cout<<"\n second student"<<endl;
    s2.showdata();
    return 0;

}