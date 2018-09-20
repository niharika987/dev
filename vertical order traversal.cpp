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
	
	void verticalorder(Node *root)
	{
		
		if(root==NULL)
		return;
		map<int,vector<int> > hs;
		int hr=0;
		queue<pair<Node*,int> > q;
		q.push(make_pair(root,0));
		while(!q.empty())
		{
			pair<Node*,int> t=q.front();
			hr=t.second;
			q.pop();
		hs[hr].push_back(t.first->data);
		if(t.first->left!=NULL)
			q.push(make_pair(t.first->left,hr-1));
		if(t.first->right!=NULL)
			q.push(make_pair(t.first->right,hr+1));			

		}
	map<int,vector<int> >::iterator i;
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
	
	verticalorder(root);
	
	
	
}
