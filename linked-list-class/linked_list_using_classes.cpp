// Linkedlist implementation using Classes in C++
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};

class LinkedList{
public:
    LinkedList() { // constructor
        head = NULL;
    }
    ~LinkedList() {}; // destructor
    void addNode(int val);
    void reverseList();
    void display();
private:
    Node* head;
};

// function to add node to a list
void LinkedList::addNode(int val) {
    Node* newnode = new Node();
    newnode->data = val;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
    }
    else {
        Node* temp = head; // head is not NULL
        while (temp->next != NULL) { 
            temp = temp->next; // go to end of list
        }
        temp->next = newnode; // linking to newnode
    }
}

// reverse Linked List
void LinkedList::reverseList() {
    Node* temp = head;
    Node* nextnode = NULL;
    Node* revnode = NULL;
    while (temp != NULL) {
        head = temp;
        nextnode = temp->next;
        temp->next = revnode;
        revnode = temp;
        temp = nextnode;
    }
}

void LinkedList::display() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
    }
    else {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    LinkedList* list = new LinkedList();
    list->addNode(100);
    list->addNode(200);
    list->addNode(300);
    list->addNode(400); 
    list->addNode(500);
    cout << "Linked List data" << endl;
    list->display();
    list->reverseList();
    cout << "Reversed Linked List data" << endl;
    list->display();
    delete list;
    return 0;
}


