#include<iostream>
using namespace std;
int main()
{
	string s,s1;
	cin>>s;
	
	int i=0;
	while(i<s.length())
	{
	if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
	{
	i=i+3;

}
else
{ 
	if(s[i+1]!='W')
	{
	s1=s1+s[i];
	i++;}
	else
	{ 	if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B')
		s1=s1+s[i]+" ";
		i=i+4;
	}
}
	
	
	}
	
	cout<<s1;
	return 0;
}
