#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long n,b,m;
	long long t1=0;
		cin>>n>>b>>m;
	
		while(n)
		{
		int p=(n+1)/2;
		t1=t1+(p*m);
		n=n-p;
		if(n)
		{
		t1=	t1+b;
		}
		m=m*2;
	
	
			}
			cout<<t1<<endl;
			
			
		
	}
	return 0;
}
