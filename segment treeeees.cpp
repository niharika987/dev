#include<bits/stdc++.h>
using namespace std;
void build(int node,int start,int end,int tree[],int a[])
{
 if(start==end)
 tree[node]=a[start];
 else{
    int mid=(start+end)/2;
 
 build(2*node,start,mid,tree,a);
 build(2*node+1,mid+1,end,tree,a);
 tree[node]=tree[2*node]<tree[(2*node)+1]?tree[2*node]:tree[(2*node)+1];
 }
}
void update(int node,int start,int end,int in,int val,int tree[],int a[])
{
    if(start==end)
    {   a[in]=val;
        tree[node]=val;
    }
    else{
        int mid=(start+mid)/2;
        if(in>=start && in<=mid)
        update(2*node,start,mid,in,val,tree,a);
        else
        update(2*node+1,mid+1,end,in,val,tree,a);
        
        tree[node]=tree[2*node]<tree[(2*node)+1]?tree[2*node]:tree[(2*node)+1];
    }
        
    }
    int query(int node,int start,int end,int l,int r,int tree[])
    {
        if(r<start && l >end)
        return 0;
        else if(l>=start && r<=end)
        return tree[node];
        
        int mid=(start+end)/2;
      int p1=query(2*node,start,mid,l,r,tree);
      int p2=query((2*node)+1,mid+1,end,l,r,tree);
     int x1=p1<p2?p1:p2;
     return x1; 
    }
int main()
{ int t[1000000], a[100005];
    int n,q;
    cin>>n>>q;
    
    for(int i=1;i<=n;i++)
    cin>>a[i];
    
   // build(1,1,n,t,a);
   
    /*while(q--)
    { int a1,b;
        char x;
    cin>>x;
    cin>>a1>>b;
    if(x=='q')
        {
		int z=query(1,1,n,a1,b,t);
    	cout<<z<<endl;
        }
	else
    	update(1,1,n,a1,b,t,a);
    
        
    }*/
    return 0;
}
