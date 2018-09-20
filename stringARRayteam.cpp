#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ int n;
	cin>>n;
	
		string s[100005];
		for(int i=0;i<n;i++)
		cin>>s[i];
		
		
		int count=0;
		string x=s[0];
		string y;
		for(int i=0;i<n;i++)
	{
		if(s[i]==x)
		count++;
		else
		y=s[i];
		
	}

int count1=n-count;
if(count==count1)
cout<<"Draw"<<endl;
else if(count>count1)
cout<<x<<endl;
else if(count1>count)
cout<<y<<endl;


}
	return 0;
}
