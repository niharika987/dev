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
	unsigned long int sum=0;
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
	{ //int b[n]; 
	int h1=n;
	int x=a[n-1]-i;
	
	if(x<=i)
	h1=h1+1;
	else if((x%i)!=0)
	h1=h1+(x/i)+1;
	else if((x%i)==0)
	h1=h1+(x/i);
	
	
		if(h1>h)
		continue;
		else
		break;
		}
cout<<i<<"\n";
	}

}
	return 0;
}
