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
	double a[n],sum=0;
	int count=0,f=0;
	
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		sum=sum+a[i];
			if(a[i]==5)
			count++;
			if(a[i]==2)
			f++;
		}
		double r=sum/n;
	//	cout<<r;
		
		if(r<4.0 || count==0 || f!=0 )
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<endl;
	}
	return 0;
}
		
