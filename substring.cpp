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
		string s,s1;
		cin.ignore();
		getline(cin,s);
		//cout<<s;
		//cout<<"h1";
		
		int m;
		cin>>m;
		cin.ignore();
	getline(cin,s1);
//	cout<<s1;
		int found=s.find(s1);
		if(found!=std::string::npos)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}
