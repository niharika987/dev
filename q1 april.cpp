#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v[1000005];
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cin>>b[i];
	for(int i=0;i<n;i++)
	v[b[i]].push_back(a[i]);
	for(int i=1;i<4;i++)
	sort(v[i].begin(),v[i].end());
	
	if(v[3].size()!=0 && v[1].size()!=0 && v[2].size()!=0)
	{
	
	long int x=v[1][0];
	long int y=v[2][0];
	long int z=v[3][0];
	//cout<<z;

	if(x+y<z)
	cout<<x+y<<"\n";
	else
	cout<<z<<"\n";
	}
	else if(v[1].size()==0 || v[2].size()==0)
	cout<<v[3][0]<<"\n";
	else if(v[3].size()==0)
	{ long int x=v[1][0];
	  long int y=v[2][0];
	  cout<<x+y<<"\n";
	}
	return 0;
}
