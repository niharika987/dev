#include<bits/stdc++.h>
 using namespace std;
int max(int a, int b);
 

int lcs( string x, string y, int n1, int n )
{
   int t[n1+1][n+1];
   int i, j;
  
  
   for (i=0; i<=n1; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         t[i][j] = 0;
  
       else if (x[i-1] == y[j-1])
         t[i][j] = t[i-1][j-1] + 1;
  
       else
         t[i][j] = max(t[i-1][j], t[i][j-1]);
     }
   }
    
  
   return t[n1][n];
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
// cout<<s<<s1;
 if(lcs( s, s1, m, n ) ==1)
  printf("%d \n",s.length()-((lcs( s, s1, m, n ) )-1));
  else
  
  printf("%d \n", s.length()-lcs( s, s1, m, n ) );
}
  return 0;
}


