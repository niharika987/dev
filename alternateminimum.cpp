#include<iostream>
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
		cin>>a[i];
			for(int i=0;i<n;i++)
		cin>>b[i];
		int flag=0;
	long long sum=0,sum1=0;
		for(int i=0;i<n;i++){
			if(flag==0)
			{
			sum=sum+a[i];
		
			flag=1;
			}else
			{
		
			sum=sum+b[i];
			flag=0;
	}
		}
		
		 int flag1=0;
			for(int i=0;i<n;i++){
			if(flag1==0)
			{
			sum1=sum1+b[i];
			flag1=1;
			}else
		{
			sum1=sum1+a[i];
	flag1=0;
	}
		}
		
		cout<<min(sum,sum1)<<endl;
		
	}
	
}
