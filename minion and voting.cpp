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
	
		for(int j=0;j<n;j++)
		{ 	unsigned long int sum=0;
			if(i==j)
			continue;
			else if(abs(i-j)==1)
		{ 
			b[i]++;
		//	sum=sum+a[j];
		}	else
			{
				if(i<j)
				{
				
				for(int k=i+1;k<j;k++)
				
				if(a[j]>=sum)
			b[i]++;
		else 
		break;
		sum=sum+a[k];
		
		}
		else if(j<i)
		{ 
			for(int k=j+1;k<i;k++)
				sum=sum+a[k];
				if(a[j]>=sum)
			b[i]++;	
		}
			 }
		}
	}
	
	for(int i=0;i<n;i++)
	cout<<b[i]<<" ";

	cout<<"\n";
}
	return 0;
}
