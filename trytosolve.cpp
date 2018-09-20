#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{

	int n,k;
	cin>>n>>k;
	int a[n];
int s=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
s=s+a[i];
}
int s1=s*pow(2,(n-1));
int g,x=1;
int s2=0;
for(int i=0;i<n;i++)
{
g=1;
for(int j=0;j<=x;j++)
{
if((i+j)==(n))
g=g*a[0];
else
g=g*a[i+j];

}
s2=s2+g;
}
x++;

}
	return 0;
}
