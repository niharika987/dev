#include<iostream>
using namespace std;
int dp[100][100];
int rec(int i,int j)
{
		if(dp[i][j]!=-1)
	return dp[i][j];
	
	if(i==0 || j==0)
	return 1;

	
	dp[i][j]=rec(i-1,j)+rec(i,j-1);
return dp[i][j];

}
int main()
{
 for(int i=0;i<100;i++)
{
	for(int j=0;j<100;j++)
	dp[i][j]=-1;
}
	
	/*int a[3][3]={1,2,3,
			   4,5,6,
			   7,8,9};*/
	cout<<rec(3,4)<<endl;
	return 0;
}
