#include<bits/stdc++.h>

using namespace std;

int countpath(int n,int maze[][10])
{
	if(maze[0][0]==-1)
	{
	return 0;
}
	for(int i=0;i<n;i++)
	{
	if(maze[i][0]==0)
	maze[i][0]=1;
	else
	break;
}

for(int i=1;i<n;i++)
	{
	if(maze[0][i]==0)
	maze[0][i]=1;
	else
	break;
}

for(int i=1;i<n;i++)
{
	
	for(int j=1;j<n;j++)
	{
		
		if(maze[i][j]==-1)
		continue;
		
		if(maze[i-1][j]>0)
		maze[i][j]=(maze[i][j]+maze[i-1][j]);
		
		if(maze[i][j-1]>0)
		maze[i][j]=(maze[i][j]+maze[i][j-1]);
	cout<<maze[i][j];
	}
	
}

if(maze[n-1][n-1]>0)
return maze[n-1][n-1];
else
{

return 0;
}
}


int main()
{
int n;
	cin>>n;
	int a[n][10];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	{
		cin>>a[i][j];
		if(a[i][j]==1)
		a[i][j]=-1;
	}
	
	}
	

	cout<<countpath(n,a);
	return 0;
}
