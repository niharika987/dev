#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,s;
		cin>>n>>k>>s;
		int eat=k*s;
		int tbuy=n*(s-s/7);
		if(eat>tbuy)
		cout<<"-1"<<endl;
		else
		{
			int x=ceil(eat/n);
			if(eat%n!=0)
			x++;
			cout<<x<<endl;
		}
	}
	return 0;
}
