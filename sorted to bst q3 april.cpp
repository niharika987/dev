#include<bits/stdc++.h>
using namespace std;
	struct Node{
		int data;
		Node *left=NULL;
		Node *right=NULL;
	};
	Node* search(struct node* root, int key)
	{
     if (root == NULL || root->key == key)
       return root;
    
    if (root->key < key)
       return search(root->right, key);
 
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
	
		
		if(is==ie)
		return root;
		
		
		root->left=createtree(in,is,mid-1 );
		root->right=createtree(in,mid+1,ie);
		
		return root;
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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
		b[i]=a[i]+a[i];
		}
		sort(b,b+n);
Node *head=createtree(b,0,n);
	search()
	}
	return 0;
}
