#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	s[s.length()+1]='0';
	for(int i=0;i<s.length();i++)
	{  cout<<i;
	char x=s[i+1];
		int x1=x-'0';
		if(x1>1 || x1<=9)
		{ 
			
	
		while(x1--)
			{
			cout<<s[i]; 	
			}
			i=i+2;
			cout<<i;
		}
	
	
	
	}
	return 0;
}
