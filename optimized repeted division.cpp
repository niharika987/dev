#include<iostream>
#include<math.h>
using namespace std;
int main()
{

		int t;
		cin>>t;
		while(t--)
		{
			int n,q;
			cin>>n>>q;
			int d[n];
		unsigned long long p=1;
			for(int i=0;i<n;i++)
			{
			cin>>d[i];
	p=p*d[i];
}
int m;
for(int i=0;i<q;i++)
{
	cin>>m;
	if(p!=0)
cout<<m/p<<" ";
else
cout<<"0"<<" ";
}
		cout<<"\n";
		
		}

	
	return 0;
}
