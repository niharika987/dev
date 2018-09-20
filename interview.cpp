#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r1,rn,p;
		cin>>n;
		cin>>r1>>rn>>p;
		int i=r1,k=1;
	while( k!=p)
		{
			if(i==rn)
		{
			i=r1;
		k++;
		}	else
			{
			++k;
			i++;
		}
				
		}
		cout<<i<<"\n";
	}
	return 0;
}
