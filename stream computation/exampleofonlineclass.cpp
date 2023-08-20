#include<iostream>
using namespace std;
int main(){
    char data[100];
    ofstream outfile;
    outfile.open("secondfile.txt");
    cout<<"writing to the file"<<endl;
    cout<<"enter the name:";
    cin.getline(data,100);
    outfile<<data<<endl;
    cout<<"enter your age:";
    cin>>data;
    cin.ignore();
    outfile<<data<<endl;
    outfile.close();
    
}