// linked list.cpp : Defines the entry point for the console application.
// ADT Unsorted LIST - Implemented with one way linked list...
// Basic Methods..
// NOTE: data can be modified per spec.
// Author: Professor Schwarz

// NOTE: You are to fix the ONE error in the code.

#include <iostream>
using namespace std;

// Step 1 Define classes NODE and LIST

class NODE {
public:
    int data; // data
    NODE * ptrNext;  // next node in linked list
    NODE() { ptrNext = NULL; }
};

class LIST {
public:
    NODE * ptrHead;  // Start of linked list
    void add(int inData);
    bool remove (int inData);
    bool isEmpty();
    int count ();
    bool search(int inData);
    void printAll();
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
                delete ptrCurrent; // delete bypadded node
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


int main() {
    cout << "Carol Sanders Feb 9, 2020" << endl;
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

    if ( L1.search(17) ) { cout << "17 Found" << endl; }
    else { cout << "17 not found"<< endl; }

    if ( L1.search(42) ) { cout << "42 Found" << endl; }
    else { cout << "14 not found" << endl; }

    L1.printAll();
    system("pause");  //not needed on the Mac
    return 0;
}

