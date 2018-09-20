#include<bits/stdc++.h>

using namespace std;
int main()
{
	int x;
	cin>>x;
	int f=0;
	if(x%8==0)
{
	cout<<x;
return 0;
}
	else
	{
	
	stringstream s;
	s<<x;
	string s1=s.str();
	while (next_permutation(s1.begin(), s1.end()));
	{
		if(s1[0]!='0')
		{
	
	stringstream s2(s1);
	int y;
	s2>>y;
//	cout<<y;
	if(y%8==0)
	{
	f=1;
		cout<<y;
	return 0;
	}
	}
	
	}
	if(f==0)
	cout<<"-1";
	}

	
	return 0;
}
