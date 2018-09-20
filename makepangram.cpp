#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[26];
		for(int i=0;i<26;i++)
		cin>>a[i];
		string s;
		cin>>s;
		int b[26]={0};
		for(int i=0;i<s.length();i++)
		b[s[i]-97]++;
		int sum=0;
		for(int i=0;i<26;i++)
		{
			if(b[i]==0)
			sum=sum+a[i];
		}
		cout<<sum<<endl;
	}
}
