#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		cin>>a[j];
		bool done=0;
		while(!done)
		{
		done=1;
		for(int j=0;j<n-2;j++)
		{
			if(a[j]>a[j+2])
			    { done=0;
			    	int x=a[j];
			    	a[j]=a[j+2];
			    	a[j+2]=x;
			    }
			
		} }
		int m, flag=0;
		for( m=0;m<n-1;m++)
		{
			if(a[m]>a[m+1])
			{
			flag=1;
			break;}
		}
		if(flag==1)
		cout<<"Case #"<<i<<":"<<" "<<m<<"\n";
		else
	cout<<"Case #"<<i<<":"<<" "<<"OK"<<"\n";
		
	}
	return 0;
}
