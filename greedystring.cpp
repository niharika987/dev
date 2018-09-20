#include <iostream>
using namespace std;

int main()
{
   string s;
   cin>>s;
    if(s[0]=='?' && s[1]=='a')
   s[0]='b';
   if(s[0]=='?')
   s[0]='a';
  
   for(int i=0;i<s.length();i++)
   {
       
     if(s[i]=='?' && (s[i+1]=='a' || s[i-1]=='a') )
       s[i]='b';
    else  if(s[i]=='?' && (s[i+1]=='b' || s[i-1]=='b') )
       s[i]='a';
       
       
   }
   cout<<s;
    return 0;
}

