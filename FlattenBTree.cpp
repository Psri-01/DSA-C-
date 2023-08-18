// Flattening the tree in Preorder using Recursion
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* flatten(node* root){
    // Base case
    if(root == NULL){
        return NULL;
    }
    // Flattening the left subtree
    node* leftHead = flatten(root->left);
    // Flattening the right subtree
    node *rightHead = flatten(root->right);
    // Linking root node with flattened left subtree
    root->left = NULL;
    root->right = leftHead;    
    // Finding the tail node of combined linked list
    node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    node* tail = temp;
    // Linking the combined linked list with flattened right subtree
    tail->right = rightHead;
    // Returning the head of the flattened tree in the form of linked list
    return root;
}

// Displaying the linked list
void display(node* head){
    while(head->right != NULL){
        cout<<head->data<<"->";
        head = head->right;
    }
    cout<<head->data<<endl;
}

// Main function
int main()
{
    // Constructing tree
    /*      1
          /   \
         2     3
        / \   / \
       4   5 6   7
    */
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    // Calling function to flatten the tree
    node* head =  flatten(root);
    // Calling function to display the flattened tree
    display(head);
    return 0;
}
