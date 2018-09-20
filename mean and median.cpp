#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	sum=sum+a[i];
	}
	
	printf("%.6f ",(double)(sum)/(double)(n));
	sort(a,a+n);
	printf("%.6f ",(double)(a[(n-1)/2]+a[n/2])/(double)(2));
	
	
}
