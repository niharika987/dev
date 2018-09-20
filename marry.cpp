
#include<bits/stdc++.h>
using namespace std;
void marry(string s1, string s2)
{
	int i=0,j=0;
	while(i!=s1.length() && j!=s2.length() )
	{
	
	if(s1[i]==s2[j])
	{
		i++;
		j++;
	}
	else
	{
		j++;
	}
	
	}
	
	if(i==s1.length())
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	
}

int main()
{
		int t;
	cin>>t;
	while(t--)
	{
		string s,s1;
		cin>>s>>s1;
		if( s.length() > s1.length() )
			marry(s1,s);
		else
			marry(s,s1);
	}
	return 0;
}
