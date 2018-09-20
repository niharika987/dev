#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long n,k;
		cin>>n>>k;
		long long r=0;
		while(n--)
		{
			long long t,d;
			cin>>t>>d;
	long long f=t-k;
			
				if(f<=0)
			{ t=0;
			k=abs(f); }
			else {
				t=f;
				k=0;
			}
			
			
			r=r+(t*d);
			
		
		}
		cout<<r<<endl;
	}
	return 0;
}
