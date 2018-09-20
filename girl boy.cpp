#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
string s;
int a[26]={0};
cin>>s;
//cout<<s;
for(int i=0;i<s.length();i++)
{ if(a[s[i]-'a']==0)
	a[s[i]-'a']++;
}
int count=0;

for(int i=0;i<26;i++)
{
if(a[i]==1)
{
//cout<<i;
count++;
}
}
//cout<<count;
if(count%2==0)
cout<<"CHAT WITH HER!"<<endl;
else cout<<"IGNORE HIM!"<<endl;
return 0;
}
