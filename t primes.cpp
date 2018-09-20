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
	{ 	set<long long int>s;
		for(int j=1;j<=sqrt(a[i]);j++)
		{
			if(a[i]%j==0)
		{
s.insert(j);
s.insert(a[i]/j);
	 }
		}
		if(s.size()==3)
		cout<<"YES"<<endl;
		else 
		cout<<"NO"<<endl;
	}
	return 0;
}
