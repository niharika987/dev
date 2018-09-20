#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int n1,m;
		cin>>n1>>m;
		int a[m],b[n1-m],f[n1+1];
		for(int i=1;i<=n1;i++)
		f[i]=0;
		for(int i=0;i<m;i++)
{
		cin>>a[i];
		f[a[i]]++;
}
int flag=0;
for(int i=1;i<=n1;i++)
{
	if(f[i]!=1 &&flag==0)
	{
	cout<<i<<" ";
	flag=1;
	f[i]++;}
	else if(f[i]!=1 && flag==1)
	{ flag=0;
		continue;
	}
}
cout<<"\n";
for(int i=1;i<=n1;i++)
{
	if(f[i]!=1)
	cout<<i<<" ";
}
cout<<"\n";

	}
	return 0;
	}
	
