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
		int x=INT_MAX;
		for(int i=1;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				x=min(x,abs(i-n/i));
			}
		}
		cout<<x<<endl;
	}
	return 0;
}
