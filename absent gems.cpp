#include<bits/stdc++.h>
using namespace std;
int main()
{ vector<pair<string,string> > a;
a.push_back(make_pair("purple","Power"));
a.push_back(make_pair("green","Time"));
a.push_back(make_pair("blue","Space"));
a.push_back(make_pair("orange","Soul"));
a.push_back(make_pair("red","Reality"));
a.push_back(make_pair("yellow","Mind"));
int t;
cin>>t;
int b[6]={0};
int c=0;
while(t--)
{ 
	string s;
	cin>>s;
	for(int i=0;i<6;i++)
	{
		if(a[i].first==s)
	{
		b[i]=1;
c++;
}
	}
}
cout<<6-c<<endl;
for(int i=0;i<6;i++)
{
	if(b[i]==0)
	{
		cout<<a[i].second<<endl;
	}
}
	return 0;
	
}
