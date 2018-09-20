#include<iostream>
using namespace std;
struct trie{
    trie *child[26];
    int wt;
    bool isend;
};
trie *getnode()
{
    trie *p1=new trie();
    p1->isend=false;
    for(int i=0;i<26;i++)
    {
        p1->child[i]=NULL;
    }
   
    return p1;
}
void insert(trie *root,string s,int value)
{
    trie *p1=root;
    for(int i=0;i<s.length();i++)
    {
        int index=s[i]-'a';
        if(p1->child[index]==NULL)
        {
        p1->child[index]=getnode();
        p1->child[index]->wt=value;
		}
		else
        {
        	if(value>p1->child[index]->wt)
        	p1->child[index]->wt=value;
        }
        p1=p1->child[index];
    }
    p1->isend=true;
}
int search(trie *root,string s)
{
  trie *p1=root;
  for(int i=0;i<s.length();i++)
  {
      int index=s[i]-'a';
      if(p1->child[index]==NULL)
      return -1;
      p1=p1->child[index];
  }
  return p1->wt;
}
int main()
{
   int n,q;
   cin>>n>>q;
   trie *root=getnode();
   string s;
   while(n--)
   { int x;
   	cin>>s>>x;
   	insert(root,s,x);
   } 
   while(q--)
   {
   	string s1;
   	cin>>s1;
   	cout<<search(root,s1)<<endl;
   }
return 0;    
}
