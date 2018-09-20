#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,k,n;
	cin>>a>>n>>k;
	int b[k];
	memset(b,0,k);

	for(int i=0;i<k;i++)
	{
		b[i]=0;
	}
	
		int i=0;	
	while(a>0)
	{
	
	if(a==0)
	break;
	
		if(b[i]<n)
		{ b[i]++;
	a=a-1;
	cout<<a;

	for(int i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"\n";
	}
	if(b[i]==n && i!=k-1)
	{ 
	b[i+1]++;
		a=a-1;

	b[i]=0;
	cout<<a;
		for(int i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}
		cout<<"\n";

	}
	if(b[i]==n && i==k-1)
	{
		b[i]=0;
		a=a-1;
			for(int i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}
		cout<<"\n"<<a;

	}

	
}
	for(int i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}
	
	return 0;
}
