#include<iostream>
using namespace std;
class iteminfo
{
    private:
    float cost;
    int itemid;
    public:
    void setdata(int it, float cst)
    {
        itemid = it;
        cost = cst;
    }
    void showdata()
    { 
        cout<<"\n item id :"<<itemid;
        cout<<"\ncost :"<<cost<<endl; 
    }

};
int main()
{
    iteminfo i1, i2;
i1.setdata(55,35.50);
i2.setdata(555,135.25);
cout<<"\ninformation on first item";
i1.showdata();
cout<<"\ninformation on second item";
i2.showdata();
return 0;
}