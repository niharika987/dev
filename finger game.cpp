#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t,sum=0;
	t=n+1;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		sum=sum+x;
		
	}
	int c=0;
for(int i=1;i<=5;i++)
{
	if((sum+i)%t!=1)
	c++;
}
cout<<c;
	return 0;
}
	
	
	
