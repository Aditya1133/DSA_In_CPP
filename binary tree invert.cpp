#include <iostream>
using namespace std;
 
// Data structure to store a binary tree node
class Node
{
	public:
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
 
// Function to perform preorder traversal on a given binary tree
void preorder(Node* &root)
{
    if (root == NULL) {
        return;
    }
 
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
 
// Function to invert a given binary tree using preorder traversal
void invertBinaryTree(Node* &root)
{
    // base case: if the tree is empty
    if (root == NULL) {
        return;
    }
 
    // swap left subtree with right subtree
    swap(root->left, root->right);
 
    // invert left subtree
    invertBinaryTree(root->left);
 
    // invert right subtree
    invertBinaryTree(root->right);
}
 
int main()
{
    /* Construct the following tree
              1
            /   \
           /     \
          2       3
         / \     / \
        4   5   6   7
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
 
    invertBinaryTree(root);
    preorder(root);
 
    return 0;
}
