#include<iostream>
#include<algorithm>
using namespace std;
int binarysearch(int x,int a[],int l,int h)
{
while(h>=l)
	{
		int mid=(l+h)/2;
	if(a[mid]==x)
	return mid;
	else if(a[mid]<x)
l=mid+1;
	else if(a[mid]>x)
h=mid-1;
	}

	
}
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
		cin>>a[i];
		int k;
		cin>>k;
		int x=a[k-1];
		sort(a,a+n);
	int y=	binarysearch(x,a,0,n-1);
		cout<<y+1<<endl;
	}
	return 0;
}
