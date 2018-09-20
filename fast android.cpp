#include<bits/stdc++.h>
using namespace std;
int m=1000000007;
unsigned long long int power(	unsigned long long int x,unsigned long long int y)
{
	if(y==0)
	return 1;
	unsigned long long int t=power(x,y/2);
	if(y%2==0)
	return ((t%m)*(t%m))%m;
	else
	return ((((t%m)*(t%m))%m)*(x%m))%m;
} 
int main()
{
	unsigned long long int x,y;
	cin>>x>>y;
	unsigned long long int x1;
	unsigned long long int x2;
	x1=power(x,y);
	x2=power(y,x);
	//cout<<x1<<" "<<x2;
	if(x1>x2)
	cout<<">"<<endl;
	else if(x1<x2)
	cout<<"<"<<endl;
	else
	cout<<"="<<endl;
	return 0;
}
