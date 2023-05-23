#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter mark: ";
  cin >> number;

  
  if (number > 32) {
    cout << "You pass the exam .hurray and best of luck for your future .i know you will do it. : " << number << endl;

  }
  else
  {
    cout<<"try again" << number << endl;
  }



  return 0;
}
