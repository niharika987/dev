#include<iostream>
#include<string.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{

	string s;
	cin>>s;
for(int i=0;i<s.length();i++)
{
int x=s[i]-97;
//cout<<x;
int y=123-x-1;
//cout<<y;
cout<<(char)y;	
}
cout<<endl;
}
return 0;
}
