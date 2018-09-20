#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,k,n;
	cin>>a>>n>>k;
	int b[k];
while(k--)
{
	cout<<a%(n+1)<<" ";
	a=a/n;
	
}
return 0;
}
