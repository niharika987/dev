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
		int flag=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='?'|| s1[i]=='?')
			{
			continue; }
			else if(s[i]!=s1[i])
			{
			flag=1;
			break; }
		}
		if(flag==1)
		cout<<"No"<<endl;
		else if(flag==0)
		cout<<"Yes"<<endl;
	}
	return 0;
}
