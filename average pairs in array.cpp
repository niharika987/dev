s#include<bits/stdc++.h>
 
using namespace std;

int hsh(int a[],int n)
{ 	int count=0;   
	 unordered_set<int> s;
	for(int i=0;i<n;i++)
	s.insert(a[i]);
	
	int i=0,j=i+1;
	while(j<n)
	{
	int x=a[i]+a[j];
	if(x%2==0)
	{
	if(s.find(x/2)!=s.end())
			count++;
	}		if(j==n-1 && i<n)
			{
				i++;
				j=i+1;
			}
			else if(i==n-1 && j==n-1)
			break;
			else{
				j++;
			}
	}
	return count;
}
//int hsh[100000];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ //memset(hsh,0,sizeof(hsh));
		int n;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
	int x=hsh(a,n);
	cout<<x<<"\n";
	}
	return 0;
} 
