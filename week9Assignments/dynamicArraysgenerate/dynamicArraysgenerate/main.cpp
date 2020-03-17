#include <iostream>
using namespace std;

/*   Dynamic Array Size
Imaging you have no idea how big an array should be as you write your code.
Can you set the array size DYNAMICALLY, while the programming is running ? Yes.

*/

int main(){
   cout << "Carol Sanders CIS 252 Programs"  << endl ;
   
    int arraySize = 0;
    string aName = "";
    cout << "Enter number of names to enter: ";
    cin >> arraySize;
    string * ptrArray = new string[ arraySize ];
    cout << "Enter name: ";
    cin >> aName;
    ptrArray[1] = aName;
    cout << ptrArray[1] << endl;
   
   return 0;
};