#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		int b[n*n];
		int k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				b[k]=a[i]+a[j];
				k++;
			}
		}
		
		int g=b[0];
		for(int i=1;i<n*n;i++)
		g=b[i]^g;
		
		cout<<g<<endl;
		
		
	}
	return 0;
}
