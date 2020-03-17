#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class List {
public:
    string lastName[10];
};

class ArrayListClass {
public:
    List names[27];
    void read(string fileName);
    void print();
    void search(string searchName);
    void printSpecificChar(char letter);
    ArrayListClass(string fileName) {
        read(fileName);
    }
};
void ArrayListClass::search(string searchName) {
    for (int i = 1; i <= 26; i++) {
        for (int j = 0; j <= 9; j++) {
            if (names[i].lastName[j] == searchName) {
                cout << names[i].lastName[j] << endl;
                return;
            }
        }
    }
    cout << searchName << " doesn't exist in the list." << endl;
};
void ArrayListClass::read(string fileName) {
    ifstream readFile(fileName);
    if (readFile.is_open()) {
        for (int i = 1; i <= 26; i++) {
            for (int j = 0; j <= 9; j++) {
                getline(readFile, names[i].lastName[j]);
            }
        }
        readFile.close();
    }
    else { cout << "ERR: Cant open file.\n"; }
}
void ArrayListClass::print() {
    char letter = 64;
    for (int j = 1; j <= 26; j++) {
        letter = 64 + j;
        cout << "Words starting with: " << letter << endl;
        for (int i = 0; i < 10; i++) {
            cout << names[j].lastName[i] << endl;  // here you can set up on your own way
        }
        cout << endl;
    }
}

void ArrayListClass::printSpecificChar(char letter) { 
    int index = letter - 64;  // converting a letter to index
    if (index > 0 && index < 27) {
        cout << "List of " << letter << " names..." << endl;
        for (int i = 0; i <= 9; i++)
            cout << names[index].lastName[i] << endl;
        cout << endl;
    }
    else
        cout << "The list does not contain words with that letter." << endl;
    
}

//int argc, const char * argv[])
int main() {
    cout << "Carol Sanders March CIS 252 MidTerm  Part2" << endl;
    cout << "Array of 27 LIst Classes" << endl;

    std::ifstream myfile("./names.txt");
    ArrayListClass listOfNames("./names.txt");
    //listOfNames.search("Nzeogwu");
    //listOfNames.search("Ben");
    // for printSpecificChar the index value will be the location of the character you want 1 for A, 2 for B, 3 for C, 26 for Z
    listOfNames.printSpecificChar('F');
    listOfNames.print();
    cout << endl;

    return 0;
}