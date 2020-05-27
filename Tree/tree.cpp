#include <iostream>
using namespace std;
 
//declaration for new tree 
struct node  { 
  int data; 
  struct node *left; 
  struct node *right; 
}; 
   
//allocates new node 
struct node* newNode(int data) { 
  struct node* node = new struct node(); 
  node->data = data;    // Assign data to this node
  // Initialize left and right children as NULL 
  node->left = NULL; 
  node->right = NULL; 
  return(node); 
} 
   
int test_tree() { 
  /*create root node*/
  struct node *rootNode = newNode(10);  
  cout<<"General tree created is as follows:"<<endl;
  cout<<"level 1: "<<rootNode->data<<endl;
  rootNode->left        = newNode(20); 
  rootNode->right       = newNode(30); 
  cout<<"level 2: "<<rootNode->left->data<<"  "<<rootNode->right->data;
  cout<<endl; 
  rootNode->left->left  = newNode(40); 
  cout<<"level 3: "<<rootNode->left->left->data;

  return 0; 
}
