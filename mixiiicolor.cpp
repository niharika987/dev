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
		{
		cin>>a[i];	
		}
sort(a,a+n);
//int count1 = std::distance(a, std::unique(a, a+n));
 set<int> s(a, a + n);
 
if(s.size()==n)
cout<<"0"<<"\n";
else
{ 
 
int count=0;
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]==a[i-1])   
		{
			a[i]=a[i]+a[i-1];
			count++;
		}
	}
	cout<<count<<"\n";
}
}
return 0;
}
