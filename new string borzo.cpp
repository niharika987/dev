#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s,s1;
cin>>s;
int i=0;
while(i<s.length())
{ //cout<<s[0];

	if(s[i]=='.')
	{
	s1=s1+'0';
	i++;
//	cout<<s[i];
	}
	else if(s[i]=='-' && s[i+1]=='.')
{
	s1=s1+'1';
	i=i+2;
}
else if(s[i]=='-' && s[i+1]=='-')
{
s1=s1+'2';
i=i+2;
}

}
cout<<s1;
	return 0;
}
