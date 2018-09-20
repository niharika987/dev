#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c=0;
	while(n--)
	{ char a[4]={'c','h','e','f'};
		string s;
		cin>>s;
		
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='c' && s[i+1]=='h')
		{
			c++; 
			break;}
			else if(s[i]=='h' && s[i+1]=='e')
			{
			c++;
			break;}
			else if(s[i]=='e' && s[i+1]=='f')
			{
			c++; break;}
		}
	//cout<<c;	
	}
	
	cout<<c;
}
