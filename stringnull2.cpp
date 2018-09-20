#include <bits/stdc++.h>

using namespace std;

void reduced(string s){

  stack<char> j;
  int i=s.length()-1;
    j.push(s[i]);
    i--;
  while(i>=0)
  {
  	char c=j.top();
  if(c==s[i])
  {
  	j.pop();
  }
  else{
  	j.push(s[i]);
  }
	   i--;
  	
  }
  
  if(j.empty())
  {
  	cout<<"Empty String";
  }
  else{
  
  while(!(j.empty()))
  {
  	cout<<j.top();
  	j.pop();
  }
  
  
}
}

int main() {
    string s;
    cin >> s;
  reduced(s);
    
    return 0;
}

