//BINARY TREE

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){ //constructor
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preorder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}

int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return countNodes(root->left)+countNodes(root->right)+1;
}

int sumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumNodes(root->left)+sumNodes(root->right)+root->data;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;  //+1 cuz current node
}

bool isBalanced(Node* root){
    if(root==NULL){
        return true;
    }
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    } else {
        return false;
    }
}

int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
    Node* root2=new Node(1);
    root2->left=new Node(2);
    root2->left->left=new Node(3);
    /*cout<<"preorder traversal: ";
    preorder(root);
    cout<<"inorder traversal: ";
    inorder(root);
    cout<<"postorder traversal: ";
    postorder(root);*/
    //cout<<countNodes(root)<<endl;
    //cout<<sumNodes(root)<<endl;
    cout<<height(root)<<" \n";
    if(isBalanced(root)){
        cout<<"Balanced tree"<<endl;
    } else {
        cout<<"Unbalanced tree"<<endl;
    }
    if(isBalanced(root2)){
        cout<<"Balanced tree"<<endl;
    } else {
        cout<<"Unbalanced tree"<<endl;
    }
    return 0;
}

//BINARY SEARCH TREE
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* insertBST(Node *root, int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left=insertBST(root->left,val);
    } else {
        //val > root->data
        root->right=insertBST(root->right,val);
    }
    return root;
}

void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    Node *root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,2);
    insertBST(root,4);
    insertBST(root,7);
    //print inorder
    inorder(root);
    cout<<endl;
    return 0;
}
