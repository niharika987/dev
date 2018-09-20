#include<bits/stdc++.h>
using namespace std;
bool ispallindrome(string s)
{  int i,j;
	
	for(i=0,j=s.length()-1;i<s.length();i++,j--)
	{
		if(s[i]!=s[j])
		return 0;
	}
	return 1;
}
int main()
{
	string s;
	cin>>s;
	int flag=0,c=0;
	while(s.length()>0)
	{
		if(ispallindrome(s))
		{
			flag=1;
			break;
		}
		else{
			s.erase(s.begin()+ s.length() -1);
			c++;
		}
	}
		cout<<c;
	return 0;
}
