#include <iostream>
using namespace std;

template <class T>
class MaxHeap
{
private:
    T heapArr[31]{0}; // Array of elements in heap
    int capacity;  // maximum possible size of heap
    int heap_size; // Current number of elements in heap
    int root;   // beginning of Heap
    int INT_MAX;   // largest node value
    int INT_MIN;   // largest node value

public:
    MaxHeap(int capacity);

    // to heapify a subtree with the root at a given index
    void MaxHeapify(int i );

    int parent(int i) { return (i-1)/2; }

    // to get index of left child of node at index i
    int left(int i) { return (2*i + 1); }

    // to get index of right child of node at index i
    int right(int i) { return (2*i + 2); }

    // to extract the root which is the maximum element
    int extractMin();

    // Decreases key value of key at index i to new_val
    void decreaseKey(int i, T new_val);

    // Returns the maximum key (key at root) from min heap
    int getMin() { return heapArr[1]; }

    // Deletes a key stored at index i
    void deleteKey(int i);

    // Inserts a new key 'k'
    void insertKey(int k);

    // Swap nodes values
    void swap(int x, int y);

    // Sorts heap
   void HeapSort(){
    int i;
       if(heap_size == 0 )
           return;
        else {
            if(root <= heapArr[i - 1]){
                MaxHeapify(heapArr[i - 1]);
               }
           }
   }
};

// Constructor: Builds a heap from a given array a[] of given size
template <class T>
MaxHeap<T>::MaxHeap(int cap)
{
    heap_size = 0;
    heapArr[0] = cap;
}

// Inserts a new key (value/ element) 'k'
template <class T>
void MaxHeap<T>::insertKey(int k)
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
    while (i != 0 && heapArr[parent(i)] < heapArr[i])
    {
       swap(heapArr[i], heapArr[parent(i)]);
       i = parent(i);
    }
}

// Decreases value of key at index 'i' to new_val.  It is assumed that
// new_val is smaller than heapArr[i].
template <class T>
void MaxHeap<T>::decreaseKey(int i, T new_val)
{
    heapArr[i] = new_val;
    while (i != 0 && heapArr[parent(i)] > heapArr[i])
    {
       swap(heapArr[i], heapArr[parent(i)]);
       i = parent(i);
    }
}

// Method to remove maximum element (or root) from min heap
template <class T>
int MaxHeap<T>::extractMin()
{
    if (heap_size <= 0)
        return INT_MAX;
    if (heap_size == 1)
    {
        heap_size--;
        return heapArr[0];
    }

    // Store the maximum value, and remove it from heap
    int root = heapArr[0];
    heapArr[0] = heapArr[heap_size-1];
    heap_size--;
    MaxHeapify(0);

    return root;
}


// This function deletes key at index i. It first reduced value to minus
// infinite, then calls extractMin()
template <class T>
void MaxHeap<T>::deleteKey(int i)
{
    decreaseKey(i, INT_MAX);
    extractMin();
}

// A recursive method to heapify a subtree with the root at given index
// This method assumes that the subtrees are already heapified
template <class T>
void MaxHeap<T>::MaxHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int largest = i;
    //if (l < heap_size && heapArr[l] < heapArr[i])
	if (heapArr[i] < heapArr[l] && heap_size < l)
        largest = l;
    //if (r < heap_size && heapArr[r] < heapArr[largest])
	if (heapArr[largest] < heapArr[r] && heap_size < r)
        largest = r;
    if (largest != i)
    {
        swap(heapArr[i], heapArr[largest]);
        MaxHeapify(largest);
    }
}

// A utility function to swap two elements
template <class T>
void MaxHeap<T>::swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
