#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,count=0;
cin>>a>>b;
for(int i=a;i<=b;i++)
{
int x=i;

stringstream ss;
ss << x;
string x1 = ss.str();
if(x1.length()==1)
{
count++;
}
else{
int flag=0;
for(int j=0;j<x1.length();j++)
{ if(j==x1.length()-1)
break;
	if(x1[j]!=x1[j+1])
	{
flag=1;
	break; }
	
	
}
if(flag==0)
count++;
}
}

cout<<count;
return 0;
} 
