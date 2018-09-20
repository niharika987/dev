#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		f(i,n)
		cin>>a[i];
		
		int flag=0,s1=0,count=0;
	for(int i=0;i<(1<<n);i++)
	{ 
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
		{ //cout<<i<<endl;
			s1=s1+a[j];
cout<<a[j];
	}
			if(s1==m)
			{ count++;
			flag=1;
			break;
		}
		}
		cout<<endl;
		s1=0;
	}
	if(flag==0)
	cout<<"No"<<"\n";
	else
	cout<<"Yes"<<count<<"\n";
		
	}
	return 0;
}
