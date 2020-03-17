#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *ptrNext;
    Node() { ptrNext = NULL; };
};
class List {
public:
    Node *ptrHead;
    void add(int inData);
    bool remove(int inData);
    bool isEmpty();
    int count();
    bool search(int inData);
    void printAll();
    void userInput();
    List() { ptrHead = NULL; nodeCount = 0;}
private:
    int nodeCount;
};
void List::add(int inData) { // YOU are never changing the data
    Node *ptrNewNode = new Node;
    ptrNewNode->data = inData;
    if( ptrHead == NULL) {
        ptrHead = new Node;
        ptrHead->data = inData;
        ptrHead->ptrNext = NULL;
    } else if (nodeCount == 1) {
        if(ptrHead->data < inData) { // conditions 4<13 or 13>45
            ptrHead->ptrNext = ptrNewNode;
        } else { // 45>13
            ptrNewNode->ptrNext = ptrHead;
            ptrHead = ptrNewNode;
        }
    } else {
        Node *ptrCurrent = ptrHead; // temp var to iterate through while loop // ptrCurrent = ptrHead to compare to the rest of the nodes
        Node *ptrPrevious = NULL;
        while(ptrCurrent->ptrNext != NULL) { // 13<45  23 // when this iterates through the while loop this loop will NOT check the tail
            if(ptrNewNode->data < ptrCurrent->data){ // if the new number you're adding is the less than the current  number // inside conditionals you can use the data to compare
                if(ptrCurrent == ptrHead){
                    ptrNewNode->ptrNext = ptrHead;
                    ptrHead = ptrNewNode;
                    break;
                }
                ptrPrevious->ptrNext = ptrNewNode;
                ptrNewNode->ptrNext = ptrCurrent;
                break;
            }
            ptrPrevious = ptrCurrent; // counter
            ptrCurrent = ptrCurrent->ptrNext;
            if(ptrCurrent->ptrNext == NULL) { // this is checking for the tail
                if(ptrNewNode->data < ptrCurrent->data){
                    ptrPrevious->ptrNext = ptrNewNode;
                    ptrNewNode->ptrNext = ptrCurrent;
                    break;
                }
                ptrCurrent->ptrNext = ptrNewNode;
                break;
            }
        }
    }
    nodeCount++;
}
bool List::remove(int inData) {
//    if(ptrHead == NULL) {
    if(isEmpty()) {
        return false;
    } else if (nodeCount == 1){
        Node *ptrDel = ptrHead;
        if(ptrHead->data == inData) {
            delete ptrDel;
            ptrHead = NULL;
            nodeCount = 0;
            return true;
        } else { return false;  }
    } else {
        Node *ptrCurrent = ptrHead;
        Node *ptrPrevious = NULL;
        while(ptrCurrent->ptrNext != NULL) {
            if(ptrCurrent->data == inData) {
                if(ptrCurrent == ptrHead ) {
                    ptrHead = ptrCurrent->ptrNext;
                    delete ptrCurrent;
                } else {
                    ptrPrevious->ptrNext = ptrCurrent->ptrNext;
                    delete ptrCurrent;
                }
                nodeCount--;
                return true;
            }
            ptrPrevious = ptrCurrent;
            ptrCurrent = ptrCurrent->ptrNext;
            if(ptrCurrent->data == inData && ptrCurrent->ptrNext == NULL){
                delete ptrCurrent;
                ptrPrevious->ptrNext = NULL;
                nodeCount--;
                return true;
            }
        }
        return false;
    }
}

bool List::isEmpty() {
    if( ptrHead == NULL )
        return true;
    else
        return false;
}

int List::count() {
    return nodeCount;
}

bool List::search(int inData) {
    Node *ptrCurrent = ptrHead;
    while( ptrCurrent != NULL ) {
        if( ptrCurrent->data == inData ){
            cout << "There exist element: " << ptrCurrent->data << endl;
            return true;
        }
        ptrCurrent = ptrCurrent->ptrNext;
    }
    cout << "No existing element: " << inData << endl;
    return false;
}

void List::printAll() {
    Node *ptrCurrent = ptrHead;
    while( ptrCurrent != NULL ) {
        cout << ptrCurrent->data << " ";
        ptrCurrent = ptrCurrent->ptrNext;
    }
    cout << endl;
}

void List::userInput(){
    int input = 0;
    int temp;
    restart:
    cout << "Enter option:\n1. Add\n2. Remove\n3. Search\n4. Print\n5. Node Count" << endl;
    cin >> input;
    switch (input) {
        case 1:
            cout << "Adding value: ";
            cin >> temp;
            List::add(temp);
            break;
        case 2:
            cout << "Remove value: ";
            cin >> temp;
            List::remove(temp);
            break;
        case 3:
            cout << "Search value: ";
            cin >> temp;
            List::search(temp);
            break;
        case 4:
            List::printAll();
            break;
        case 5:
            cout << "Number of nodes: "<< List::count() << endl;
        default:
            goto restart;
            break;
    }
    goto restart;
}


int main(int argc, const char * argv[]) {
    List l1;
    
    l1.add(13);
    l1.add(45);
    l1.add(23);
    l1.add(46);
    l1.add(10);
    l1.add(15);
    l1.add(4);
    l1.add(13);
    l1.add(14);
    l1.add(-1);
    l1.add(0);
    l1.add(1241231);
    l1.add(1341231);
    l1.add(-1231);
    l1.add(-1231123);
    l1.add(-12314311);
    l1.add(-12);
    l1.add(-30000000);
    l1.remove(-30000000);
    l1.remove(0);
    l1.remove(1341231);
    l1.search(1341231);
    l1.search(15);
    l1.search(-12314311);
    l1.search(1241231);
    l1.userInput();
    
    return 0;
}
