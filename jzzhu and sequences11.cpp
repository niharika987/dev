// on my way...................
#include<iostream>
using namespace std;
	int x,y,x1,y1;
	
int fn (int n)
{
	if(n==y1)
	return y;
	if(n==x1)
	return x;
	
	return fn(n-1)-fn(n-2);
}
using namespace std;
int main()
{

	cin>>x>>y;
	x1=1;
	y1=2;
	int n,k;
	cin>>n;
	k=fn(n);
	if(k<0)
	cout<<k+1000000007;
	else
	cout<<k;
	return 0;
}
