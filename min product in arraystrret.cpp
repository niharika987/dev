#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int r=a[n-1];
long long p=0;
for(int i=0;i<n;i++)
{
	if((r-a[i]>1 ||r-a[i]==1) && (r-a[i]<k ||r-a[i]==k))
{
p=p*(r*a[i]);

break;
}else
{
	p=p+(a[i]*a[i+1]);
}

}
cout<<p%1000000007;
}
