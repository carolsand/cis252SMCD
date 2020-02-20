#include <iostream>
#include <stdio.h>

using namespace std;

class LISTofIntVars {
public:
// check if space left to use
    bool isFull() {
        return count == 100;
    }

// called individually and also by the add method
    bool addVal(int inVal) {
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

    int isSorted(int arrSize, int arr[]) {
        // Base Case
        // if Array has size equal to 0 or 1 then the array is sorted
        if (arrSize <= 1) {
            return 1;
        }
        // Recursive Case
        //
        if (arr[arrSize - 1] >= arr[arrSize - 2]) {
            return isSorted(arr[arrSize - 1], arr);
        }
        return 0;
    }


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

    bool sort(int inVa){
    if (!isEmpty()) {
        for (int i= 0; i < 100; i++){
            if (arr[i] == arr[i - 1]){
                return true;
            }
        }
    }
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
        cout << "Enter option:\n 1.Add\n 2.Remove\n 3.Search\n 4.Print\n 5.Node Count\n 6.Exit Program" << endl;
        cin >> input;
        switch (input) {
            case 1:
                cout << "Add value to list: ";
                cin >> tempVal;
                LISTofIntVars::addVal(tempVal);
            case 2:
                cout << "Removing the value: ";
                cin >> tempVal;
                LISTofIntVars::deleteVal(tempVal);
            case 3:
                cout << "Enter value to search: \n";
                cin >> tempVal;
                LISTofIntVars::search(tempVal);
            case 4:
                cout << "Printing all the stored values: \n";
                LISTofIntVars::listAll();
            case 5:
                cout << "Number of integers: \n" <<  LISTofIntVars::countAll();
            case 6:
                cout << "Exit Program\n";
                break;
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
    cout << "List of integers in array \n" << L1.listAll() << endl;

    L1.deleteVal(17);
    cout << "List of integers in array  after deleting integer 17 \n" << L1.listAll() << endl;

    if ( L1.search(17) ) { cout << "17 Found" << endl; }
    else { cout << "17 not found"<< endl; }

    if ( L1.search(42) ) { cout << "42 Found" << endl; }
    else { cout << "42 not found" << endl; }

    int arrSmall[] = {15,1,2,3,4};
    int size = 5;
    int sorted = L1.isSorted(size, arrSmall);
    printf("This is the sorted list: \n", sorted);

    L1.userInput();

    system("pause");  //not needed on the Mac
    return 0;
}
