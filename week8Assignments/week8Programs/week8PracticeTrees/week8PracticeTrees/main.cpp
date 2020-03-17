#include <iostream>                        // A tree is non cyclic while a graph is acyclic
using namespace std;

char tree[20];
int position;

int root(char key)
{
    if(tree[0] != '\0')
        cout << "Tree already had root";
    else{
        tree[0] = key;
        position++;
    }
        
    return 0;
}
  
int set_left(char key, int parent)
{
    if(tree[parent] == '\0')
        cout << "\nCan't set child at " << (parent * 2) + 1 << " , no parent found";
    else{
        tree[(parent * 2) + 1] = key;
        position++;
    }
        
    return 0;
}
  
int set_right(char key, int parent)
{
    if(tree[parent] == '\0')
        cout << "\nCan't set child at " << (parent * 2) + 2 << " , no parent found";
    else{
        tree[(parent * 2) + 2] = key;
        position++;
    }
        
    return 0;
}
  
int print_tree()
{
    for(int i = 0; i < 20; i++)
    {
        if(tree[i] != '\0')
            cout << tree[i] << " ";
        else
            cout << "- ";
    }
    cout << endl;
    return 0;
}



void deleteSpecificChar(char val){
    int child;
    for(int i = 0; i < 20; i++) {
        if(tree[i] == val) {
            if(tree[(2 * i) + 1] != '\0'){
                child = tree[i];
                tree[i] = tree[(2 * i) + 1];
                tree[(2 * i) + 1] = child;
                deleteSpecificChar(val);
                break;
            } else {
                tree[i] = '\0';
                break;
            }
        }
    }
}
  
  
/* Driver Code */
int main()
{
    cout << "Carol Sanders CIS 252 Trees"  << endl ;
    
    // Insert char that makes tree
    root('A');
    set_right('C', 0);
    set_left('X', 0);
    
    set_left('D', 1);           // C's children
    set_right('E', 1);          // C's children
    
    set_left('Y', 2);           // X's children
    set_right('F', 2);          // X's children

    cout << "Before deletion" << endl;
    print_tree();
    
     //   deleteChar();
    deleteSpecificChar('X');
    deleteSpecificChar('C');
    
    cout << "After deletion" << endl;
    print_tree();
    
    return 0;
};
