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
		sort(a,a+n);
		int i=n-1;
		int flag=0;
	while(i>=0	)
	{
		if(a[i]<=m)
			{
			m=m-a[i];
		
	}	i--;
	if(m==0)
	flag=1;
		
		}
		if(flag==1)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		
	}
	return 0;
}
