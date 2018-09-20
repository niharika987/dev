#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int i;
for(i=1;i<=t;i++)
	{
		int n,m;
		cin>>m>>n;
		int rx,ry;
		cin>>rx>>ry;
		int n1;
		cin>>n1;
		string s;
		cin>>s;
		int x=0,y=0;
		for(int j=0;j<n1;j++)
		{ if(s[j]=='L')
		x--;
		else if(s[j]=='R')
		x++;
		else if(s[j]=='U')
		y++;
		else if(s[j]=='D')
		y--;
			}
	//	cout<<x<<y;
		if(x==rx && y==ry)
		cout<<"Case "<<i<<": "<<"REACHED"<<endl;
		else if(x<0 || y<0 || x>m || y>n)
		cout<<"Case "<<i<<": "<<"DANGER"<<endl;
		else
		cout<<"Case "<<i<<": "<<"SOMEWHERE"<<endl;
		
	}
	return 0;
}
