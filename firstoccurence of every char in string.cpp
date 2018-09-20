#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{    string s;
cin>>s;
char a[s.length()];
int j=0;
for(int i=0;i<s.length();i++)
{
	char d=s[i];
	if(strchr(a,d)==NULL)
	{
		a[j]=d;
		j++;
	}
}
	for(int i=0;i<j;i++)
	cout<<a[i];
	
	cout<<endl;
}
return 0;
}

