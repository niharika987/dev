#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		long int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		int c=0;
		for(int i=0;i<n;i++)
		{
		long int sum1=sum-a[i];
			int x=a[i]+k;
			if(x>sum1)
			c++;
		}
		cout<<c<<"\n";
	}
	return 0;
}
