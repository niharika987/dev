#include<string>
#include<iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--)
	{ int i=0;
		while(i<s.length()-1)
		{
			if(s[i]=='B' && s[i+1]=='G')
			{ char x=s[i];
			s[i]=s[i+1];
			s[i+1]=x;
				i=i+2;
			//	cout<<i;
			}
			else
			{
			i++;
			//cout<<i;}
		}
	}
}
	cout<<s<<"\n";
	return 0;
}
