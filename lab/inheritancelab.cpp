#include<iostream>
using namespace std;
class student
{
    private:
    char name[20];
    int roll;
    public:
    void getdata()
    {
        cout<<"enter your name"<<endl;
        cin>>name;
    cout<<"enter your roll no "<<endl;
    cin>>roll;
    }
    void displaydata()
    {
       cout<<"..........................."<<endl;
       cout<<".....student markslist......"<<endl;
       cout<<"name:"<<name<<endl;
       cout<<"roll no:"<<roll<<endl; 
    }
};
class test : public student
{
    public:
    int marks1,marks2,marks3,marks4;
    int total;
    float per;
    public:
    void getmarks()
    {

        cout<<"enter the marks of math"<<endl;
        cin>>marks1;
        cout<<"enter the marks of english"<<endl;
        cin>>marks2;
        cout<<"enter the marks of physics"<<endl;
        cin>>marks3;
        cout<<"enter the marks of computer"<<endl;
        cin>>marks4;
    }
    void displaymarks(){

   
    cout<<"marks in math"<<marks1<<endl;
    cout<<"marks in english"<<marks2<<endl;
    cout<<"marks in physics"<<marks3<<endl;
    cout<<"marks in computer"<<marks4<<endl;
    }
};
class result:public test
{
    public:
    void calculate()
    {
        total=marks1   + marks2 + marks3 +  marks4;
        cout<<"the total marks is "<<total<<endl;
        per=total/4;
        cout<<"the percentage is "<<per<<endl;

    }

};
int main()
{
    result obj;
    int cnt, i;
        cout<<"\n Enter No. of Students You Want? : ";
        cin>>cnt;
        for(i=0; i<cnt; i++)
        {
            obj.getdata();
            obj.getmarks();
            obj.displaydata();
            obj.displaymarks();
            obj.calculate();
        }
        return 0;
}




