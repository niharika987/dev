#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
	int n,k;
	cin>>n>>k;
	int a[n];

	for(int i=0;i<n;i++)
	cin>>a[i];
	
		sort(a,a+n);
		
		
	
	double sum=0;
	for(int i=k;i<n-k;i++)
	{
		sum=sum+a[i];
	}


	double  avg=(sum)/(n-(2*k));
cout<<fixed<<setprecision(6)<<avg<<endl;
	
}
	return 0;
}
