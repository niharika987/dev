#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int c=0;
		//remove(s.begin(),s.end(),' ');
		int s1[n];
		for(int i=0;i<n;i++)
		s1[i]=0;
		
		if(s[0]=='1' )
			{
			s1[0]=1;
			s1[1]=1;
			}
			
		if(s[n-1]=='1' )
		{
			s1[n-1]=1;
			s1[n-2]=1;
		}
	
		for(int i=1;i<n-1;i++)
		{
			
		 if(s[i]=='1' )
			 {
			 	s1[i]=1;
			 	s1[i-1]=1 ;
			 	s1[i+1]=1;
			 }
		}
	
	for(int i=0;i<n;i++)
	{
		if(s1[i]==1)
		c++;
	}
		cout<<n-c<<endl;
	
	}
	return 0;
}
