#include <iostream>
using namespace std;


int myFactorial( int integer)
{
    if( integer == 1)
        return 1;
    else
    {
        return (integer * (myFactorial(integer-1)));
 // action performed on call “ integer – 1”
// action performed on return *
    }
} 

int myNonRecurFact( int integer)
{
    int MAXSIZE = integer; 
    int result = 1;
    if( integer == 1)
        return 1;
    else
    {
    for(int i = 1; i < MAXSIZE; i++){
         result *= integer;
         integer--;
    // action performed on call “ integer – 1”
    // action performed on return *
      }
      return result;
    }
}
    
int main()  {
   cout << "Carol Sanders  Prog3 CIS 252"  << endl ;
   int x = 12;
   
   cout << "Recurr Factorial: " << myFactorial(x) << endl;
   cout << "Non Recurr Factorial: " << myNonRecurFact(x) << endl;
   
   return 0;
};