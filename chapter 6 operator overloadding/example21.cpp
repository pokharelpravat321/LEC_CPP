#include<iostream>
using namespace std;
template< typename T>
class     weight  {
    T a;
    public:
      weight(T p){
        a=p;
        cout<<a<<endl;

      }
};
 int main(){
    weight <int>w1(5.3);
    weight <double> w2(33.3);
    weight <float>w5(44.34);
     return 0;
 }

