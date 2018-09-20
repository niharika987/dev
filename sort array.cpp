#include<bits/stdc++.h>

using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int g,k;
cin>>g>>k;
int a[g];
	for(int i=0;i<g;i++)
	{
	cin>>a[i];
	}
	sort(a,a+g);
	int sum=0,count=0;
	for(int i=k;i<g-k-1;i++)
	{
	sum=sum+a[i];
	count++; }
	printf("%f\n",sum/count);
	
}
	return 0;
}

