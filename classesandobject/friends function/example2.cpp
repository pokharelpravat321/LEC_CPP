//program to have friends with two classes


#include<iostream>
using namespace std;
class sindhuli1{
    private:
    double a;
    public:
    void getdata(){
        cout<<"enter the value of a:";
        cin>>a;

    }
    friend void ghimere();

};
class ktm{
    private:
    double b;
    public:
    void getdata(){
        cout<<"enter the value of b:";
        cin>>b;
    }
friend void ghimere();
};
void ghimere()
{   
    sindhuli1 s1;
    ktm k1;
     s1.getdata();
    k1.getdata();
    double add= s1.a+k1.b;
    double divide= s1.a / k1.b;
    cout<<"the addtion and division is:";
    cout<<add<<endl;
    cout<<divide<<endl;
}
int main(){
   // sindhuli1 s1;
   // ktm k1;
    //s1.getdata();
    //k1.getdata();
    ghimere();
    return 0;
}