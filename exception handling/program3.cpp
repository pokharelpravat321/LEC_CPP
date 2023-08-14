#include<iostream>
using namespace std;
class dayerr{};
class montherr{};
class yearerr{};
class date{
    private:
    int day, month,year;
    public:
    void read_date() throw (dayerr, monthyerr);
    void show_date() ;

};
void date::read_date() throw(dayerr,montherr)
{
    cout<<"enter day:";
    cin>>day;
    if(day>31)
    throw dayerr();
    cout<<"enter month:";
    cin>>month;
    if(month>12)
    throw montherr();
    cout<<"enter year:";
    cin>>year;
    if(year<0)
    throw yearerr();
}
void date::show_date(){
    cout<<"sate of birth is"<<day<<"/"<<month<<"/"<<year;
}
int main(){
    date d1;
    try{
        cout <<"enter your fate of borth:"<<endl;
        d1.read_date();
        d1.show_date();
    }
    catch(dayerr){
        cout<<"exception:day cannont be greater than 31";

    }
    catch(montherr){
        cout<<"exception: month cannot be gereater than 12:";

    }
    catch(yearerr){
        cout<<"exception: year cannot be negetaive";
    }
    return 0;
}