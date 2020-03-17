#include <iostream>
#include <maxHeap.h>
using namespace std;

/* Write the code to implement a complete binary heap using an array ( Not a vector ).
Code for Max heap.
AddElement, GetMax, HeapSort, ShuffleUp, ShuffleDown, etc

1. Set array size to 31 possible integers.
2. Add 15 elements 1,3,27,22,18,4,11,26,42,19,6,2,15,16,13
3. Have a default constructor that initializes the array to zeros..
4. data in the heap will be double datatype.
5. Convert Program 4 to template, test with integers, double and char
 */

// Prototype of a utility function to swap two integers


// A class for Min Heap


// Driver program to test above functions
int main()
{
    MaxHeap<double> bheap1(31);
    bheap1.insertKey(1);
    bheap1.insertKey(3);
    bheap1.insertKey(27);
    bheap1.insertKey(22);
    bheap1.insertKey(18);
    bheap1.insertKey(4);
    bheap1.insertKey(11);
    bheap1.insertKey(26);
    bheap1.insertKey(42);
    bheap1.insertKey(19);
    bheap1.insertKey(6);
    bheap1.insertKey(2);
    bheap1.insertKey(15);
    bheap1.insertKey(16);
    bheap1.insertKey(13);
    bheap1.deleteKey(11);
    cout << bheap1.extractMin() << " " << endl;
    cout << bheap1.getMin() << " " << endl;
    bheap1.decreaseKey(2, 1);
    cout << "Max value:" << bheap1.getMin() << endl;

MaxHeap<int> bheap2(31);
    bheap2.insertKey(1);
    bheap2.insertKey(3);
    bheap2.insertKey(27);
    bheap2.insertKey(22);
    bheap2.insertKey(18);
    bheap2.insertKey(4);
    bheap2.insertKey(11);
    bheap2.insertKey(26);
    bheap2.insertKey(42);
    bheap2.insertKey(19);
    bheap2.insertKey(6);
    bheap2.insertKey(2);
    bheap2.insertKey(15);
    bheap2.insertKey(16);
    bheap2.insertKey(13);
    bheap2.deleteKey(11);



    MaxHeap<char> bheap3(31);
    bheap3.insertKey(1);
    bheap3.insertKey(3);
    bheap3.insertKey(27);
    bheap3.insertKey(22);
    bheap3.insertKey(18);
    bheap3.insertKey(4);
    bheap3.insertKey(11);
    bheap3.insertKey(26);
    bheap3.insertKey(42);
    bheap3.insertKey(19);
    bheap3.insertKey(6);
    bheap3.insertKey(2);
    bheap3.insertKey(15);
    bheap3.insertKey(16);
    bheap3.insertKey(13);
    bheap3.deleteKey(11);



    return 0;
}
