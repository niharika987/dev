#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i=0;
	int flag=0;
	while(i!=s.length())
	{
		if(s[i]=='1' && s[i+1]!='4')
	{
		i++;
	//cout<<i;
	}
		else if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
		{
		i=i+3;
//	cout<<i;
	}
		else if(s[i]=='1' && s[i+1]=='4')
		{
		i=i+2;
	//	cout<<i;
		}
	
		else
	{
		flag=1;
		break;
	}
		
	}
	if(flag==1)
	cout<<"NO";
	else
	cout<<"YES";
	
	return 0;
}
