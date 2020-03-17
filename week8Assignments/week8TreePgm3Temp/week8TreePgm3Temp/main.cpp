#include <iostream>
#include <string>
using namespace std;

int position;

template <class T>
int root(T key)
{
    T tree[20] ;
    if(tree[0] != '\0')
        cout << "Tree already had root" << endl;
    else{
        tree[0] = key;
        position++;
    }
        
    return 0;
}
  
template <class T>
int set_left_child(T key,  int parent)
{
    T tree[20] ;
    if(tree[parent] == '\0')
        cout << "\nCan't set child at " << (parent * 2) + 1 << " , no parent found";
    else{
        tree[(parent * 2) + 1] = key;
        position++;
    }
        
    return 0;
}
  
template <class T>
int set_right_child(T key, int parent)
{
    T tree[20] ;
    if(tree[parent] == '\0')
        cout << "\nCan't set child at " << (parent * 2) + 2 << " , no parent found";
    else{
        tree[(parent * 2) + 2] = key;
        position++;
    }
        
    return 0;
}
  
template <class T>
int print_tree()
{
    T tree[20] ;
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

template <class T>
void deleteLeaf(T val){
    int child;
    T tree[20] ;
    for(int i = 0; i < 20; i++) {
        if(tree[i] == val) {
            if(tree[(2 * i) + 1] != '\0'){
                child = tree[i];
                tree[i] = tree[(2 * i) + 1];
                tree[(2 * i) + 1] = child;
                deleteLeaf(val);
                break;
            } else {
                tree[i] = '\0';
                break;
            }
        }
    }
}


int main(){
   cout << "Carol Sanders CIS 252 Programs"  << endl ;
   
   // Insert char that makes tree
   cout << " ............... Data Type: Char ..............."<< endl;
    root<char>('A');
    set_right_child<char>('C', 0);
    set_left_child<char>('X', 0);
    
    set_left_child<char>('D', 1);           // C's children
    set_right_child<char>('E', 1);          // C's children
    
    set_left_child<char>('Y', 2);           // X's children
    set_right_child<char>('F', 2);          // X's children

    cout << "Before deletion" << endl;
    print_tree<char>();
    
     //   deleteChar();
    deleteLeaf<char>('X');
    deleteLeaf<char>('C');
    
    cout << "After deletion" << endl;
    print_tree<char>();
    
    cout << " ............... Data Type: Integer..............."<< endl;
    root<int>('A');
    set_right_child<int>('C', 0);
    set_left_child<int>('X', 0);
    
    set_left_child<int>('D', 1);           // C's children
    set_right_child<int>('E', 1);          // C's children
    
    set_left_child<int>('Y', 2);           // X's children
    set_right_child<int>('F', 2);          // X's children

    cout << "Before deletion" << endl;
    print_tree<int>();
    
     //   deleteChar();
    deleteLeaf<int>('X');
    deleteLeaf<int>('C');
    
    cout << "After deletion" << endl;
    print_tree<int>();
    
    cout << " ............... Data Type: String..............."<< endl;
    
    //root<string>('A');    math operations do not work with strings
    //set_right_child<string>('C', 0);
    //set_left_child<string>('X', 0);
    //
    //set_left_child<string>('D', 1);           // C's children
    //set_right_child<string>('E', 1);          // C's children
    //
    //set_left_child<string>('Y', 2);           // X's children
    //set_right_child<string>('F', 2);          // X's children

    //cout << "Before deletion" << endl;
    //print_tree<string>();
    //
    //deleteChar();
    //deleteLeaf<string>('X');
    //deleteLeaf<string>('C');
    //
    //cout << "After deletion" << endl;
    //print_tree<string>();
   
   return 0;
};