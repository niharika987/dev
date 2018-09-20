#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,n;
		cin>>x>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			
			a[i]=i+1;
	if(i==x-1)
	continue;
	else
	sum=sum+a[i];
	
	}
	
	int c[n-1];
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		continue;
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	

	if(n-1==1)
	cout<<"impossible"<<endl;
	else if(sum%2!=0)
	cout<<"impossible"<<endl;
	else if(sum%2==0)
	{
		
		int y=sum/2;
	int b[n];

	b[x-1]=2;
if(x-1==0)
{
	b[1]=0;
	b[y-3]=0;
}
else
{
	b[0]=0;
	b[y-2]=0;
}

	for(int i=0;i<n;i++)
	{
		if(i==0 || i==y-2 || i==x-1)
		continue;
		else
		b[i]=1;
	}
	
	for(int i=0;i<n;i++)
	cout<<b[i];	
	

cout<<endl;
		
		
	}

	
}
return 0;
}
