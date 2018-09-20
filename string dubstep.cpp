#include<iostream>
using namespace std;
int main()
{
	string s,s1;
	cin>>s;
	for(int i=0;i<s.length()-2;i++)
	{
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
		{
		i=i+3;
		continue;}
		else
		{ if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B' )
			s1=s1+s[i]+" ";
		  else
			s1=s1+s[i];	
		}
	}
	
	cout<<s1;
	return 0;
}
