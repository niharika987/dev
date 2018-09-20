#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		cin>>a[i];
		
		for(int j=0;j<n-2;j++)
		{
			for(int k=0;k< n-i-1;k++)
			{
				if(a[j]>a[j+2])
			    {
			    	int x=a[j];
			    	a[j]=a[j+2];
			    }
			}
		}
		
	}
	return 0;
}
