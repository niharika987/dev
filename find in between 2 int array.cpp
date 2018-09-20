#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
	vector<int> a(n),b(m);
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int j=0;j<m;j++)
		cin>>b[j];
		
		int count=0;
std::set<int> h1;
std::set<int>::iterator i1;
	for(int i=0;i<n;i++)
	h1.insert(a[i]);
	
	for(int i=0;i<m;i++)
	{
	if(	h1.find(b[i])!=h1.end())
		count++;
	}
		cout<<count<<endl;
	}
	return 0;
}
