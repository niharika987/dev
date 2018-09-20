#include <iostream>
using namespace std;
struct node
{
struct node *left,*right;
int data;
};
node* createnode(int k)
{
node *temp=new node;
temp->right=temp->left=NULL;
temp->data=k;
return temp;
}
void assign(char *dt,int key,node *root)
{ 
int i=0;
if(root==NULL)return;
node *temp=root;
while(dt[i]!='\0'&&temp)
{
if(dt[i]=='L')
{
if(temp->left==NULL)
temp->left=createnode(0);
temp=temp->left;
}
if(dt[i]=='R')
{
if(temp->right==NULL)
temp->right=createnode(0);
temp=temp->right;
}
i++;
}
temp->data=key;
}

/*
void printt(node *root)
{
if(root==NULL)return;
printt(root->left);
cout<<root->data;
printt(root->right);
}
*/
int height(node *root)
{
if(root==NULL)
return 0;
int lm=height(root->left);
int rm=height(root->right);
return max(lm,rm)+1;
}
int diameter(node *root)
{
if(root==NULL)return 0;
int lh=height(root->left);
int rh=height(root->right);
return max(lh+rh+1,max(diameter(root->left),diameter(root->right)));
}
int main()
{
int n,rootd,key;
char dt[1000];
cin>>n>>rootd;
node *root=createnode(rootd);
for(int i=1;i<n;i++)
{
cin>>dt;
cin>>key;
assign(dt,key,root);
}
cout<<diameter(root);
return 0;
}
