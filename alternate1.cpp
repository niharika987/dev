#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.length();
	
		int flag=2,flag1=2; 
		
		if(s[0]!=s[1])
		{flag=0,flag1=0;
		
		if(l%2==0 ) 
		{ 
		int i=0,j=1;
		while(i<l-1)
		{ if(i==l-2)
			break;
     		if(s[i]!=s[i+2])
				{ 	flag1=1;
					break;
				}
			
			i=i+2;
		}
		
			while(j<l)
		{    if(j==l-1)
			break;
     		if(s[j]!=s[j+2])
				{ 	flag=1;
					break;
				}
			
			j=j+2;
		}
		}

else{
int i=0,j=1;
		while(i<l)
		{ if(i==l-1)
			break;
     		if(s[i]!=s[i+2])
				{ 	flag1=1;
					break;
				}
			
			i=i+2;
		}
		
			while(j<l-1)
		{    if(j==l-2)
			break;
     		if(s[j]!=s[j+2])
				{ 	flag=1;
					break;
				}
			
			j=j+2;
		}
			
}		
}
		
		if(flag==0 && flag1==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
