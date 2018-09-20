#include<bits/stdc++.h>
using namespace std;

int lcs(string s, string s1)
{
	int x1=s.length();
	int y1=s1.length();
	int T[x1+1][y1+1];
	
	for(int i=0;i<=x1;i++)
	{
		for(int j=0;j<=y1;j++)
		{
			if(i==0  || j==0)
				T[i][j]=0;
			else if(s[i-1]==s1[j-1])
				T[i][j]=T[i-1][j-1]+1;
			else
				T[i][j] = max( T[i][j-1],T[i-1][j] );
			
		}
	}
	
	return T[x1][y1];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,s1;
		cin>>s>>s1;
		int x=lcs(s,s1);
		//cout<<x;
		if(x==0 || x!=s.length() )
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	return 0;
}
