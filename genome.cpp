#include<iostream>
using namespace std;
int main()
{
	string s,s1;
	cin>>s>>s1;
	int a[26]={0},b[26]={0};
	for(int i=0;i<s.length();i++)
	{
	a[s[i]-97]++	;
	}
	for(int i=0;i<s1.length();i++)
	{

	b[s1[i]-97]++;
	}
	int flag=0;
	for(int i=0;i<26;i++)
	{
		if(a[i]!=b[i])
	 {
	 flag=1;
	break;}
	}
	if(flag==1)
	cout<<"NO";
	else
	cout<<"YES";
	return 0;
}
