#include<iostream>
using namespace std;
int main()
{
	string d="axybcaxyab";
	int a[26]={0};
	for(int i=0;i<d.length();i++)
	{
		a[d[i]-'a']++;
	}
	int f1=0, flag=0;
	if(d.length()%2==0)
	{
		for(int i=0;i<s.length();i++)
		{
			if(a[d[i]-a]%2!=0)
			{
			flag=1;
			break;}
		}
	}
	else{
		for(int i=0;i<s.length();i++)
		{
			if(a[d[i]-a]%2!=0)
			{
			flag=1;
			break;}
		}
	}
	return 0;
}
