#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int numstu;
		cin>>numstu;
		int r1,r2;
		cin>>r1>>r2;
		int n;
		cin>>n;
		int x=(r2-r1)+1;
		int b=n%x;
		int c;
		if(b==0)
		{
			c=r2;
		}
		else
		{
		
		c=r1+(b-1);
		}
		cout<<c<<"\n";
	}
}

