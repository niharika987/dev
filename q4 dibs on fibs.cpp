#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int j=0;j<n;j++)
		cin>>b[j];
		
		long long int result=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				int fib[max(2,k)];
				 fib[0]=a[i];
				 fib[1]=b[i];
				 for(int m=2;m<k;m++)
				 fib[m]=(fib[m-1]%1000000007)+(fib[m-2]%1000000007);
				 
				 //cout<<fib[k-1]<<endl;
				result=((result%1000000007)+(fib[k-1]%1000000007))%1000000007;
			}
		
		}
		cout<<result<<"\n";
	}
	return 0;
}
