#include<bits/stdc++.h>
using namespace std;
int cutrod(int a[],int n)
{
	int val[n+1];
	 val[0]=0;
int i,j;
	
	for( i=1;i<=n;i++)
	{ int max_val=INT_MIN;
	for( j=0;j<i;j++)
	max_val=max(max_val,a[j]+val[i-j-1]);
	val[i]=max_val;
	}
	return val[n];
}
int main()
{ int n=8;
	int ar[]={1,5,8,9,10,17,17,20};
	cout<<cutrod(ar,8);
	return 0;
}
