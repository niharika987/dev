#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
//	bool mycomp (char c1, char c2)
//{ return tolower(c1)<tolower(c2); }

int main()
{
	char a[100];
char b[100];
	string s,s1;
	cin>>s>>s1;
	//int 
	// for case insensitive comparisob
	transform(s.begin(), s.end(), s.begin(), ::tolower);
    
transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
   // cout<<s<<s1;
		strcpy(a, s.c_str());
			strcpy(b, s1.c_str());
			if(s==s1)
			{
			cout<<"0";
		return 0;
		}
if( lexicographical_compare(a,a+100,b,b+100))
cout<<"-1"<<endl;
else
{
//if(lexicographical_compare(b,b+100,a,a+100))
cout<<"1";

}	return 0;
}
