
#include<bits/stdc++.h>
using namespace std;
int main()
{
int count=0;
		string s;
getline(cin,s);


string st=".";
int find1=s.find("->");
int find= s.find("//");
if(find==std::string::npos && find1!=std::string::npos)
s.replace(find1,2,st);

if(find1<find && find!=std::string::npos)
s.replace(find1,2,st);

cout<<s;

		cout<<endl;


}
