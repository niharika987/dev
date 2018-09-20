#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t,x,y,i,ca,cb;
char pre;
string s;
int main() {
	scanf("%lli",&t);
	while(t--)
	{
	    ca=0;
	    cb=0;
	    cin>>s;
	    scanf("%lli%lli",&x,&y);
	   
	    for(i=0;i<s.length();i++)
	    {
	        if(s[i]=='a')
	        ca++;
	        else
	        cb++;
	    }
	    if(ca>cb)
	    pre='a';
	    else
	    pre='b';
	    cout<<pre;
	    if(pre=='a'&&ca>0)
	    ca--;
	    else if(pre=='b'&& cb>0)
	    cb--;
	    for(i=1;i<s.length();i++)
	    {   
	        if(ca>0 &&pre=='b')
	        {cout<<"a"; ca--;pre='a';}
	        
	        else if(cb>0 &&pre=='a')
	        {cout<<"b"; cb--; pre='b';}
	        
	        else if(pre=='a')
	        {cout<<"*a";pre='a';}
	        
	        else if(pre=='b')
	        {cout<<"*b"; pre='b';}
	        
	    }
	    cout<<endl;
	    
	}
}
 
