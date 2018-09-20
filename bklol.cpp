#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s,s1;
	cin>>s;
//cout<<s.length();
	for(int i=0;i<s.length();i++)
	{ 
	
	 if (s[i] > 0 && s[i] <= 9) {


            counter = counter*10 + s[i] - '0';


            continue;


        }

  if(counter)
  {
  	while(counter)
  	{
  		cout<<]
  	}
  }
	
	/*	if((s[i+1]>=97 && s[i+1]<=122) || i==s.length()-1)
		{   if(s[i]!=0)
			s1=s1+s[i];
		}
	else if(x1>1 && x1<=9)
		{ 
			char x=s[i+1];
		int x1=x-'0';
	
		while(x1>0)
			{
			s1=s1+s[i];	
			x1--;
			}
		s[i+1]=x1;
	
		}*/
	}
	cout<<s1;
	return 0;
}
