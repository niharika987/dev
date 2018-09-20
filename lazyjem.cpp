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
		int n1=n;
		while(n!=0)
		{
			if(n%2==0)
			{
			
	n=n/2;
	t1=t1+(n*m)+b;
	
	n1=n;

}
else{

	n=(n+1)/2;
t1=t1+(n*m)+b;

	n=n1-n;
	n1=n;

} m=m*2;

	
	
	
			}
			cout<<t1-b<<endl;
			
			
		
	}
	return 0;
}
