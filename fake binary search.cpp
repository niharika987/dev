#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
map<int,int>:: iterator it;

int bs(int b[],int n,int x)
{
 	int count=0;
	int mid,l=0;int r=n-1;
	while(l<=r)
		{ mid=(l+r)/2;
	//	cout<<mid<<" ";
	    if(b[mid]==x)
		  { //cout<<mid;
  		   return count; }
 		else if(b[mid]>x && m[x]>mid)
 		 { //int i=0;
  		for(int i=l;i<=mid;i++)
  		{ 
  		if(b[i]<x)
  		{
  		swap(b[i],b[mid]);
  		count++;
		  break;}
  	//	i++;
  		}
  	
  		}
  		else if(b[mid]<x && m[x]<mid)
  
  		{ int i=0;
  		for(i=mid+1;i<=r;i++)
  		{ 
  			if(b[i]>x)
  		{
  		swap(b[i],b[mid]);
  		count++;
		  break;}
  	}
    }
    else if(b[mid]<x)
    { 
    l=mid+1; 
	
	}
    else if(b[mid]>x)
   { 
    r=mid-1;
	  }
	}
		
	if(l>r)
	return -1;

	}

int main()
{    ios_base::sync_with_stdio(0);
		cin.tie(NULL);
		cout.tie(NULL);

	int t;
	cin>>t;
	int n,q;
	cin>>n>>q;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
    //b[i]=a[i];
	m[a[i]]=i;
	}
	int c[n+1];
	for(int i=0;i<n;i++)
{
	int y=bs(b,n,a[i]);

}
	
	while(q--)
	{ int x;
	cin>>x;
	memcpy(b,a,sizeof(b));
	
	
	cout<<y<<"\n";	

	
	}
	
		
	return 0;
}
