#include<bits/stdc++.h>
using namespace std;

int st[1000000];
int create(int node,int start,int end,int a[],int tree[])
{
    if(start==end)
   {
    tree[node]=a[start];
    return 1;
   }
    else
    {
        int mid=(start+end)/2;
        int x=create(2*node,start,mid,a,tree);
        int y=create(2*node+1,mid+1,end,a,tree);
        if(x%2==0)
        {
        tree[node]=tree[2*node]^tree[2*node+1];
    //	cout<<tree[node]<<"level->"<<x<<endl;
		}
		else
    	{
    	tree[node]=tree[2*node]|tree[2*node+1];
    //		cout<<tree[node]<<"level->"<<x<<endl;
		}
		return x+1;
	}
}

int *construct(int arr[],int n)
{
  
  
int x=  create(1,0,n-1,arr,st);
return st;  
}

int update(int a[],int tree[],int node,int start,int end,int pos,int val)
{
	if(start==end)
	{  //cout<<start<<endl;
		a[pos]=val;
		//cout<<tree[node]<<"hgfujrvj";
		tree[node]=val;
			//cout<<tree[node]<<" ";
	
		return 1;
	}
	else
	{ //cout<<"start"<<start<<"end"<<end<<endl;
		int x;	
		int mid=(start+end)/2;
	//	cout<<"mid"<<mid<<endl;
		if(pos>=start && pos<=mid)
		{ //cout<<"start"<<start<<"mid"<<mid<<endl;
 			x=update(a,tree,2*node,start,mid,pos,val);

		}
		else
		{
	//	cout<<"end"<<end<<"mid"<<mid<<endl;
			x=update(a,tree,2*node+1,mid+1,end,pos,val);
		}
		if(x%2==0)
		{
			tree[node]=tree[2*node]^tree[2*node+1];
	//		cout<<tree[node]<<"level->"<<x<<endl;	
		}
		else
		{
			tree[node]=tree[2*node]|tree[2*node+1];
	//		cout<<tree[node]<<"level->"<<x<<endl;
		}
		return x+1;
	}

}
 int check(int node, int st[],int l,int r,int a,int b)
 {  int x1,y1;
     if(a>r || b<l)
    return 0;
     if(a<=l && b>=r)
     return st[node];
     int mid=(l+r)/2;
     
	   x1=check(2*node,st,l,mid,a,b) ;
	  
	   y1= check(2*node+1,st,mid+1,r,a,b);
     return x1^y1;
 }
int query(int st[] , int n, int a, int b)
{

int x= check(1,st,0,n-1,a,b);
    return x;
}


int main()
{
int n,m;
	cin>>n>>m;
	int x2=pow(2,n);
int a[x2];

for(int i=0;i<x2;i++)
cin>>a[i];
int *st1=construct(a,x2);
//cout<<st1[1]<<endl;
while(m--)
{
	int a1,b;
	cin>>a1>>b;
	update(a,st1,1,0,x2-1,a1-1,b);
cout<<st1[1]<<endl;
}

}
