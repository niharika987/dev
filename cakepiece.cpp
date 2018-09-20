#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{ vector<int> a(26);
		 string s,s1;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			a[s[i]-97]++;
		}
		int x=*max_element(a.begin(),a.end());
		int sum=0;
	for(int i=0;i<26;i++)
	{
		sum=sum+a[i];
	}
	if((sum-x)==x)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	}
	return 0;
}
