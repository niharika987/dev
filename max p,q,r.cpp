#include<iostream>
#include<limits.h>
#define ll long long
using namespace std;

int main()
{
long long int n,p,q,r;
	cin>>n>>p>>q>>r;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	long long int i1,j1,k1,maxi=INT_MIN,maxj=INT_MIN,maxk=INT_MIN;
	for( int i=0;i<n;i++)
	{   if(maxi<p*a[i]*1ll)
	{
	
		maxi=p*a[i]*1ll;
		i1=i;
}

	}
	
	for(int j=0;j<n;j++)
	{ 
			if(maxj<q*a[j]*1ll)
	{
		maxj=q*a[j]*1ll;
	j1=j;
	
	
	}
	
	}
	
	
	for(int k=0;k<n;k++)
	{ 
			if(maxk<r*a[k]*1ll)
	{
		maxk=r*a[k]*1ll;
	k1=k;
	}
	
	
	
	}
	
	cout<<maxi+maxj+maxk<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
