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
		long long a[n];
		int m=0,o=0,c=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		if(a[i]==-1 )
		m++;
		else if(a[i]==1)
		o++;
		else if(a[i]!=0)
		c++;
		}
		if(c>1)
		cout<<"no"<<endl;
		else if(c!=0 && m!=0)
		cout<<"no"<<endl;
		else if(m>=1 && o==0)
		cout<<"no"<<endl;
		else 
		cout<<"yes"<<endl;
		
	
	}
}
