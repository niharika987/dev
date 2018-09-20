#include<bits/stdc++.h>
using namespace std;
int max(int a, int b);
 

int lcs( string X, string Y, int m, int n )
{
   if (m == 0 || n == 0)
     return 0;
   for(int i=1; i<=m; i++) {
    
		for(int j=1; j<=n; j++) {
        	if (P[i-1] == Q[j-1])
            	T[i][j] = T[i-1][j-1];
        	else
            	T[i][j] = min(T[i-1][j], T[i][j-1]) + 1;
    }
}

}

int max(int a, int b)
{
    return (a > b)? a : b;
}
 

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
	
  string s,s1;
  cin>>s;
  s1=s;
   reverse(s.begin(),s.end());
  int m = s.length();
  int n = s1.length();
 cout<<s<<s1;
  printf("Length of LCS is %dn", s1.length()-lcs( s, s1, m, n ) );
}
  return 0;
}


