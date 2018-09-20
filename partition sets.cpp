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
		int a[n-1]={0};
		int sum=0;
		for(int i=0;i<n-1;i++)
		{
			if(i==x-1)
			
			{
			continue;}
			else
			{
			a[i]==i+1;
	sum=sum+a[i];
	}
		}
		
	for(int i=0;i<n-1;i++)
	cout<<a[i]<<endl;	
		
if(n-1==1)
cout<<"impossible"<<endl;
else if(sum%2!=0)
cout<<"impossible"<<endl;
else if(sum%2==0)
{ int y=sum/2;
	int b[n+1];
	b[1]=1;
	b[y-1]=1;
	b[x]=2;
	for(int i=1;i<=n;i++)
	{
		if(i==1 || i==y-1 || i==x)
		continue;
		else
		b[i]=0;
	}
	
	for(int i=1;i<=n;i++)
	cout<<b[i];	
	

cout<<endl;
}



	}
	return 0;
}
