#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0,count1=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>=65 && s[i]<=90)
		count++;
		
			if(s[i]>=97 && s[i]<=122)
		count1++;
		
	}
//	cout<<count<<count1<<endl;
	if(count<=count1)
	transform(s.begin(), s.end(),s.begin(),::tolower);
	else if(count>count1)
	transform(s.begin(), s.end(), s.begin(),::toupper);
	

	cout<<s;
	return 0;
}
