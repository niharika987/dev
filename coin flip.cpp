#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g;
		cin>>g;
		while(g--)
		{
			int i,n,q;
			cin>>i>>n>>q;
			if(i==1)
			{
						int h=n/2;
			int t1=n-h;
			if(q==1)
			cout<<h<<"\n";
			else
			cout<<t1<<"\n";
			}
			else{
				int t1 =n/2;
			int h=n-t1;
			if(q==1)
			cout<<h<<"\n";
			else
			cout<<t1<<"\n";
			}
	
		}
	}
	return 0;
}
