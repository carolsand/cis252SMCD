/* I have rewritten part of your code for a LIST using pointers.
You code was way to much ...

Take a look at this and start with it...

 */

#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

class StackOfWords {
private:
    stack <string> listOfWords;

public:
    void userInput() {
        int input = 0;
        stack <string> ListStack;
        string tempVal;
        restart:
            cout << "Enter option:\n 1.Add\n 2.Remove\n 3.Print\n 4.Node Count\n 5.Exit Program" << endl;
            cin >> input;
        switch (input) {
            case 1:
                cout << "Add word to list: ";
                cin >> tempVal;
                ListStack.push(tempVal);
                goto restart;
            case 2:
                cout << "Removing the value: ";
                cin >> tempVal;
                ListStack.pop();
                goto restart;
            case 3:
                cout << "Enter value to search: \n";
                cin >> tempVal;
//                ListStack::search(tempVal);
                goto restart;
            case 4:
                cout << "Printing all the stored values: \n";
                ListStack.top();
                goto restart;
            case 5:
                cout << "Number of words: " << ListStack.size() << endl;
                goto restart;
            case 6:
                cout << "Exit Program" << endl;
                break;
            default:
                goto restart;
        }
    }
};

int main() {
    cout << "Carol Sanders Stack stadnrd methods " << endl; // Test all access methods
    StackOfWords s1;
    s1.userInput();

    system("pause");  //not needed on the Mac
    return 0;
}