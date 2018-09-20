#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
//	cout<<s;
	char z=s[0];
	char t;
	if(z>=97 && z<=123 )
	{
	t=toupper(z);
	s[0]=t;
}

cout<<s;
	return 0;
}
