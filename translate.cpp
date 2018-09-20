#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	map<char,int> m1;
	for(int i=0;i<26;i++)
	{ //<<char(97+i);
	//	m1[i+1] = char(97+i);
	m1[char(97+i)]=i+1;
	}
	
		map<char,int> m3;
	for(int i=0;i<26;i++)
	{ //<<char(97+i);
	//	m3[i+1] = char(65+i);
		m3[char(65+i)]=i+1;
	}
	
	string s1;
	cin>>s1;

	map<int ,char> m2;
	for(int i=0;i<26;i++)
	{ //<<char(97+i);
		//m2[s1[i]]=i+1;
	m2[i+1]=s1[i];
	}
	
	while(t--)
	{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)	
	{
		if(s[i]=='_')
			cout<<" ";
		else if(m1.find(s[i])!=m1.end())
		{
			int x= m1[s[i]];
		//cout<<x;
			cout<<m2[x];
		}
		else if(m3.find(s[i])!=m3.end())
		{
			int x= m3[s[i]];
		//	cout<<"m2"<<x;
		cout<<char(toupper(m2[x]) );
		//	cout<<toupper(y);
		}
		else
		{
			cout<<s[i];
		}
	}
	cout<<endl;
	}
	
	return 0;
}
