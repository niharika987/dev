#include<iostream>
#include<climits>
using namespace std;
int main()
{
	string s;
	cin>>s;
	char c;
	int count=0;
	for(int i=0;i<s.length();)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			while(s[i]>='0' && s[i]<='9')
			{
				count=count*10+s[i]-'0';
				i++;
			}
			for(int j=1;j<=count;j++)
			{
				cout<<c;
			}
			count=0;
		}
		else{
			if(s[i]>='a' && s[i]<='z' && s[i+1]>='a' && s[i+1]<='z')
			cout<<s[i];
			else
			c=s[i];
			
			i++;
		}
		
	}
	return 0;
}
