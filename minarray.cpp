#include<iostream>
using namespace std;
int main()
{
string s;
cin>>s;
char a[4]={'C','H','E','F'};
int j=0;
int count=0;
for(int i=0;i<s.length();i++)
{
 if(s[i]==a[j])
 j++;
 if(j==4)
 {
count++;
 j=0;}
 
 
}
cout<<count;
return 0;
}
