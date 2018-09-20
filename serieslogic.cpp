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
	int a[n],b[n];
		for(int i=0;i<n;i++)
	{
		
		b[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]-1]++;
	}

	int flag=0;
for(int i=0;i<n;i++)
{
	if(b[i]!=1)
	{ flag=1;
//	cout<<"po";
	break;
}
}
	if(flag==0)
	{
		for(int i=1;i<n;i++)
		{
			if(a[i]!=a[i-1]+1)
		{
			flag=0;
		//	cout<<"yt";
		break;
		}
		else
		flag=1;
		
		}
	}
	
	if(flag==0)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
	
	
	
	}
	return 0;
}
