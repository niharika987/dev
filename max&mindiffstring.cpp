#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s,s1;
		cin>>s>>s1;
		int mx=0,mn=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='?'&& s1[i]=='?')
			{
		mx++; }
			else if(s[i]!='?' && s1[i]=='?')
			{
			mx++;
			 }
			 else if(s[i]=='?' && s1[i]!='?')
			{
			 mx++; }
			 else if(s[i]!=s1[i])
			 {
			 	mx++;
			 	mn++;
			 }
			 
		}
		cout<<mn<<" "<<mx<<endl;
	}
	return 0;
}
