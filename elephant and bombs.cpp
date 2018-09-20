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
		int c=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
	cout<<a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(i==0 && a[i+1]==0)
			c++;
			if(i==n-1 && a[i-1]==0)
			c++;
			
			if(a[i]==0 && a[i-1]==0 && a[i+1]==0)
			c++;
	
		}
	cout<<c<<endl;
	}
	return 0;
}
