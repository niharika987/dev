#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
			if((n-1)==1)
				cout<<1<<endl;
			else
			{
			
				n=n-1;
				//cout<<n;
				long long int x=(n*(n+1))/2;
				cout<<x<<endl;
			}	
	}
	return 0;
}
