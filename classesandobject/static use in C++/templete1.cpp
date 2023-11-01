#include<iostream>
using namespace std;
template < typename U, typename P>
U add(U x,P y){
    return (x*y);
}
int main(){
    cout<<add<double,float>(5.654,4.5);
    return 0;
}