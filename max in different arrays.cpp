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
int a[n][n];
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	cin>>a[i][j];
}


int max=0;
for(int j=0;j<n;j++)
{
	if(max<a[n-1][j])
	max=a[n-1][j];
}
long long sum=0;
sum=sum+max;
int flag=0;
for(int i=n-2;i>=0;i--)
{ int max1=0;
	for(int j=0;j<n;j++)
	{
		if(a[i][j]<max && a[i][j]>max1)
		max1=a[i][j];
		if(j==n-1 && max1==0)
		{
			flag=1;
			break;
		}
	}
	max=max1;

	sum=sum+max;
	if (flag==1)
	break;
}

if(flag==1)
cout<<"-1"<<endl;
else
cout<<sum<<endl;



}
	return 0;
}
