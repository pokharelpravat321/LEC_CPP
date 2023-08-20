#include<iostream>
using namespace std;

class convert
{
    public:
    int deg;
    float rad;
    void getdata()
    {
        cout<<"enter a degree";
        cin>>deg;
    }
    void calcu()
    {
        rad= 3.14 * deg/180;
        
    }
    void showdata()
    {
        cout<<"the value in radian"<<rad;
    }
};
    int main()
    {
        convert c1;
        c1.getdata();
        c1.calcu();
        c1.showdata();
        return 0;


    }