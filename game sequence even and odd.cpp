#include<bits/stdc++.h>
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
		{
			cin>>a[i];
		}
		
		int count=0,count1=0;
		for(int i=0;i<n;i++)
		{
		if(a[i]%2==0)
		count++;
		else
		count1++;
		}
		// remember n can be 1.
		if(n==1)
		cout<<n<<endl;
		else if(count==1 && count1==1)
		cout<<n<<endl;
		else if(count==n)
		cout<<"1"<<endl;
		else if(count1==n)
		{
			if(n%2==0)
			cout<<"1"<<endl;
			else
			cout<<"2"<<endl;
		}
		else 
		{
			if((count1%2)!=0)
			{
				cout<<"2"<<endl;
			}
			else if((count1%2)==0)
			{
				cout<<"1"<<endl;
			}
		}
		
		
		
		
	}
	return 0;
}
