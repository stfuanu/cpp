#include<iostream> 
#include<stdlib.h> 
using namespace std; 
struct node 
{ int key; 
struct node *left, *right; 
}; 
void inorder(struct node *root) 
{ 
if (root != NULL) 
{ inorder(root->left); 
cout<< root->key<<endl; 
inorder(root->right);
} 
} 
struct node* insert(struct node* nodes, int key) { if (nodes == NULL)  
{ 
 struct node *temp = new node; 
 temp->key = key; 
 temp->left = temp->right = NULL; 
 return temp; 
} 
if (key < nodes->key) 
nodes->left = insert(nodes->left, key); 
else if (key > nodes->key) 
nodes->right = insert(nodes->right, key);  return nodes; 
} 
int main() 
{ 
struct node *root = NULL; 
root = insert(root, 50); 
insert(root, 30); 
insert(root, 20); 
insert(root, 40); 
insert(root, 70); 
insert(root, 60); 
insert(root, 80); 
inorder(root); 
return 0;
}