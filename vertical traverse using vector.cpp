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
		vector< vector<int> >v1;
	map<int,vector<int> >::iterator i;
	int c=0;
	for(i=hs.begin();i!=hs.end();i++)
 		{ 
 		 vector<int> t1;
 		 
 		 t1=i->second;
 			for(int j=0;j<t1.size();j++)
 	v1[c].push_back(i->second[j]);
		 }
		 c++;

	} 
int main()
{

	Node *root=createNode(1);
	root->left=createNode(2);
	root->right=createNode(3);
	
	verticalorder(root);
	
	
	
}
