#include<bits/stdc++.h>
using namespace std;
int mininserts(string s,int low,int high)
{
	if(low>high)
	return INT_MAX;
	if(low==high)
	return 0;
	if(low==high-1) return (s[low]==s[high]) ? 0:1;
	
	return (s[low]==high)? mininserts(s,low+1, high-1) : (min(mininserts(s,low+1,high),mininserts(s,low,high-1) )+1);
}
int main()
{
	string s;
	cin>>s;
	cout<<mininserts(s,0,s.length()-1);
	return 0;
}
