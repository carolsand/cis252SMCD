/* I have rewritten part of your code for a LIST using pointers.
You code was way to much ...

Take a look at this and start with it...

 */

#include <iostream>
#include <stack>

using namespace std;

void userInput() {
    int input = 0;
    stack <string> ListStack;
    string tempVal;
    restart:
    cout << "Enter option:\n 1.Add\n 2.Remove\n 3 Reverse\n 4.Print Last entered \n 5.Show Size\n 6.Exit Program\n" << endl;
    cin >> input;
    switch (input) {
        case 1:
            cout << "Add word to list: ";
            cin >> tempVal;
            ListStack.push(tempVal);
            cout << "Value entered: " << ListStack.top() << endl;
            goto restart;
        case 2:
            cout << "Removing the last value entered: "; ListStack.pop();
            goto restart;
        case 3:
            cout << "there is no reverse method in the std stack lib: \n";
//                ListStack.reverse();  there is no reverse in the stack lib
            goto restart;
        case 4:
            cout << "Printing the last stored value:" << ListStack.top() << endl;
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


int main() {
    cout << "Carol Sanders Stack  methods " << endl; // Test all access methods
    userInput();

    system("pause");  //not needed on the Mac
    return 0;
}