#include <iostream>
using namespace std;

class LISTofIntVars {
private:
    int maxVars;
    int count;
    IntVars* varEntries;
public:
    LISTofIntVars(int maxVars = 10);
    ~LISTofIntVars();
// check if space left to use
    bool isFull() {
        if ( count == 10) { return true;}
        else
        { return false; }
    }
// called individually and also by the add method
    bool add1 ( const  LISTofIntVars& varEntries) {
        while (i >= 0 && varEntries) { // remove while loop
            if (isFull()) {
                count++; // add 1 to count
                for (i = 0; i < maxVars; i++) {
                    if (i == -1) { i = inVar; }
                    else return false;
                }
                return false;
            }
        }
    }
// check if any data iin storage
    bool isEmpty() {
        return count == 0;
    }
//called individually and also by the add method

// check if item in list
    bool found (int inVal) { // called individually and also by the delete method
        if (isEmpty()) {
            for (i = 0; i < maxVars; i++) {
                if (i == inVal) { return true; }
                else { return false; }
            }
        }
        return false;
    }

    bool delete1 (int inVal) {
        for(i = 0; i < maxVars; i++) {
            if (i == inVal) {
                i = -1;
                return true;
            }
            else { return false; }
        }
    }

    void listAll() {
        for ( i = 0; i < maxVars; i++) {
            if (i != -1) cout << i << endl;
        }
    }
// others
};

int main() {
    cout << "Hello, World!" << endl; // Test all access methods
    LISTofIntVars L1;
    L1.add1(42);
    L1.add1(17);
    L1.listAll();
    L1.delete1(17);
    L1.listAll();

    if ( L1.found(17) ) { cout << "17 Found" << endl; }
    else { cout << "17 not found"<< endl; }

    if ( L1.found(42) ) { cout << "42 Found" << endl; }
    else { cout << "14 not found" << endl; }

    // L1.makeEmpty(); makeEmpty function is Not yet coded
    L1.listAll();
    system("pause");  //not needed on the Mac
    return 0;
}
