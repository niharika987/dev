#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		long int d;
		string p;
		cin>>d>>p;
		int a[p.size()];
		long long int x=p.length()-1,y=-1,p1=1,dm=0,count=0;
		for(int i=0;i<p.length();i++)
		{
			if(p[i]=='C')
			{
			p1=p1*2;
			a[i]=0;
		
			}
			else
			{
			dm=dm+p1;
			a[i]=1;
			 }

		}
		//if(dm<=d)
	//	cout<<dm<<"\n";
	 int flag=0;
			for(int i=0;i<p.length();i++)
			{
			if()
			
		
			if(x<y || y<0 )
			{
			flag=1;
			//cout<<"YO"<<"\n";
			break;}
		
			}
			
			
			if(flag==1)
			{
			cout<<"Case #"<<k<<": IMPOSSIBLE"<<"\n";
			}
			else{
			cout<<"Case #"<<k<<": "<<count<<"\n";
			}
}
	return 0;
}
