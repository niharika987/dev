#include<bits/stdc++.h>

using namespace std;
int hsh(int a[],int n)
{ 	int count=0;   
	 unordered_set<int> s;
	for(int i=0;i<n;i++)
	s.insert(a[i]+a[i]);
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++ )
		{
			if(s.find(a[i]+a[j])!=s.end())
			count++;
		}
	}
	return count;
}
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
	int x=hsh(a,n);
	cout<<x<<"\n";
	}
	return 0;
}
