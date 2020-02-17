#include <iostream>
#include <stdc++>
using namespace std;

class NODE {
public:
    int data; // data
    NODE * ptrNext;  // next node in linked list
    NODE() { ptrNext = NULL; }
};

class LIST {
public:
    NODE * ptrHead;  // Start of linked list
    NODE* SortedMerge(NODE* a, NODE* b);
    void FrontBackSplit(NODE* source, NODE** frontRef, NODE** backRf);
    void add(int inData);
    bool remove (int inData);
    bool isEmpty();
    int count ();
    bool search(int inData);
    void printAll();
    void userInput();
    void mergeSort(NODE** headRef);
    LIST() { ptrHead = NULL; nodeCount = 0;}

private:
    int nodeCount;
};

void LIST::add(int inData){ // Insert at beginning - Unsorted list - Fastest insert}
    if (ptrHead == NULL) { // add first data to list
        ptrHead = new NODE;
        ptrHead->data = inData;
        ptrHead->ptrNext = NULL;

    }
    else // add at beginning - already data in list
    {
        NODE * ptrNewNode = new NODE;
        ptrNewNode->ptrNext = ptrHead;
        ptrNewNode->data = inData;
        ptrHead = ptrNewNode;
    }
    nodeCount++;
}


bool LIST::remove(int inData) {
    if (ptrHead == NULL) { // no nodes ... nothing to do
        return false;
    } else if (nodeCount == 1) // check only one node
    {
        NODE *ptrDel = ptrHead;
        if (ptrHead->data == inData) {
            delete ptrDel;
            ptrHead = NULL;
            nodeCount = 0;
            return true;
        } else { return false; }
    } else // multiple nodes
    {
        NODE *ptrCurrent = ptrHead; // start at beginning
        NODE *ptrPrevious = NULL;
        while (ptrCurrent->ptrNext != NULL) // advance to next node...?
        {
            ptrPrevious = ptrCurrent; // save current as previous
            ptrCurrent = ptrCurrent->ptrNext; // advance to next node

            if (ptrCurrent->data == inData) {
                ptrPrevious->ptrNext = ptrCurrent->ptrNext; // bypass node
                delete ptrCurrent; // delete bypassed node
                nodeCount--;
                return true;
            }
        }
        return false;
    }
}
bool LIST::isEmpty() {
    if (ptrHead == NULL) {
        return true;
    }
    else {
        return false;
    }
}

int LIST::count() {
    return nodeCount;
}

bool LIST::search(int inData) {
    NODE * ptrCurrent = ptrHead; // start at the beginning
    while (ptrCurrent != NULL) {
        if (ptrCurrent->data == inData ) {
            return true;
        }
        else {
            ptrCurrent = ptrCurrent->ptrNext; // advance to next node
        }
    }
    return false;
}

void LIST::printAll() {
    NODE * ptrCurrent = ptrHead; // start at the beginning
    while (ptrCurrent != NULL) {
        cout << ptrCurrent->data << endl;
        ptrCurrent = ptrCurrent->ptrNext; //advance to next node
    }
}

void LIST::userInput(){
    int input = 0;
    int tempVal;
    restart:
    cout << "Enter option:\n 1. Add\n 2. Remove\n 3. Print\n 5. Node Count" << endl;
    cin >> input;
    switch (input) {
        case 1:
            cout << "Add value to list: ";
            cin >>tempVal;
            LIST::add(tempVal);
            break;
        case 2:
            cout << "Removing the value: ";
            LIST::remove(tempVal);
            break;
        case 3:
            cout << "Printing All Values: \n";
            LIST::printAll();
    }
}

/* sorts the linked list by changing next pointers (Not contents of bucket) */
void LIST::mergeSort(NODE** headRef) {
    /* Base Case */
    NODE *ptrCurrent = ptrHead; // start at the beginning
    NODE* head = *headRef;
    NODE* a;
    NODE* b;
    /* Base Case ---length 0 or 1 */
    if ((head == NULL) || (head -> == NULL)) {
        return;
    }
    /* Split head into two lists a and b */
    FrontBackSplit(head, &a, &b);

    /* Recursively sort the sub-lists a and b */
    mergeSort(&a);
    mergeSort(&b);

    /* Result = merging two sorted lists together */
    *headRef = SortedMerge(a, b);
}

void moveNode(NODE** desRef, NODE** sourceRef);
    int next;

    NODE* SortedMerge(NODE* a, NODE* b)
{
    NODE* result = NULL;
    /* Base Cases*/
    if (a == NULL){
        return (b);
    }
    else if(b == NULL){
        return a;
    }
    /* Pick either a or b and recurse */
    if (a->data <= b->data) {
        result = a;
        result ->next = SortedMerge(a->next, b);
    } else {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
    return result;
}

// Utility Function to split the given list
void FrontBackSplit(NODE* source, NODE** frontRef, NODE** backRef){
    NODE* fast;
    NODE* slow;
    slow = source;
    fast = source ->next;
    /* Advance two nodes or one node */
    while (fast != NULL){
        fast = fast->next;
        if(fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    /* slow is before the midpoint in the list, so spilt it in two at the point */
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}


int main() {
    cout << "Carol Sanders Feb 16, 2020" << endl;
    int sortArr[] = {1,2,79,4,19,26,45,3,9,18,25,34,56,48,55,91,2001,2010,156};

    LIST L1; // Step 2 - Declare instance of your new class / data type /

    // Step 3 Use Dot Notation to access and test public functions.
    L1.add(2);
    L1.add(22);
    L1.add(1);
    L1.add(11);
    L1.add(42);
    L1.add(102);
    L1.printAll();
    cout << "List count: " << L1.count() << endl;
    cout << "List is empty: " << L1.isEmpty() << endl;
    cout << "Search for 42: " << L1.search(42) << endl;
    cout << "Search for 69: " << L1.search(69) << endl;
    cout << "Remove 11: " << L1.remove(11) << endl;
    cout << "Remove 22: " << L1.remove(22) << endl;
    cout << "Remove 69: " << L1.remove(69) << endl;
    L1.printAll();

    L1.userInput();
    L1.mergeSort( sortArr[]);

    if ( L1.search(17) ) { cout << "17 Found" << endl; }
    else { cout << "17 not found"<< endl; }

    if ( L1.search(42) ) { cout << "42 Found" << endl; }
    else { cout << "14 not found" << endl; }

    L1.userInput();
    system("pause");  //not needed on the Mac
    return 0;
}

/* MergeSort(headRef)
1) If the head is NULL or there is only one element in the Linked List
    then return.
2) Else divide the linked list into two halves.
      FrontBackSplit(head, &a, &b); // a and b are two halves
3) Sort the two halves a and b.
MergeSort(a);
MergeSort(b);
4) Merge the sorted a and b (using SortedMerge() discussed here)
and update the head pointer using headRef.
*headRef = SortedMerge(a, b);
*/