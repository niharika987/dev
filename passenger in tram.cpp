#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		cin>>a[i][j];
	}
	int sum=a[0][1];
	int max=a[0][1];
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{ if(j==0)
			sum=sum-a[i][j];
			else
			sum=sum+a[i][j];
		}
		
		if(max<sum)
		max=sum;
	}
	cout<<max;
}
