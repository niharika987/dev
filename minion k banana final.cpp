#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,h;
		cin>>n>>h;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		sum=sum+a[i];
		}
		sort(a,a+n);
		int z=a[n-1];
		if(n==h)
		cout<<a[n-1]<<"\n";
		else
		{ int s1=1000000009;  
		int mid;
			int l=1;
			int r=1000000000;
		int h1;
			while(l<=r)
			{ 	 h1=0;
				mid=(l+r)/2;
				for(int i=0;i<n;i++)
				{ h1=h1+(a[i]/mid);
					if((a[i]%mid)!=0)
					h1=h1+1;
				}
				if(h1<=h)
				{  s1=min(s1,mid);
					r=mid-1;
				}
				else
				{
					l=mid+1;
				}
				
			}     
	
	cout<<s1<<"\n";
	
	
	
		}
	}
	return 0;
}
