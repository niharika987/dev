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
	int f[n];
	int s[n];
	for(int i=0;i<n;i++)
		cin>>f[i];
	for(int i=0;i<n;i++)
		cin>>s[i];
		int c[n];
	memcpy(c,s,sizeof(c));
		reverse(c,c+n);
	
		int flag=0,flag1=0;
		for(int i=0;i<n;i++)
		{
			if(f[i]>s[i])
			{
			flag=1;
			break;}
			
		
			
		}
			for(int i=0;i<n;i++)
		{
			
			if(f[i]>c[i])
			{ 
			flag1=1;
			break; }
			
		}
		if(flag==0 && flag1==0)
		cout<<"both"<<"\n";
		else if(flag==0 && flag1==1)
		cout<<"front"<<"\n";
		else if(flag==1 && flag1==0)
		cout<<"back"<<"\n";
		else if(flag==1 && flag1==1)
		cout<<"none"<<"\n";
	}
	
		return 0;
}
