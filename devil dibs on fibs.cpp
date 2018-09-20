#include<bits/stdc++.h>
using namespace std;
# define ne 1000000007
int z=100005;
int fib[100005];
void cal(){
	int a1=0,b1=1;
	fib[0]=a1;
	fib[1]=b1;
	for(int i=2;i<z;i++ )
	fib[i]=((fib[i-1]%ne)+(fib[i-2]%ne))%ne;
	
	//cout<<fib[5];
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
		
		
		if(k==1)
		{
			int sum=0;
			for(int i=0;i<n;i++)
			{
			int fck=((a[i]%ne)*(n%ne))%ne;
			sum=((sum%ne)+(fck%ne))%ne;
			
			}
			cout<<sum<<"\n";
			continue;
		}
		sort(a,a+n);
		sort(b,b+n) ;
		cal();
		int x;
		int a1=a[0],b1=b[0];
		for(int i=2;i<k;i++)
		{
		
			x=((a1%ne)+(b1%ne))%ne;
			a1=b1;
			b1=x;
		//	cout<<x<<endl;		
		}
		//cout<<x<<"\n";
		int sum=x,y=x;
		//cout<<sum<<"\n";
		int m1=fib[k-1];
		for(int i=1;i<n;i++)
		{ //cout<<b[i]-b[0]<<m1;
			int c=((b[i]%ne)-(b[0]%ne))%ne;
			c=((c%ne)*(m1%ne))%ne;
		//
			int s=((y%ne)+(c%ne))%ne;
			//	cout<<s;
			sum=((sum%ne)+(s%ne))%ne;
		//	
		}
		//cout<<sum<<"\n";
		int f=sum;
		for(int i=1;i<n;i++)
		{
			int d=((fib[k-2]%ne)*(n%ne))%ne;
			int fk=((a[i]%ne)-(a[0]%ne))%ne;
			d=((d%ne)*(fk%ne))%ne;
		//	cout<<d;
			int s1=((f%ne)+(d%ne))%ne;
		sum=((sum%ne)+(s1%ne))%ne;
		}
		cout<<sum<<"\n";
 }
	return 0;
} 
