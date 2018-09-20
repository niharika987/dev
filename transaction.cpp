#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int x,i,min=100000;
	for(i=0;i<n;i++)
	{
			if(a[i]<min)
		{
			min=a[i];
			x=i;	
		}
	}
	
	int max=min;
	
	for(int j=x+1;j<n;j++)
	{
		if(a[j]>max)
		max=a[j];
	}
	cout<<max-min;
	
	
	return 0;
}
