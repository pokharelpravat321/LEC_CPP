#include<iostream>
using namespace std;
 
    int display(){
        int static i=1;
        i=i+5;
        
       
         cout<<i<<endl;
        
    }
    int main(){
        display();
        display();
       

    }
 