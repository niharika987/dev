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
		set<int> s1;
		for(int i=0;i<n;i++)
		{
			s1.insert(a[i]);
		}
		cout<<s1.size()<<endl;
	}
	return 0;
}
