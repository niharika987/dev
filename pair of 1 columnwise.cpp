#include<iostream>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n,m,cl,c;
		cin>>n>>m;
		int a[n][m];
		string s[n],s1;
		for(i=0;i<n;i++)
		{
		//	cin>>s[i];
			
			for(j=0;j<m;j++)
		cin>>a[i][j];
		}
		cl=0;
		for(j=0;j<m;j++)
		{
			c=0;
			for(i=0;i<n;i++)
			{
				if(a[i][j]==1)
				c++;
			}
			while(c)
			{
				c--;
				cl=cl+c;
				}
		}
		cout<<cl<<endl;
	}
	return 0;
} 
