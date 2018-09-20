#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ long long y;
		cin>>y;
		long long x=ceil(sqrt(y))-1;
		long long sum=0;
			long long a=x;
		while(1)
		{ 
			long long b=y-(a*a);
			if(b<=700)
            sum=sum+b;
	     	else
			sum+=700;
		a--;
		if(a==0)
		break;
		}
		cout<<sum<<endl;
		
	}
	return 0;
}
	
