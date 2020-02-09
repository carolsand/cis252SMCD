#include <iostream>
using namespace std;

class LISTofIntVars {
private:
    int  v1, v2, v3, v4, v5, v6, v7, v8, v9, v10;
    int count;
public:
    // constructor - Initialize (set first value ) for the variables.
    LISTofIntVars() {
        v1 = v2 = v3 = v4 = v5 = v6 = v7 = v8 = v9 = v10 = -1;
        count = 0;
    }
    // check if space left to use
    bool isFull() {
        if ( count == 10) { return true;}
        else
        { return false; }
    }
    // called individually and also by the add method
    bool add1 ( int inVar) {
        if (isFull()) {
            count++; // add 1 to count
            if (v1 == -1) { v1 = inVar; }
            else if (v2 == -1) { v2 = inVar; return true; }
            else if (v3 == -1) { v3 = inVar; return true; }
            else if (v4 == -1) { v4 = inVar; return true; }
            else if (v5 == -1) { v5 = inVar; return true; }
            else if (v6 == -1) { v6 = inVar; return true; }
            else if (v7 == -1) { v7 = inVar; return true; }
            else if (v8 == -1) { v8 = inVar; return true; }
            else if (v9 == -1) { v9 = inVar; return true; }
            else if (v10 == -1) { v10 = inVar; return true; }
            else return false;
        }
        return false;
     }
     // check if any data iin storage
     bool isEmpty() {
         return count == 0;
     } //called individually and also by the add method

     // check if item in list
     bool found (int inVal) { // called individually and also by the delete method
         if (isEmpty()) {
             if (v1 == inVal) { return true; }
             else if (v2 == inVal) { return true; }
             else if (v3 == inVal) { return true; }
             else if (v4 == inVal) { return true; }
             else if (v5 == inVal) { return true; }
             else if (v6 == inVal) { return true; }
             else if (v7 == inVal) { return true; }
             else if (v8 == inVal) { return true; }
             else if (v9 == inVal) { return true; }
             else if (v10 == inVal) { return true; }
             else return false;
         }
         return false;
     }

    bool delete1 (int inVal) {
        if ( v1 == inVal) {v1 = -1; return true; }
        else if (v2 == inVal) {v2 = -1; return true;}
        else if (v3 == inVal) {v3 = -1; return true; }
        else if (v4 == inVal) { v4 = -1; return true; }
        else if (v5 == inVal) { v5 = -1; return true; }
        else if (v6 == inVal) {v6 = -1; return true; }
        else if (v7 == inVal) {v7 =- 1; return true; }
        else if (v8 == inVal) {v8 = -1; return true; }
        else if (v9 == inVal) {v9 = -1; return true; }
        else if (v10 == inVal) {v10 = -1; return true; }
        else { return false; }
        // return false;  unreachable code
        }


    void listAll() {
     ;;   if (v1 != -1) cout << v1 << endl;
        if (v2 != -1) cout << v2 << endl;
        if (v3 != -1) cout << v3 << endl;
        if (v4 != -1) cout << v4 << endl;
        if (v5 != -1) cout << v5 << endl;
        if (v6 != -1) cout << v6 << endl;
        if (v7 != -1) cout << v7 << endl;
        if (v8 != -1) cout << v8 << endl;
        if (v9 != -1) cout << v9 << endl;
        if (v10 !=-1) cout << v10 << endl;
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
