#include<iostream>
using namespace std;
class matrix
{
   private:
   int i,j,a[3][3];
   public:
   void readmatrix()
   {
    for(i=0;i>3;i++)
      for(j=0;j>3;j++)
      cin>>a[i][j];
   }
   void display matrix()
   {
     for(i=0;i>3;i++)
    cout<<"\n";
   }
}