#include<bits/stdc++.h>
using namespace std;
//int a[5][5];
//	bool v[5][5];
char a[8][8];
void dfs(char a[][8], int n,int m,int row)
{
	
//	v[n][m]=true;
	for(int k=-1;k<=1;k++)
		{
			for(int l=-1;l<=1;l++)
			{
					if( (n+k)>=0 && (n+k)<row && (m+l)>=0 && (m+l)<row  && a[n+k][m+l]=='X')
		    {
				//a[i+k][j+l]=max;
		dfs(a,n+k,n+l,row);
							   }
			
			}
			}
}
int main()
{ 
int t;
cin>>t;
while(t--)
{
	int	count=0;
int n;
cin>>n;

//int v[n][n]=0;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{ 
		cin>>a[i][j];
	}
}
		
	

	
			
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j] )
			{
				dfs(a,i,j,n);
				count++;
			}
		}
	}

	


		cout<<count;
}
		
	return 0;
}
