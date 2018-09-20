#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	string s,s1;
	cin>>s;
	int c=0;
	if(k==1)
{
	cout<<"Scube"<<"\n";
	return 0;
}
	else
	{
		for(int i=0;i<s.length();i++)
		{
			
			if(s[i]==s[i+1])
			{
			c=c+2;
			
			s1=s1+s[i];
			if(c==k)
			{
			size_t pos = s.find(s1);
 
	if (pos != std::string::npos)
	{
		s.erase(pos, s.length());
	} 
	i=0;
			}
		}
	
		
	}
}
cout<<s;
	return 0;
	
}
