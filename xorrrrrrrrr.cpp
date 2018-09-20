.3#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		 long long int max1=*max_element(a+l,a+r+1);
		 long long int l1=0;
		long long int r1=2147483647;

	//	cout<<max1^(r1-1);
//	for(int i=0;i<5;i++)
//	{
	
//	long long int xr=max1^214748329;
//	cout<<xr<<endl;
//	}
	long long int mid;
		
		while(l1<=r1)
		{ mid=(l1+r1)/2;
			if((max1^mid)>xr)
			{ xr=max1^mid;
				l1=mid+1;
				continue;
			}
			else
			{
				r1=mid-1;
			}
		}
		cout<<mid<<"\n";
	}
return 0;
}
