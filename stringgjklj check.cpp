#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	s[s.length()+1]='0';
	for(int i=0;i<s.length();i++)
	{
		if(s[i+1]>1 || s[i+1]<=9)
		{ 
			char x=s[i+1];
		int x1=x-'0';
		//cout<<x1<<endl;
		while(x1--)
			{
			cout<<s[i]; 
		//	cout<<s[i+1]<<endl;
			
			}
			i=i+2;
			cout<<i;
		}
		else
		{ cout<<"jhdj";
		if(i==s.length())
		cout<<s[i];
		}
	
	
	}
	return 0;
}
