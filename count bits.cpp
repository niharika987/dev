#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ long long int count=0;
	long long int n;
		cin>>n;
		for(int i=2;i<=n;i++)
		{
		int x=n/i;
		long long int j=(int)log2(i)+1;
		long long int k=(int)log2(x)+1;
		if(k>j)
		continue;
		else
		count++;
		}
		cout<<count<<"\n";
		
		
	}
	return 0;
}
