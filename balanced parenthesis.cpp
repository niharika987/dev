#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    stack<char> s1;
	    int flag=0;
	    
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
	        s1.push(s[i]);
	         if(s[i]==')' || s[i]=='}' || s[i]==']')
	        {
	            if(s[i]!=s1.top())
	            {flag=1;
	            break;}
	            else
	            {
	                s1.pop();
	            }
	        }
	    }
	    if(flag==1)
	    cout<<"unbalanced"<<endl;
	    else
	    cout<<"balanaced"<<endl;
	}
	
	return 0;
}
