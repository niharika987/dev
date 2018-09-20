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
		
	
	sort(a,a+n);
	int mx= a[0];
	int sum=0;
	for(int i=0;i<n;i++)
	{
	sum+=a[i];
	}
 cout<<sum-(n*mx)<<endl;	
	//cout<<sum<<endl;
	
	}
	
	return 0;

}
