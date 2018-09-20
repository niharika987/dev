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
		string s;
		cin>>s;
		int c=0;
		if(n==1 && s[0]=='0')
			c++;
		
		if(s[0]=='0' && s[1]=='0')
			c++;
	
		if(s[n-1]=='0' && s[n-2]=='0')
			c++;
		
		for(int i=1;i<n-1;i++)
		{
			
		 if(s[i]=='0' && s[i-1]=='0' && s[i+1]=='0')
			c++;
	
		}
	
		cout<<c<<endl;
	
	}
	return 0;
}
