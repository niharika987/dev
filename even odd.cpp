#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{ unsigned long long int n,k;
cin>>n>>k;

unsigned long long int j=0;
unsigned long long int i;
for(i=1;i<=n;i+=2)
{
j++;
if(j==k)
break;

}

if(j==k)
cout<<i<<endl;
else
{
	for( i=2;i<=n;i+=2)
{ 
j++;
if(j==k)
break;	

}
cout<<i;
}
return 0;	
}

