/*  Write a recursive function that adds up the numbers 1 to 10. Use filename:  Week#YourNameProg5*/
#include <iostream>
using namespace std;


int addNum(int num)  // Function to add numbers 1 up to num using for loop
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
        sum += i;    // 1 + 2 + 3+... or ( sum +1) + (sum +2) + (sum +3) + ....
    return sum;
}

int recurAdd(int num)
{
    if (num == 1)
        return 1;
    else
        return num + recurAdd(num -1);  // 10 + (10 - 1) ... or num + (num -1)....
}

//this is for the recursive you can also do different

//if( num == 10)
//      return 10;
//else
//      return 1 + addNum(num + 1);


int main(){
   cout << "Carol Sanders CIS 252"  << endl ;
    
   int x = 10;
   cout << " The sum of from addNum is: " <<addNum(x) << endl;
   cout << "The  sum from recurAdd is: " << recurAdd(x) << endl;

   return 0;
};