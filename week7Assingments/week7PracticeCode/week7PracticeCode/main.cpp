#include <iostream>
using namespace std;


template< class T> // Step 1 - declare the variable name as T. Note T is a common template naming convention.
T squareNum( T inX ) { // Step 2 – use T in defining the function, T replaces the data types.
    T Answer = 0;
    Answer = inX * inX;
return Answer;
}

int main(){
   cout << "Carol Sanders CIS 252,,"  << endl ;
   
int sqNu( int inX) {
    int Answer = 0;
    Answer = inX * inX;
    return Answer;
}

double sqTwo(double inX) {
    double Answer = 0;
    Answer = inX * inX;
    return Answer;
}

float sqDF(float inX) {
    float Answer = 0;
    Answer = inX * inX;
    return Answer;
}
   return 0;   
};