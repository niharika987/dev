#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,v1,v2;
		cin>>n>>v1>>v2;
		double e=0,s=0;
		e=(double)n/v1;
		s=(sqrt(2)*n)/v2;
		
		if(e>s)
		cout<<"Elevator"<<endl;
		else
		cout<<"Stairs"<<endl;
		
	}
	return 0;
}
