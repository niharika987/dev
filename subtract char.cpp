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
for(int i=0;i<s.length();i++)
{ 
	if(i==s.length()-1)
	break;
	
	if((s[i]=='a' && s[i+1]=='z')|| (s[i]=='z' && s[i+1]=='a') )
	{
		flag=0;
		continue;
	}
if(abs(s[i+1]-s[i])!=1)
{ 
flag=1;
break;
}


}

if(flag==1)
cout<<"no";
else
cout<<"yes";	
}

}
