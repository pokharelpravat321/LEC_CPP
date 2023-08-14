#include <iostream>
using namespace std;

class Rect{
   private:
   int volume;
   public:
   Rect(){
      volume = 0;
   }
   Rect(int a, int b,int c){
      volume = a * b* c;
   }
   void display(){
      cout << "The area is: " << area << endl;
   }
};

main(){
   Rect r1;
   Rect r2(2, 6,3);
   r1.display();
   r2.display();
}