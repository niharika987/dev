#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
long long int sum=0;
	for(int i=0;i<m;i++)
{ if(a[i]<0)
	sum=sum+a[i];
	else
	break;
}
	cout<<abs(sum);
	return 0;
}
