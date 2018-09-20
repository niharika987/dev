#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string j,s;
		cin>>j>>s;
		int a[2][26]={0},b[2][26]={0};
		for(int i=0;i<j.length();i++)
		{ if(j[i]>=97 && j[i]<=123)
			a[0][j[i]-'a']++;
			else if(j[i]>=65 && j[i]<=91)
			a[1][j[i]-'A']++;
		
		}
		
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>=97 && s[i]<=123)
			b[0][s[i]-'a']++;
			else if(s[i]>=65 && s[i]<=91)
			b[1][s[i]-'A']++;
		
		}
		
			int count=0;
		for(int i=0;i<26;i++)
		{ 
		if(a[0][i]!=0 )
		count=count+b[0][i];
		if(a[1][i]!=0 )
		count=count+b[1][i];
		
		}
		cout<<count<<"\n";
		
		
		
	}
	return 0;
}
