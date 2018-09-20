#include<iostream>
using namespace std;
/*int count(int s,int e)
{
	if()
	{
		
	}
	
	
	
}
*/


int major(int a[],int s,int e)
{ 
	if(s==e)
	return a[s];

int m=(s+e)/2;	
	
	
int x= major(a,s,m);
int y= major(a,m+1,e);
int c=0,c1=0;
for(int i=s;i<e;i++)
{
	if(a[i]==x)
	c++;
	if(a[i]==y)
	c1++;
	
}
if(c==c1)
return -1;
else 
return c>c1?x:y;



	
	}
	
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
int x=	major(a,0,n-1);
	cout<<x;
	return 0;
}
