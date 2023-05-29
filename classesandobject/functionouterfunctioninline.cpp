#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    char name[25];
    char phone[10];
    public:
    void getdata();
    void showdata();

};
inline void student::getdata(){
    cout<<"\n enter your name:"<<endl;
    cin>>name;

    cout<<"\n enter your roll:"<<endl;
    cin>>roll;

    cout<<"\n enter your phone no"<<endl;
    cin>>phone;


}
inline void student::showdata(){
    cout<<"\n name: "<<name<<endl;
    cout<<"\n rollno: "<<roll<<endl;
    cout<<"\n phone: "<<phone<<endl;

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