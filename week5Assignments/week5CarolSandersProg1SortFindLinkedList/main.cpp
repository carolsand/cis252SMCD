/* I have rewritten part of your code for a LIST using pointers.
You code was way to much ...

Take a look at this and start with it...
 */

#include <iostream>
#include <cstdio>

using namespace std;

class NODE {
public:
    int data = 0;
    NODE * ptrNext = NULL;
};

class LISTofVars {
public:

    int nodeCount = 0;
    NODE * ptrHead = NULL;

    int getCount();
    void push( int inData );
    void insertSort(int inData);
    bool isEmpty();
    void printList();

};

void LISTofVars::push(int inData){

    NODE * ptrNew =new NODE;
    ptrNew->data = inData;

    if (isEmpty()) {
        ptrHead = ptrNew;
        nodeCount++;
    }
    else
    {
        ptrNew->ptrNext = ptrHead;
        ptrHead = ptrNew;
        nodeCount++;
    }
}

bool LISTofVars::isEmpty() {
    if (ptrHead == NULL)
    { return true; }
    else
    { return false; }
}

int LISTofVars::getCount() { return nodeCount; }

void LISTofVars::printList() {

    NODE * ptrCurrent = NULL;
    ptrCurrent = ptrHead;

    while ( ptrCurrent !=NULL )
    {
        cout << ptrCurrent->data << endl;
        ptrCurrent = ptrCurrent->ptrNext;
    }

}

void LISTofVars::insertSort(int inData) {
    if (inData >= ptrHead){
        ptrHead = reinterpret_cast<NODE *>(inData);
    }
    return inData;
}

int main()
{

    LISTofVars L1;
    cout << "Count is: " << L1.getCount() << endl;
    L1.push(6);
    L1.push(5);
    L1.push(42);

    cout << "Count is: " << L1.getCount() << endl;
    L1.printList();
    L1.insertSort()


}