#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
	
		long long count=1,count1=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]>=a[i])
			{
			count++; }
			else
			{
			count1=count1+(count*(count-1)/2);
			count=1;	
			}
			
			
			
		}
		
		count1=count1+(count*(count-1)/2);
		
		cout<<count1+n<<endl;
	}
	return 0;
}
