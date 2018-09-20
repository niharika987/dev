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
	int m=0,sn=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='m' && s[i+1]=='s' && s[i-1]=='s' )
		s[i-1]='0';
	else if(s[i]=='m' && s[i+1]=='s'   )	
	s[i+1]='0';
	else if(s[i]=='m' && s[i-1]=='s'   )	
	s[i-1]='0';
	
	}
	
	
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='m')
		m++;
		else if(s[i]=='s')
		sn++;
	}
	
	if(sn>m)
	cout<<"snakes"<<endl;
	else if(sn<m)
	cout<<"mongooses"<<endl;
	else if(sn==m)
	cout<<"tie"<<endl;
	
}
	return 0;
}
