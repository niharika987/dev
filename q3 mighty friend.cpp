#include<bits/stdc++.h>
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
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		vector<int> a1;
		vector<int> a2;
		for(int i=0;i<n;i+=2)
		a1.push_back(a[i]);
		
		for(int i=1;i<n;i+=2)
		a2.push_back(a[i]);
		
		int ax=a1.size();
		int ay=a2.size();
		
		sort(a1.begin(),a1.end());
		sort(a2.begin(),a2.end());
		
		int i=0;
		int ax1=ax-1;
		
		while((k--) && (i<a2.size()) && (ax1>=0))
		{
			int x=a1[ax1];
			int y=a2[i];
			//int z;
			//z=x;
			//a1[ax1]=y;
			//a2[i]=z;
			// there may be a case when sum of odd is already greater.
			//so we check that if element of even is greater than odd element ,then we swap.
			//if not then break;
			if(a1[ax1]>a2[i])
			swap(a1[ax1],a2[i]);
			else
			break;
			
			ax1--;
			i++;
		}
		
	    long int sum=0,sum1=0;
		for(int i=0;i<ax;i++)
		sum=sum+a1[i];
		for(int i=0;i<ay;i++)
		sum1=sum1+a2[i];
		if(sum1>sum)
		cout<<"YES"<<"\n";
		else
		cout<<"NO"<<"\n";
		
	}
	return 0;
}
