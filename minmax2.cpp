#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{ int n1;
	cin>>n1;
vector<	int> a(n1);
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	
	}
	
sort(a.begin(),a.end());
	long long sum=0,count=a[0];
for(int i=1;i<a.size();i++)
{
	if(a[i]>count)
{
	sum=sum+count;
}	else
{
	count=a[i];
	sum=sum+count;

}
}

	cout<<sum<<endl;
		
	}
	return 0;
}
