#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n],sum=0;
		for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
}
	sort(a,a+n);
	if(sum%x==0)
	cout<<sum/x<<endl;
	else if(sum%x!=0)
	{
		int y=sum%x;
		if(a[0]<=y)
		cout<<"-1"<<endl;
		else
		cout<<sum/x<<endl;
		
	}
	
	}
	return 0;
}
