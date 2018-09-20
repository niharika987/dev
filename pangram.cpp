#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
 int a[26]={0};
 for(int i=0;i<s.length();i++)
 { if(s[i]>=97 && s[i]<=123)
 	a[s[i]-97]++;
 else if(s[i]>=65 && s[i]<=91)
 a[s[i]-65]++;
 }
 int flag=0;
   for(int i=0;i<26;i++)
    {
    	if(a[i]==0)
    	{ 
    		flag=1;
    		break;
    	}
    }
    if(flag==1)
    cout<<"not pangram";
    else
    cout<<"pangram";
	return 0;
}

