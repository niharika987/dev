#include<iostream>
using namespace std;
# define R 3
# define C 3
int minCost(int a[R][C],int n,int m)
{
	int i,j;
	int cost1[R][C];
	cost1[0][0]=a[0][0];	
	
	for( i=1;i<=n;i++)
	cost1[i][0]=cost1[i-1][0]+a[i][0];
	for( j=1;j<=m;j++)
	cost1[0][j]=cost1[0][j-1]+a[0][j];
	
	for( i=1;i<=n;i++)
	{
		for( j=1;j<=m;j++)
	{
		cost1[i][j]=min(cost1[i-1][j-1],min(cost1[i-1][j],cost1[i][j-1]))+a[i][j];
	}
	}
	return cost1[n][m];
}
int main()
{

   int cost[R][C] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };
  cout<<minCost(cost, 2, 2);
  
	return 0;
	
}
