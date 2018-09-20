#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{ int flag=0;;
string s;
cin>>s;
sort(s.begin(),s.end());
cout<<s[s.length()-1]<<s[s.length()-2];
}
}
