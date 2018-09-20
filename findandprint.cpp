#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int find=s.find("101");
		int f1=s.find("010");
	if(f1!=std::string::npos || find!=std::string::npos)
	cout<<"Good"<<"\n";
	else
	cout<<"Bad"<<"\n";
	}
	return 0;
}
