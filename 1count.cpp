#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;

while(t--)
{
string s,s1;
cin>>s>>s1;
char a=s[0];
int flag=0;

for(int i=0;i<s1.length();i++)
{
if(s1[i]==a)
{
flag=1;
break;
}
}
if(flag==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
