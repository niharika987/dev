#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		if(n==1)
			cout<<a[0];
		else
		{
			int x=a[0],y=a[1];
			r=__gcd(x,y);
			for(int i=2;i<n;i++)
			{
				r=__gcd(r,a[i]);
			}
		}
		cout<<r<<endl;
	}
	return 0;
}
