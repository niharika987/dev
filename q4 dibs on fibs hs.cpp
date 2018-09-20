#include<bits/stdc++.h>
using namespace std;
int z=100005;
int fib[100005];
void cal(){
	int a1=0,b1=1;
	for(int i=2;i<z;i++ )
	fib[i]=fib[i-1]+fib[i-2];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		cin>>b[i];
		
		cal();
		int x;
		for(int i=2;i<k;i++)
		{
			int a1=a[0],b1=b[0];
			x=a1+b1;
			a1=b1;
			b1=x;
			
		}
		int sum=0,y=x;
		int m1=fib[k];
		int r1=a[1]-a[0];
		int c1=b[1]-b[0];
		int r2=abs(b[0]-a[0]);
		int j=1;
		for(int i=0;i<(n*n);i++)
		{	
			if(j==n)
			{
			j=1;
			y=x+(r2*r1);
			}
			
			sum=sum+x;
			y=y+(m1*c1);
			j++;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
