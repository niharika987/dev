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
		{ 
		int i;
	for( i=1;i<=z;i++)
	{ int b[n]; 
	memcpy(b,a,sizeof(b));
int m=h;
sort(b,b+n,greater<int>());
		int x=i;
	int j=0;
		while(m!=0)
		{ 
		 if(b[j]<=x)
			b[j]=0;
			else
			b[j]=b[j]-x;
	//	cout<<b[j];
		if(j==n-1)
		j=0;
		else
		j++;
		
		m--;
		}
	
if(b[0]>0)
continue;
else
break;
	
	}
		cout<<i<<"\n";
		}
	}
	return 0;
}
