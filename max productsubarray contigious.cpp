#include<iostream>
using namespace std;
int func(int a[],int s,int m,int e)
{
int minp1=1,maxp1=1,minp2=1,maxp2=1,p1=1,p2=1;
for(int i=m;i>=s;i--)
{
	p1=p1*a[i];
	if(maxp1<p1)
	maxp1=p1;
}	
p1=1;
for(int i=m;i>=s;i--)
{
	p1=p1*a[i];
	if(minp1>p1)
	minp1=p1;
}	


for(int i=m+1;i<=e;i++)
{
	p2=p2*a[i];
	if(maxp2<p2)
	maxp2=p2;
}
p2=1;
for(int i=m+1;i<=e;i++)
{
	p2=p2*a[i];
	if(minp2>p2)
	minp2=p2;
}
int min=minp1*minp2;
int max1=maxp1*maxp2;
return max(min,max1);
}

int maxprosub(int a[],int s,int e)
{ 
	if(s==e)
	return a[s];

int m=(s+e)/2;	
	return max (	max(maxprosub(a,m+1,e),maxprosub(a,s,m)),func(a,s,m,e));
	
	
	}


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
int x=	maxprosub(a,0,n-1);
	cout<<x;
	return 0;
}
