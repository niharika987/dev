#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int x,x1;
	cin>>x>>x1;
	unsigned long long int x2;
	
	stringstream ss,s1;
ss << x;
s1<<x1;
string s=s1.str();
string str = ss.str();

for(int i=0;i<s.length();i++)
{
	if(str[i]=='0' && s[i]=='0')
	cout<<'0';
	else if(str[i]=='1' && s[i]=='1')
	cout<<'0';
	else
	cout<<'1';
}



	return 0;
}
