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
		int lc=0,c=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					if(j==i+1)
					{
						lc++;
					}
				
					c++;
				}
			}
		}
		
		if(lc==c)
		cout<<"YES"<<"\n";
		else
		cout<<"NO"<<"\n";
		
	}
	return 0;
}
