#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		int b[n-1];
		int g=a[0];
		int count=0;
		for(int i=1;i<n;i++)
	{
		if(__gcd(a[i],g)!=1)
		count++;
		else
		g=__gcd(a[i],g);
	}
	
	
	
		if(count==(n-1))
		cout<<"-1\n";
		else
		cout<<count<<"\n";
	}
	return 0;
}
