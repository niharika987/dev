#include<bits/stdc++.h>
using namespace std;
int a[5][5];
	bool v[5][5];
void dfs(int a[][5], int n,int m,int row,int col,bool v[][5])
{
	
	v[n][m]=true;
	for(int k=-1;k<=1;k++)
		{
			for(int l=-1;l<=1;l++)
			{
					if( (n+k)>=0 && (n+k)<row && (m+l)>=0 && (m+l)<col && v[n+k][m+l]==0 && a[n+k][m+l])
		    {
				//a[i+k][j+l]=max;
		dfs(a,n+k,m+l,row,col,v);
							   }
			
			}
			}
}
int main()
{ int n=5,m=5;
		
	
		int i,j,count=0;
		for( i=0;i<n;i++)
		{
			for( j=0;j<m;j++)
			{ v[i][j]=0;
			cin>>a[i][j];
			
			}
		}
		
			
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j] && v[i][j]!=1)
			{
				dfs(a,i,j,n,m,v);
				count++;
			}
		}
	}

	


		cout<<count;
		
		
	return 0;
}
