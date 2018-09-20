#include<bits/stdc++.h>
using namespace std;


int max(int a, int b);
 
int lcs( string x, string y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;
  
      for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (x[i-1] == y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
    
   return L[m][n];
}


int max(int a, int b)
{
    return (a > b)? a : b;
}

 
int main()
{
int t;
cin>>t;
while(t--)
{ int n,m;
cin>>n>>m;
	string s1,s2;
	cin>>s1>>s2;
string s3,s4;
for(int i=0;i<s1.length();i++)
{
	if(s1[i]!=s1[i+1])
s3=s3+s1[i];
}

for(int i=0;i<s2.length();i++)
{
	
	if(s2[i]!=s2[i+1])
s4=s4+s2[i];
}

int m1 = s3.length();
  int n1 = s4.length();
  int x=lcs(s3, s4, m1, n1);
cout<<m1+n1-x<<endl;
}
	return 0;
	
}
