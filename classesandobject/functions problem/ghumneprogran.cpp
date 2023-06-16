#include<iostream>
using namespace std;
class sathiharu{
    public:
    string name;
    string addresses;
    int age;
    public:
    void ghumneprogram(){
        cout<<"oi espali dharu khane bhujis"<< name<< "paisa tw hal hai"<<age<<"ko umer le matra khana milxa.ani jane chai kaha"<<addresses<<"ma jane ho"<<endl;
    }
};
int main(){
    sathiharu s1;
    s1.name = "hari";
    s1.age = 12;
    s1.addresses="taj hotel";
    s1.ghumneprogram();
}