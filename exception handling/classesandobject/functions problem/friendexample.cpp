#include<iostream>
using namespace std;
class Friends{
    public:
    
    char name[15];
    char address[35];
    char phoneno[10];
    void getdata(){
        cout<<"enter the name\n";
        cin >> name;
        cout<<"Enter the address\n: ";
        cin>> address;
        cout<<"enter phone no.:";
        cin>> phoneno;

    }
    void friendsname(){
        cout<<"my friend name is:"<<name <<endl;
        
    }
    void phone(){
        cout<<"phone no. is:"<< phoneno <<endl;

    }
    void uaddress(){
        cout<<"his/her address is :"<< address <<endl;
    }
};
int main() {
    Friends f1, f2;
    f1.getdata();
    f2.getdata();
    f1.friendsname();
    f1.phone();
    f1.uaddress();
    
    f2.friendsname();
    f2.phone();
    f2.uaddress();
 return 0;
}


