#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a[26]={0};
	for(int i=0;i<s.length();i++)
	{
		a[s[i]-97]++;
	}
	int t;
	cin>>t;
	while(t--)
	{
		string s1;
		cin>>s1;
		int j=0,flag=0;
	for(int i=0;i<s1.length();i++)
	{
		if(a[s1[i]-97]==0)
		{
		flag=1;
		break;}
	}
		if(flag==1)
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<endl;
	}
	
	return 0;
}
