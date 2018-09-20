#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int sum=0, max=0;
	for(int i=0;i<n;i++)
	{  sum=sum+a[i]
		if(max<sum)
		max=sum;
		
	}
	cout<<max;
	return 0;
}
