#include<iostream>
using namespace std;
class matrix{
    int m[3][3];
    public:
    int i,j;
    void getdata(){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
            {
                cin>>m[i][j];
            }
        }
    } void showdata(){
        
        for(i=0;i<3;i++){
              cout<<"\n";
            for(j=0;j<3;j++)
            {
                cout <<m[i][j];
            }
        }
    }
    matrix operator * (matrix m2){
     matrix temp;
      int k=0;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
            { temp.m[i][j]=0;
             
            for (k;k<3;k++){
                temp.m[i][j]=m[i][j]*m2.m[i][j]+temp.m[i][j];
            }
                
                
        }
    
        
    return temp;


    }



};
int main(){
    matrix m1,m2;
    m1.getdata();
    m2.getdata();
    m1.showdata();
    m2.showdata();
    matrix m3=m1*m2;
    m3.showdata();
    return 0;
}