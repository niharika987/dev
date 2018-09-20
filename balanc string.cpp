#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    // Complete this function
    string s4;
    stack<char> s1;
    for(int i=0;i<s.length();i++)
	{
    if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
	   s1.push(s[i]); 
     // cout<<s1.top();
   //cout<<s1.top()<<s[i];
    else
	{ cout<<s[i]<<s1.top();
	   if(s[i]==')' && s1.top()=='(')
       { //cout<<s[i]<<s1.top();
       	s1.pop();
       }
       else if(s[i]==']' && s1.top()=='[')
       { //cout<<s[i]<<s1.top();
       	s1.pop();
       }
       else if(s[i]=='}' && s1.top()=='{')
       { //cout<<s[i]<<s1.top();
       	s1.pop();
       }
	
	}
	
}
    if(s1.empty())
        s4="YES";
    else
       s4="NO";
    
    return s4;
    
        

}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}

