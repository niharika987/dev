#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k,j,sum=0;
		cin>>n>>k;
	long long a[n+k];
		for(int i=0;i<n;i++)
			{
			cin>>a[i];
			sum=sum+a[i];
			j=i+1;
	}

	for(int i=0;i<k;i++)
	{
	a[j]=sum+1;
	sum=sum+a[j];
	j++;	
	}
if(a[n+k-1]%2==0)
cout<<"even"<<endl;
else
cout<<"odd"<<endl;
	
}
return 0;
}
