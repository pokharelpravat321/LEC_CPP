#include<iostream>
using namespace std;
class student{
    private:
    char name[20],addres[20];
    int roll,age;
    public:
    void getdata(){
        cout<<"enter the data of student:\n";
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the address:";
        cin>>addres;
        cout<<"enter the roll no.:";
        cin>>roll;
        cout<<"enter the age :";
        cin>>age;


    }
    void display(){
        cout<<"the data of student is :";
        cout<<"name is:"<<name<<endl;
        cout<<"addresses is :"<<addres<<endl;
        cout<<"roll no. is:"<<roll<<endl;
        cout<<"age of the student is:"<<age<<endl;


    }

};
int main(){
    student s[5];
    int i;
    for (i=0;i<5;i++){
        s[i].getdata();

    }
    for(i=0;i<5;i++){
        s[i].display();
        
    }
    return 0;
}