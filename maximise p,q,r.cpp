#include<iostream>
#include<limits.h>
#define ll long long
using namespace std;

int main()
{
long long int n,p,q,r;
	cin>>n>>p>>q>>r;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	long long int i1,j1,k1,maxi=INT_MIN,maxj=INT_MIN,maxk=INT_MIN;

long long int dp[n+1][4];
dp[0][0]=p*a[0];	
	for(int i=1;i<n;i++)
	{
		dp[i][0]=max(dp[i-1][0],p*a[i]*1ll);
	}

dp[0][1]=dp[0][0]+q*a[0];	
	for(int i=1;i<n;i++)
	{
		dp[i][1]=max(dp[i-1][1],dp[i][0]+q*a[i]*1ll);
	}
	
	dp[0][2]=dp[1][1]+r*a[0];	
	for(int i=1;i<n;i++)
	{
		dp[i][2]=max(dp[i-1][2],dp[i][1]+r*a[i]*1ll);
	}
	
	cout<<dp[n-1][2];

	
	
	
	
	
	return 0;
}
