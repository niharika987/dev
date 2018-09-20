#include<iostream>
using namespace std;
int main()
{
	int n=3;
	int a[n][n];
	int b[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	b[0][0]=a[0][0];
	for(int i=1;i<n;i++)
	b[0][i]=b[0][i-1]+a[0][i];
	for(int i=1;i<n;i++)
	b[i][0]=b[i-1][0]+a[i][0];
	
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
		int r=max(b[i-1][j-1],max(b[i-1][j],b[i][j-1]));
		b[i][j]=a[i][j]+r;
		}
	}
	cout<<b[n-1][n-1];
	
	//path
		for(int i=n;i>0;i--)
	{
		for(int j=n;j>0;j--)
		{
		int r=max(b[i-1][j-1],max(b[i-1][j],b[i][j-1]));
		b[i][j]=a[i][j]+r;
		}
	}
	return 0;
}
