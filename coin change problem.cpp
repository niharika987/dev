#include<iostream>
using namespace std;
void coinchange(int s[],int x,int n)
{ 
	int t[x][n+1];
//	for(int i=0;i<x;i++)
//	t[i][0]=1;
	for(int i=0;i<=n;i++)
	t[0][i]=1;
	
	for(int i=1;i<x;i++)
	{ //cout<<"i"<<i<<endl;
		for(int j=1;j<=n;j++)
		{ // cout<<"j"<<j;
		
			 if(s[i]>j)
		t[i][j]=t[i-1][j];
			else
			t[i][j]=t[i-1][j]+t[i][j-s[i]];
		}
	}
	cout<<t[x-1][n];
}
int main()
{
	int s[]={2,5,3,6};
	int n=10;
	coinchange(s,4,n);
	return 0;
}
