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
int flag=0;
sort(a,a+n);
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		 {
			flag=1;
		break;}
	}
	if(flag==1)
	break;
}
if(flag==0)
cout<<"0"<<"\n";
else
{ 

int count=0;
// to know no of distinct moves in an array containing duplicate elements(n), n-1 moves min required to make all elements distinct. 
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]==a[i-1])
		{
			//a[i]=a[i]+a[i-1];
			count++;
		}
	}
	cout<<count<<"\n";
}

		
		}
	return 0;
}
