#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ int n;
	cin>>n;
		string s;
		cin>>s;
		vector <char> v1;
		vector<char>:: iterator i1;
		for(int i=0;i<s.length();i++)
	{
	if(s[i]=='H' || s[i]=='T')
v1.push_back(s[i]);
}

int flag=0;
if(v1.size()==0)
cout<<"Valid"<<endl;
else
{

for(int i=0;i<v1.size();i+=2)
{
// cout<<s[i];
if(v1[i]=='H')
{
	if(v1[i+1]!='T')
	flag=1;
}
else if(v1[i]!='H')
flag=1;


}

if(flag==1)
cout<<"Invalid"<<endl;
else
cout<<"Valid"<<endl;

}

}

	
	
	return 0;
}
