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
	
	void verticalorder(Node *root,int hr,map<int, vector<int> > &hs)
	{
		
		if(root==NULL)
		return;
		hs[hr].push_back(root->data);
		verticalorder(root->left,hr-1,hs) ;
		verticalorder(root->right,hr+1,hs);
	
	}
	 
	
	void printvertical(Node *root)
	{
		map<int,vector<int> > hs;
		int hr=0;
		
		
			map<int,vector<int> >::iterator i;
			verticalorder(root,hr,hs);	
		
		
		for(i=hs.begin();i!=hs.end();i++)
 		{
 			for(int j=0;j<i->second.size();j++)
 		cout<<i->second[j]<<" ";
		 }

	}
int main()
{

	Node *root=createNode(1);
	root->left=createNode(2);
	root->right=createNode(3);
	
	printvertical(root);
	
	
	
}
