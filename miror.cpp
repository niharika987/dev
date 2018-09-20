#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
    {string s;
    cin>>s;
    int flag=0;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='0' || s[i]=='1' || s[i]=='8')
       {continue;
       }else
       {
       flag=1;
       break;}
       
   }
   
   for(int i=0,j=s.length()-1;i<=j;i++,j--)
   {
   	{
   	
   	if(s[i]!=s[j])
   	flag=2;
   	break; }
   
   }
   if(flag==0 )
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
 
    }
}
