//program to have friends with two classes


#include<iostream>
using namespace std;
class number2;
class number1{
    private:
    double a;
    public: 
    void getdata(){
        cout<<"enter the value of a:";
        cin>>a;

    }
    friend void add(number1 s1,number2 k1);

};
class number2{
    private:
    double b;
    public:
    void getdata(){
        cout<<"enter the value of b:";
        cin>>b;
    }
friend void add(number1 s1,number2 k1);
};
void add(number1 s1,number2 k1)
{   
    //number1 s1;
   // number2 k1;
   //  s1.getdata();
   // k1.getdata();
    double add= s1.a+k1.b;
   // double divide= s1.a / k1.b;
    cout<<"the addtion and division is:";
    cout<<add<<endl;
   // cout<<divide<<endl;
}
int main(){
   number1 s1;
   number2 k1;
    s1.getdata();
    k1.getdata();
    add(s1,k1);
    return 0;
}
/*
#include<iostream>
using namespace std;

class number2; // Forward declaration

class number1 {
private:
    double a;

public:
    void getdata() {
        cout << "Enter the value of a: ";
        cin >> a;
    }

    friend void add(number1 &s1, number2 &k1); // Declare the friend function
};

class number2 {
private:
    double b;

public:
    void getdata() {
        cout << "Enter the value of b: ";
        cin >> b;
    }

    friend void add(number1 &s1, number2 &k1); // Declare the friend function
};

/* Define the friend function to add private members of both classes
void add(number1 &s1, number2 &k1) {
    double sum = s1.a + k1.b;
    cout << "The addition is: " << sum << endl;
}

int main() {
    number1 s1;
    number2 k1;

    s1.getdata();
    k1.getdata();

    add(s1, k1);

    return 0;
}
*/