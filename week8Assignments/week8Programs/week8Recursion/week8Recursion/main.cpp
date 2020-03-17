#include <iostream>
using namespace std;

void myFunction( int counter)
{
    if(counter == 0)
        return; // if base case condition is true, then stops, and returns..
    else
    {   // if base case condition is greater than zero, call itself again
        cout <<counter<<endl;
        myFunction(--counter); // only -- action performed on call
        return; // no action performed on return
    }
}

void myNonRecur(int counter){
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
    cout << "Carol Sanders CIS 252 Recursion"  << endl ;
    int x = 10;
    myFunction(x);         // call function
    myNonRecur(x);
   return 0;
   
};