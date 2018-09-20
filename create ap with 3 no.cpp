#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,c;
		cin>>a>>b>>c;
		long int d1=c-b;
		long int d2=b-a;
if(d1==d2)
{
	cout<<"0"<<"\n";
	continue;
}
	if(abs(d2-d1)%2==0)
	cout<<abs(d2-d1)/2;
	else
	cout<<(abs(d2-d1)/2)+1;
}
	
	return 0;
}
