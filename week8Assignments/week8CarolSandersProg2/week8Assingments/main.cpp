#include <iostream>
using namespace std;

int getFactorial(int y) {
    if(y ==1){
        return 1;
    }else {
        return y*getFactorial(y - 1);
    }
}

 void myFunction(int counter) {
      int maxSize = counter;
       if(counter == 0)
           return;
      else{
          for(int i=0; i <= maxSize; i ++) {
              cout << counter << endl;
              --counter;
              }
          }
           return;
      }


int main() {
   cout << "Carol Sanders CIS 252"  << endl ;
   int x = 10;
   myFunction(x);
   
   int y = 5;
   cout << getFactorial(y) << endl;

   return 0;
};