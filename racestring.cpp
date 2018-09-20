#include<bits/stdc++.h>
using namespace std;
int main()
{ 
// since the game is valid , last match determines whether chef won or not
	int t;
	cin>>t;
	while(t--)
	{
		int o=0,z=0;
		string s;
		cin>>s;
		
	if(s[s.length()-1]=='1')
	cout<<"WIN"<<endl;
	else
	cout<<"LOSE"<<endl;
	/*
		int o= count(s1.begin(),s1.end(),'1');
		int z= count(s1.begin(),s1.end(),'0');
	if(o>z)
	cout<<"WIN"<<endl;
	else
	cout<<"LOSE"<<endl;
		
	*/	
	}
	return 0;
	
}
