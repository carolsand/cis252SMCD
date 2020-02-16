#include <iostream>
#include "./linked_list_using_classes.cpp"

using namespace std;

// linked list.cpp : Defines the entry point for the console application.
// ADT Unsorted LIST - Implemented with one way linked list...
// Basic Methods..
// NOTE: data can be modified per spec.
// Author: Professor Schwarz
// Linked List class comes from: https://gist.github.com/arunenigma/5183451 not a proper header
// File but not my List class definition nonetheless

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
    cout << " I chose to use both classes to practice creating more than one list object" << endl;
    LinkedList  L1; // Step 2 - Declare instance of your new class / data type /
    LIST L2;

    // Step 3 Use Dot Notation to access and test public functions.
    L1.addNode(2);
    L1.addNode(22);
    L1.addNode(1);
    L1.addNode(11);
    L1.addNode(42);
    L1.addNode(102);
    cout << "Nodes in Linked List: " << endl;
    L1.display();
    cout << " Reversing the List" << endl;
    L1.reverseList(); //Buggy
    cout << "Search for 42: " << L2.search(42) << endl;
    cout << "Search for 69: " << L2.search(69) << endl;
    cout << "Remove 11: " << L2.remove(11) << endl;
    cout << "Remove 22: " << L2.remove(22) << endl;
    cout << "Remove 69: " << L2.remove(69) << endl;
    cout << "Remaining nodes in the list:" << endl;
    L1.display();
    if ( L2.search(17) ) { cout << "17 Found" << endl; }
    else { cout << "17 not found"<< endl; }

    if ( L2.search(42) ) { cout << "42 Found" << endl; }
    else { cout << "14 not found" << endl; }

    if(L2.isEmpty()) {cout << "There are no items in the list" << endl; }

    L2.printAll();
    system("pause");  //not needed on the Mac
    return 0;
}

