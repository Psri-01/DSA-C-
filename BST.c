#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *right;
	struct node *left;
};
typedef struct node NODE;
NODE *creationofnode(int data)
{
	NODE*newnode =(NODE*)malloc(1*sizeof(NODE));
	newnode->data=data;
	newnode->right=NULL;
	newnode->left=NULL;
	return newnode;
}
void insertion_of_BST(NODE **root,int data)
{
	NODE *newnode=creationofnode(data);
	NODE *tptr;
	if(*root==NULL)	//empty
	{
		*root=newnode;
		return;
	} 
	else {
		tptr=*root;
		while(1){
		if(newnode->data < tptr->data)
		{ //small so go left
			if(tptr->left==NULL)
			{ //left is empty
			tptr->left=newnode;
			return;
		} else //not empty
		{
			tptr=tptr->left;
		}}		
		 else 
		{ //bigger so go right
			if(tptr->right==NULL)
			{ //right is empty
			tptr->right=newnode;
			return;
		}
		else //not empty
		{
			tptr=tptr->right;
		}	
	}
 }
}
}
void preorder(NODE *tptr){
	if(tptr==NULL)
	return;
	printf("%d ",tptr->data);
	preorder(tptr->left);
	preorder(tptr->right);
}
void inorder(NODE *tptr){
	if(tptr==NULL)
	return;
	inorder(tptr->left);
	printf("%d ",tptr->data);
	inorder(tptr->right);
}
void postorder(NODE *tptr){
	if(tptr==NULL)
	return;
	postorder(tptr->left);
	postorder(tptr->right);
	printf("%d ",tptr->data);
}
int main(){
	NODE *root= NULL;
	int data;
	while(1){
		scanf("%d",&data);
		if(data==-1)
		 break;
		insertion_of_BST(&root,  data);
	}
	printf("\nPreorder traversal: ");
	preorder(root);
	printf("\nInorder traversal: ");
	inorder(root);
	printf("\nPostorder traversal: ");
	postorder(root);
}
