#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		
		vector <char> v1;
		vector<char>:: iterator i1;
		for(int i=0;i<s.length();i++)
		v1.push_back(s[i]);
	i1=unique(v1.begin(),v1.end());
	v1.resize(distance(v1.begin(),i1));
	int count=0,count1=0;
	
	
	for(i1=v1.begin();i1!=v1.end();i1++)
{
	if(*i1=='U')
	count++;
	else
	count1++;
}

if(count>count1)
cout<<count1<<endl;
else if(count1>count)
cout<<count<<endl;
else if(count==count1)
cout<<count<<endl;

	
	
	}
	return 0;
}
