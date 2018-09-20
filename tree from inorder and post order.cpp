
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
	struct Node{
		int data;
		Node *left=NULL;
		Node *right=NULL;
	};
	
	Node* createNode(int data)
	{
		Node *newnode=new Node;
		newnode->data=data;
		newnode->left=newnode->right=NULL;
	}
	

Node *createtree(int in[],int post[],int is,int ie,int p)
	{
		
		if(is>ie)
		return NULL;
		
		Node *root=createNode(post[p]);
		p--;
		
		if(is==ie)
		return root;
		
		int j=0;
		for( j=is;j<ie;j++)
		{
			if(in[j]==root->data)
			break;
		}
	
		if(j!=ie)
		root->right=createtree(in,post,j+1,ie,p);
		
	
		if(j!=is)
		root->left=createtree(in,post,is,j-1,p );
		
	
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
int post[7]={10,40,30,60,90,70,50};
//	Node *root=createNode(1);
//	root->left=createNode(2);
//	root->right=createNode(3);
	
//	printvertical(root);
	int p=6;
Node *head=createtree(in,post,0,7,p);	
preOrder(head);
	
}
