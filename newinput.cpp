#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1=0;
string s1;
	vector<string> s;
	
	while(cin>>s1)
	{
		if(s1==\n)
break;
		if(s1=="42")
		{
	continue;}
		else
		{
		s.push_back(s1);
		n1++; }
	}
	for(int i=0;i<n1;i++)
	cout<<s[i]<<endl;
	
	return 0;
	
	}
