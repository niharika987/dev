#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	
	for(int i=0;i<n;i++)
	{ int c=0;
		
		for(int j=2;j<=a[i]/2;j++)
		{
			if(a[i]%j==0)
		{
	//	cout<<j;
		c++;
		if(c==2)
		break; 
		 }
		}
		if(c==1)
		cout<<"YES"<<endl;
		else 
		cout<<"NO"<<endl;
	}
	return 0;
}
