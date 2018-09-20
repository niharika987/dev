#include<iostream>
#include<algorithm>
using namespace std;
int subarray(int a[],int n, int k)
{
	if(k==0)
	return 0;
	int x=n-1;
	if(a[x]>k)
	return subarray(a,x-1,k);
	if(a[x]<=k)
	return 1+subarray(a,x-1,k-a[x]);
	
}
int main()
{
	int k;
	cin>>k;
	int a[12];
	for(int i=0;i<12;i++)
	cin>>a[i];
	
	sort(a,a+12);
	cout<<subarray(a,12,k);
	return 0;
}
