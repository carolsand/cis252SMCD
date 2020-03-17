/*  Carol Sanders Binary Tree Implementation using Linked list */

#include <iostream>
using namespace std;


class node{
public:
      int value;
      node *left;
      node *right;
};

class btree{
public:
      btree();
      ~btree();
      void insert(int key);
      node *search(int key);
      void destroy_tree();
      void inorder_print();
      void postorder_print();
      void preorder_print();
private:
      void destroy_tree(node *leaf);
      void insert(int key, node *leaf);
      node *search(int key, node *leaf);
      void inorder_print(node *leaf);
      void postorder_print(node *leaf);
      void preorder_print(node *leaf);
      node *root;
};

btree::btree(){
  root = NULL;
}

btree::~btree(){
  destroy_tree();
}

void btree::destroy_tree(node *leaf){
      if(leaf != NULL){
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
  }
}

void btree::insert(int key, node *leaf){
      if(key < leaf->value)
      {
        if(leaf->left != NULL)
        {
          insert(key, leaf->left);
        }
        else
        {
          leaf->left = new node;
          leaf->left->value = key;
          leaf->left->left = NULL;
          leaf->left->right = NULL;
        }
  }
      else if(key >= leaf->value)
      {
        if(leaf->right != NULL)
        {
          insert(key, leaf->right);
        }
        else
        {
          leaf->right = new node;
          leaf->right->value = key;
          leaf->right->right = NULL;
          leaf->right->left = NULL;
        }
  }
}

void btree::insert(int key)
{
      if(root != NULL)
      {
        insert(key, root);
      }
      else
      {
        root = new node;
        root->value = key;
        root->left = NULL;
        root->right = NULL;
      }
}

node *btree::search(int key, node *leaf)
{
      if(leaf != NULL)
      {
        if(key == leaf->value)
        {
          return leaf;
        }
        if(key < leaf->value)
        {
          return search(key, leaf->left);
        }
        else
        {
          return search(key, leaf->right);
        }
      }
      else
      {
        return NULL;
      }
}

node *btree::search(int key)
{
    return search(key, root);
}

void btree::destroy_tree()
{
    destroy_tree(root);
}


void btree::inorder_print()
{
      cout << "Inorder Print" << endl;
      inorder_print(root);
      cout << "\n";
}

void btree::inorder_print(node *leaf)
{
      if(leaf != NULL)
      {
        inorder_print(leaf->left);
        cout << leaf->value << " ";
        inorder_print(leaf->right);
      }
}


void btree::postorder_print()
{
      cout << "PostOrder Print" << endl;
      postorder_print(root);
      cout << "\n";
}


void btree::postorder_print(node *leaf)
{
      if(leaf != NULL)
      {
        inorder_print(leaf->left);
        inorder_print(leaf->right);
        cout << leaf->value << " ";
      }
}

void btree::preorder_print()
{
      cout << "Preorder Print" << endl;
      preorder_print(root);
      cout << "\n";
}

void btree::preorder_print(node *leaf)
{
      if(leaf != NULL)
      {
        cout << leaf->value << " ";
        inorder_print(leaf->left);
        inorder_print(leaf->right);
      }
}

int main(){
   cout << "Carol Sanders CIS 252 Programs"  << endl ;
    //btree tree;
      btree *b = new btree();
      b->insert(10);
      b->insert(6);
      b->insert(14);
      b->insert(5);
      b->insert(8);
      b->insert(11);
      b->insert(18);
      b->preorder_print();
      b->inorder_print();
      b->postorder_print();
      delete b;
   
   return 0;
};