#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{4
int data;
node *left;
node *right;
node(int value)
{
	data=value;
	left=NULL;
	right=NULL;
}	
};
void insert(node ** head,int val)
{
	if(*head==NULL)
	*head=new node(val);
	else if((*head)->data<=val)
	insert(&((*head)->right),val);
	else if((*head)->data>val)
	insert(&((*head)->left),val);
	
}
node * create(int a[],int n)
{
	node * head=NULL;
	for(int i=0;i<n;i++)
	insert(&head,a[i]);

return head;
}

void printPostorder(struct node* node)
{
     if (node == NULL)
        return;
 
     // first recur on left subtree
     printPostorder(node->left);
 
     // then recur on right subtree
     printPostorder(node->right);
 
     // now deal with the node
     printf("%d ", node->data);
}
 
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node)
{
     if (node == NULL)
          return;
 
     /* first recur on left child */
     printInorder(node->left);
 
     /* then print the data of node */
     printf("%d ", node->data);  
 
     /* now recur on right child */
     printInorder(node->right);
}
 
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node)
{
     if (node == NULL)
          return;
 
     /* first print data of node */
     printf("%d ", node->data);  
 
     /* then recur on left sutree */
     printPreorder(node->left);  
 
     /* now recur on right subtree */
     printPreorder(node->right);
}    
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	node * nodeh=create(a,n);
	
	 printf("\nPreorder traversal of binary tree is \n");
     printPreorder(nodeh);
 
     printf("\nInorder traversal of binary tree is \n");
     printInorder(nodeh);  
 
     printf("\nPostorder traversal of binary tree is \n");
     printPostorder(nodeh);
 
	
	return 0;
}
