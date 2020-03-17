#include <iostream>
#include <queue>
using namespace std;


int main()  {
   cout << "Carol Sanders CIS 252,,"  << endl ;
   
   queue myQ;  
    cout<< myQ.size() << endl;  // number of elements in queue
    myQ.dequeue();   //  Try to deqeue when the queue is empty. Should catch UNDERFLOW
    myQ.push("Fred");
    myQ.push("Liv");
    myQ.push("Julie");
    myQ.push("Rich");
    myQ.push("William");
    myQ.push("Olo");
    myQ.push("Xi");
    myQ.push("Chu");
    myQ.push("Annie");
    myQ.push("Carlos");
    myQ.push("Tuyet");
    myQ.push("Sue");
    cout<< myQ.front() << endl;  // name at front, if not empty
    cout<< myQ.end() << endl;   // name at end, if not empty
    cout<< myQ.size() << endl;   // number of elements in queue
    cout << myQ.pop() << endl;
    cout << myQ.pop() << endl;
    cout << myQ.pop() << endl;;
    myQ.push("Olive");
    myQ.push("Jim");
    cout << myQ.pop() << endl;
    cout << myQ.pop() << endl;
    cout<< myQ.front() << endl;  // name at front, if not empty
    cout<< myQ.end() << endl;   // name at end, if not empty
    cout<< myQ.size() << endl;   // number of elements in queue
    myQ.front();
   return 0;
   
    };