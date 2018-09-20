#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
string s,s1;
int a[26]={0};
cin>>s;
cin>>s1;
for(int i=0;i<s.length();i++)
a[s[i]-'A']++;
for(int i=0;i<s1.length();i++)
a[s1[i]-'A']++;
string s2;
cin>>s2;
int b[26]={0};
for(int i=0;i<s2.length();i++)
b[s2[i]-'A']++;
int flag=0;
for(int i=0;i<26;i++)
{
	if(a[i]!=b[i])
	{
	flag=1;
	break;}
}
if(flag==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
