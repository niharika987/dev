#include<bits/stdc++.h>
using namespace std;


int max(int a, int b);
 
int lcs( string x, string y, int m, int n )
{
   if (m == 0 || n == 0)
     return 0;
   if (x[m-1] == y[n-1])
     return 1 + lcs(x, y, m-1, n-1);
   else
     return max(lcs(x, y, m, n-1), lcs(x, y, m-1, n));
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
cout<<m1+n1-x;
}
	return 0;
	
}
