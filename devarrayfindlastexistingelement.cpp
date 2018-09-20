#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x=*max_element(a,a+n);
	int y=*min_element(a,a+n);
	while(q--)
	{
		int g;
		cin>>g;
		if(g<=x && g>=y)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}
