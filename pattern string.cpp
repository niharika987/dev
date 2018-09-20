#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i,l=s.length(),l1=0;
	for(i=0;i<s.length()/2;i++)
	{ for(int p=0;p<l1;p++)
		cout<<" ";
		cout<<s[i];
		for(int j=0;j<l-2;j++)
		cout<<" ";
		cout<<s[s.length()-i-1];
		cout<<endl;
		l=l-2;
		l1=l1+1;
	}
	for(int p=0;p<l1;p++)
		cout<<" ";
	cout<<s[s.length()/2];
	cout<<endl;
	
	int x=s.length()/2;
	int l2=l1;
	l=0;
	for(int i=1;i<=x;i++)
	{
	for(int p=0;p<l2-1;p++)
		cout<<" ";
		
		cout<<s[x-i];
		for(int j=1;j<l+2;j++)
		cout<<" ";
		cout<<s[x+i];
		cout<<endl;
		l=l+2;
		l2=l2-1;
	}
	return 0;
}
