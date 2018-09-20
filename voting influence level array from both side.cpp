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
	int b[n];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++)
	{
		unsigned long int sum=0,sum1=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>=sum)
			{ //cout<<a[i]<<sum<<endl;
			b[j]++;
			sum=sum+a[j];
		//cout<<b[i];
			}
			else
			break;
		}
			for(int j=i-1;j>=0;j--)
		{
			if(a[i]>=sum1)
			{ //cout<<a[i]<<sum1<<"yo"<<endl;
			b[j]++;
				sum1=sum1+a[j];
		//	cout<<a[i]<<"yo";
	}
	else
	break;
		} 
	} 
	
	for(int i=0;i<n;i++)
	cout<<b[i]<<" ";

	cout<<"\n";
}
	return 0;
}
