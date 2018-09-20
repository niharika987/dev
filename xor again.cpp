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
	//	sort(a,a+n);
	
	int b[n];
	b[0]=a[0]*2;
	int g=a[0]*2;
	for(int i=1;i<n;i++)
	{
	b[i]=a[i]*2;
	g=b[i]^g;
	}
	
	
	
	
	
	
	cout<<g<<"\n";
	}
	return 0;
}
