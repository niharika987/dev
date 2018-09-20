#include<bits/stdc++.h>
using namespace std;
bool isprime(int k)
{
	for(int i=2;i<=sqrt(k);i++)
	{
		if(k%i==0)
		return false;
	}return true;
	
}
int main()
{ int t;
cin>>t;
while(t--)
{
	int n,m;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
		
			if(isprime(i) && i!=1)
			{
				cout<<i<<"\n";
			}
		
	}
}
	return 0;
}
