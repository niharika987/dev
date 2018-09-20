#include<bits/stdc++.h>
using namespace std;
int cutrod(int a[],int n)
{
	if(n<=0)
	return 0;
	
	int max_val=INT_MIN;
	for(int i=0;i<n;i++)
	 max_val=max(max_val,a[i]+cutrod(a,n-i-1));
	return max_val;
}
int main()
{ int n=8;
	int ar[]={1,5,8,9,10,17,17,20};
	cout<<cutrod(ar,8);
	return 0;
}
