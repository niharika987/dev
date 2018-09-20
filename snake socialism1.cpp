#include<bits/stdc++.h>
using namespace std;
int a[505][505];
int main()
{
	int t;
	cin>>t;
		while(t--)
		{ 
	
		int n,m,ans=0;
		cin>>n>>m;
			int v[n][m];
		int max2=0;
			queue< pair< pair<int,int> ,int > > q;
			
		int i,j,dist=0;
		for( i=0;i<n;i++)
		{
			for( j=0;j<m;j++)
			{ v[i][j]=0;
			cin>>a[i][j];
			if(max2<a[i][j])
			max2=a[i][j];	
			}
		}
		
			for( i=0;i<n;i++)
		{
			for( j=0;j<m;j++)
			{
		
			if(max2==a[i][j])
			{
			q.push({ {i,j},dist});
			v[i][j]=1;	
			}


			}
		}
		
		//int m1=0;
	//q.push({ {i,j},dist});
	int m1,max1=0;
	while(!q.empty())
	{
		int x=q.front().first.first;
		int y=q.front().first.second;
		 m1=q.front().second;
	//	v[x][y]=1;
//	cout<<x<<y<<endl;
	//cout<<m1;
		q.pop();
	
		int flag=0;
		for(int k=-1;k<=1;k++)
		{
			for(int l=-1;l<=1;l++)
			{
					if( (x+k)>=0 && (x+k)<n && (y+l)>=0 && (y+l)<m && v[x+k][y+l]==0)
		    {
				//a[i+k][j+l]=max;
		flag=1;	
	
			    	q.push( { {x+k,y+l},m1+1 });
					           v[x+k][y+l]=1;
							   }
			
			}
			}
	max1=max(max1,m1);
	// we use if condition instead................................
	//	cout<<ans;
		}

		cout<<max1<<endl;
		}
		
	return 0;
}
