#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++)
		cin>>s[i];
	int flag=0;
	for(int i=0;i<n;i++)
		{
			if(s[i]=="cookie" && s[i+1]!="milk")
			{
			flag=1;
		break;}
		}
		if(flag==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
