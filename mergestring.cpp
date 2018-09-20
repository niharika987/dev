#include<bits/stdc++.h>
 using namespace std;
int max(int a, int b);
 

int lcs( string s, string s1, int m, int n )
{
   if (m == 0 || n == 0)
     return 0;
  if (s[m-1] == s1[n-1])
     return 1 + lcs(s, s1, m-1, n-1);
   else
     return max(lcs(s, s1, m, n-1), lcs(s, s1, m-1, n));
}
 


int max(int a, int b)
{
    return (a > b)? a : b;
}
 

int main()
{
int n,m,k;
	 cin>>n>>m>>k;
  string s,s1;
  cin>>s>>s1;
  
  

int a[26]={0};
for(int i=1;i<=25;i++)
a[i]=i;

int r= lcs( s, s1, m, n ) ;
if(r==k)
{
cout<<"-1"<<endl;
}
else
{
	
	
	int x=(s[0]-97)^(s1[0]-97);
cout<<x<<endl;
}
  return 0;
}


