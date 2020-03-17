#include <iostream>
using namespace std;

/* Write the code to implement a complete binary heap using an array ( Not a vector ). Code for Max heap.
AddElement, GetMax, HeapSort, ShuffleUp, ShuffleDown, etc

1. Set array size to 31 possible integers.
2. Add 15 elements 1,3,27,22,18,4,11,26,42,19,6,2,15,16,13
3. Have a default constructor that initializes the array to zeros..
4. data in the heap will be int datatype.
 */

// Prototype of a utility function to swap two integers
void swap(int x, int y);

// A class for Min Heap
class MinHeap
{
private:
    double heapArr[31]; // Array of elements in heap
    int capacity;  // maximum possible size of heap
    int heap_size; // Current number of elements in heap
    double root;   // beginning of Heap
    int INT_MAX;   // largest node value
    int INT_MIN;   // smallest node value

public:
    // Constructor
    MinHeap(double capacity);

    // to heapify a subtree with the root at given index
    void MinHeapify(int i );

    int parent(int i) { return (i-1)/2; }

    // to get index of left child of node at index i
    int left(int i) { return (2*i + 1); }

    // to get index of right child of node at index i
    int right(int i) { return (2*i + 2); }

    // to extract the root which is the minimum element
    int extractMin();

    // Decreases key value of key at index i to new_val
    void decreaseKey(int i, double new_val);

    // Returns the minimum key (key at root) from min heap
    int getMin() { return heapArr[0]; }

    // Deletes a key stored at index i
    void deleteKey(int i);

    // Inserts a new key 'k'
    void insertKey(int k);

    // Sorts heap
   void HeapSort(){
    int i;
       if(heap_size == 0 )
           return;
        else {
            if(root >= heapArr[i - 1]){
                MinHeapify(heapArr[i -1]);
               }
           }
   }
};

// Constructor: Builds a heap from a given array a[] of given size
MinHeap::MinHeap(double cap)
{
    heap_size = 0;
    heapArr[0] = cap;
}

// Inserts a new key 'k'
void MinHeap::insertKey(int k)
{
    if (heap_size == capacity)
    {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }

    // First insert the new key at the end
    heap_size++;
    int i = heap_size - 1;
    heapArr[i] = k;

    // Fix the min heap property if it is violated
    while (i != 0 && heapArr[parent(i)] > heapArr[i])
    {
       swap(heapArr[i], heapArr[parent(i)]);
       i = parent(i);
    }
}

// Decreases value of key at index 'i' to new_val.  It is assumed that
// new_val is smaller than heapArr[i].
void MinHeap::decreaseKey(int i, double new_val)
{
    heapArr[i] = new_val;
    while (i != 0 && heapArr[parent(i)] > heapArr[i])
    {
       swap(heapArr[i], heapArr[parent(i)]);
       i = parent(i);
    }
}

// Method to remove minimum element (or root) from min heap
int MinHeap::extractMin()
{
    if (heap_size <= 0)
        return INT_MAX;
    if (heap_size == 1)
    {
        heap_size--;
        return heapArr[0];
    }

    // Store the minimum value, and remove it from heap
    int root = heapArr[0];
    heapArr[0] = heapArr[heap_size-1];
    heap_size--;
    MinHeapify(0);

    return root;
}


// This function deletes key at index i. It first reduced value to minus
// infinite, then calls extractMin()
void MinHeap::deleteKey(int i)
{
    decreaseKey(i, INT_MIN);
    extractMin();
}

// A recursive method to heapify a subtree with the root at given index
// This method assumes that the subtrees are already heapified

void MinHeap::MinHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && heapArr[l] < heapArr[i])
        smallest = l;
    if (r < heap_size && heapArr[r] < heapArr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(heapArr[i], heapArr[smallest]);
        MinHeapify(smallest);
    }
}

// A utility function to swap two elements
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Driver program to test above functions
int main()
{
    MinHeap bheap1(31);
    bheap1.insertKey(1);
    bheap1.insertKey(2);
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
    bheap1.insertKey(45);
    bheap1.deleteKey(45);
    cout << bheap1.extractMin() << " ";
    cout << bheap1.getMin() << " ";
    bheap1.decreaseKey(2, 1);
    cout << "Min value:" << bheap1.getMin();
    cout << "Min value:" << bheap1.getMin();
    return 0;
}
