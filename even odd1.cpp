#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{ unsigned long long int n,k;
cin>>n>>k;

unsigned long long int m;
unsigned long long int i,j=0;
if(n%2==0)
m=n/2;
else
m=(n/2)+1;
if(k<=m)
{
	for(i=1;i<=n;i+=2)
{
j++;
if(j==k)
break;

}

}
else
{ j=m;
		for(i=2;i<=n;i+=2)
{
j++;
if(j==k)
break;

}

}
cout<<i;
return 0;	
}

