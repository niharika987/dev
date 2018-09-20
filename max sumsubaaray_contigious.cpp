#include<iostream>
using namespace std;
int func(int a[],int s,int m,int e)
{
int rsum=0,sum=0,maxl=0,maxr=0;
for(int i=m;i>=s;i--)
{
	sum=sum+a[i];
	if(maxl<sum)
	maxl=sum;
}	

for(int i=m+1;i<=e;i++)
{
	rsum=rsum+a[i];
	if(maxr<rsum)
	maxr=rsum;
}

return maxr+maxl;
}

int maxsumsub(int a[],int s,int e)
{ 
	if(s==e)
	return a[s];

int m=(s+e)/2;	
	return max(	max(maxsumsub(a,m+1,e),maxsumsub(a,s,m)),func(a,s,m,e));
	
	
	}


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
int x=	maxsumsub(a,0,n-1);
	cout<<x;
	return 0;
}
