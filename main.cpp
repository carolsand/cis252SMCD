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
    stack<char> listOfWords;
public:
    void userInput() {
        char input = 0;
        stack<char> ListStack;
        char tempVal;
        restart:
        cout << "Enter option:\n 1.Add\n 2.Remove\n 3.Print\n 4.Node Count\n 5.Exit Program" << endl;
        cin >> input;
        switch (input) {
            case 1:
                cout << "Add word to list: ";
                cin >> tempVal;
                stack::push(tempVal);
                goto restart;
            case 2:
                cout << "Removing the value: ";
                cin >> tempVal;
                stack::pop(tempVal);
                goto restart;
            case 3:
                cout << "Enter value to search: \n";
                cin >> tempVal;
                stack::search(tempVal);
                goto restart;
            case 4:
                cout << "Printing all the stored values: \n";
                stack::top();
                goto restart;
            case 5:
                cout << "Number of words: " << stack::size() << endl;
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
    StackOfWords::userInput();
    stack::push(calculus);
    system("pause");  //not needed on the Mac
    return 0;
}