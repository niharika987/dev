
#include<bits/stdc++.h>
using namespace std;
	struct Node{
		int data;
		Node *left,*right=NULL;
	};
	
	Node* createNode(int data)
	{
		Node *newnode=new Node;
		newnode->data=data;
		newnode->left=newnode->right=NULL;
	}
	vector<int> a;
void inorder(Node * root)
{ 
	if(root->left!=NULL)
		inorder(root->left);
//	cout<<root->data;
	a.push_back(root->data);
	if(root->right!=NULL)
	inorder(root->right);
}
int main()
{

	Node *root=createNode(7);
	root->left=createNode(2);
	root->left->left=createNode(1);
	
	root->left->right=createNode(3);
	inorder(root);
	int k=2;
	int c=0;
cout<< a[k-1];
	//verticalorder(root);
	
	
	
}
