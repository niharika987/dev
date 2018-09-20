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
unsigned long long 	int mid;
if(k<=m)
{ 
	if(n%2==0)
	mid=n-1;
	else
	mid=n;
	
//	cout<<mid;
	cout<<mid-(2*(m-k));
	return 0;
}
else
{ j=m;
	
cout<<2*(k-j);
return 0;
}

return 0;	
}

