#include <iostream>
using namespace std;

class LISTofIntVars {
public:
// check if space left to use
    bool isFull() {
        return count == 100;
    }
// called individually and also by the add method
    bool addVal ( int inVal) {
        if (!isFull()) {
            count++; // add 1 to count
            for (int i = 0; i < 100; i++) {
                if (arr[i] == -1) { arr[i] = inVal; }
                else return false;
            }
            return false;
        }
    }

// check if any data iin storage
    bool isEmpty() {
        return count == 0;
    }
//called individually and also by the add method

// check if item in list
    bool search (int inVal) { // called individually and also by the delete method
        if (!isEmpty()) {
            for (int i = 0; i < 100; i++) {
                if (arr[i] == inVal) { return true; }
                else { return false; }
            }
        }
        return false;
    }

    bool deleteVal (int inVal) {
        for(int i = 0; i < 100; i++) {
            if (arr[i] == inVal) {
                arr[i] = -1;
                return true;
            }
            else { return false; }
        }
    }

    int listAll() {
        for ( int i = 0; i < 100; i++) {
            if (arr[i] != -1) cout << i << endl;
            count++;
        }
        return count;
    }

    int countAll() {
        for (int i = 0; i < 100; i++) {
            if (arr[i] != -1) count++;
        }
        return count;
    }

    int sortArr() {
       for (int i = 0; i < 100; i++) {
           
       }
}
// others
    void userInput(){
        int input = 0;
        int tempVal;
        restart:
        cout << "Enter option:\n 1.Add\n 2.Remove\n 3.Search\n 4.Print\n 5.Node Count" << endl;
        cin >> input;
        switch (input) {
            case 1:
                cout << "Add value to list: ";
                cin >> tempVal;
                LISTofIntVars::addVal(tempVal);
                break;
            case 2:
                cout << "Removing the value: ";
                cin >> tempVal;
                LISTofIntVars::deleteVal(tempVal);
                break;
            case 3:
                cout << "Enter value to search: \n";
                cin >> tempVal;
                LISTofIntVars::search(tempVal);
                break;
            case 4:
                cout << "Printing all the stored values: \n";
                LISTofIntVars::listAll();
                break;
            case 5:
                cout << "Number of integers: " <<  LISTofIntVars::countAll() << endl;
            default:
                goto restart;
        }
    }

private:
    int arr[100];
    int count;
};


int main() {
    cout << "Carol Sanders Array sort and search" << endl; // Test all access methods
    LISTofIntVars L1{};
    int newArr[100];
    for (int i : newArr) {
        L1.addVal(i); // Adding 100 integers to newArr
    }

    L1.listAll();
    L1.deleteVal(17);
    L1.listAll();

    if ( L1.search(17) ) { cout << "17 Found" << endl; }
    else { cout << "17 not found"<< endl; }

    if ( L1.search(42) ) { cout << "42 Found" << endl; }
    else { cout << "14 not found" << endl; }

    // L1.makeEmpty(); makeEmpty function is Not yet coded
    L1.listAll();
    L1.userInput();
    system("pause");  //not needed on the Mac
    return 0;
}