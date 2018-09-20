#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long int n,k,sum1=0;
		cin>>n>>k;
		
		int a[n];
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	sum1+=a[i];
	}
	
	int m1=max(k,n-k);
	sort(a,a+n);
	long int c=0,sum=0;
	for(int i=n-1;i>=0;i--)
	{
	if(c==m1)
	break;
	
	sum+=a[i];
	c++;
	}
	long int x=sum1-sum;
	long int y=sum-x;
	cout<<y<<"\n";
}
	return 0;
}
