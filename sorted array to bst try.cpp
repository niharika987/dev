#include<iostream>
#include<bits/stdc++.h>
using namespace std;
	struct Node{
		int data;
		Node *left=NULL;
		Node *right=NULL;
	};
	
	Node* search(struct node* root, int key)
	{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->key == key)
       return root;
    
    // Key is greater than root's key
    if (root->key < key)
       return search(root->right, key);
 
    // Key is smaller than root's key
    return search(root->left, key);
	}

	
	Node* createNode(int data)
	{
		Node *newnode=new Node;
		newnode->data=data;
		newnode->left=newnode->right=NULL;
	}
	

Node *createtree(int in[],int is,int ie)
	{
		
		if(is>ie)
		return NULL;
		int mid=(is+ie)/2;
		Node *root=createNode(in[mid]);
		//p--;
		
		if(is==ie)
		return root;
		
		/*int j=0;
		for( j=is;j<ie;j++)
		{
			if(in[j]==root->data)
			break;
		}*/
		//if(j!=is)
		root->left=createtree(in,is,mid-1 );
		
		//if(j!=ie)
		root->right=createtree(in,mid+1,ie);
		
		return root;
	}
	
	void preOrder(Node* node)
{
    if (node == NULL) return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}
	
	int main()
{
int in[7]={10,30,40,50,60,70,90};
//int post[7]={10,40,30,60,90,70,50};
//	Node *root=createNode(1);
//	root->left=createNode(2);
//	root->right=createNode(3);
	
//	printvertical(root);
	int p=6;
Node *head=createtree(in,0,6);	
preOrder(head);
	
}
