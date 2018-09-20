#include<bits/stdc++.h>

using namespace std;
void longestpallin(string s)
{ string s1=s;
	int n=s.length();
	reverse(s.begin(),s.end());
	int lcp[n+1][n+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			lcp[i][j]=1;
			
		else if(s[i-1]==s1[j-1])
			lcp[i][j]=1+lcp[i-1][j-1];
			else
			lcp[i][j]=max(lcp[i-1][j],lcp[i][j-1]);
			
		}
	}
	cout<<lcp[n-1][n-1];
}
int main()
{
	string s="abdfeaba";
	longestpallin(s);
	return 0;
}
