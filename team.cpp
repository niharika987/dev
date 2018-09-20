#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int q;
	cin>>q;
		int count=0,count1=0;
for(int i=0;i<q;i++)
	{
	
	int x;
cin>>x;
int l=0,r=n-1;
int mid;
while(l<=r)
{mid=(l+r)/2;
	
	if(x<a[mid])
	r=mid-1;
	else
	l=mid+1;
	
	if(a[mid]==x)
	break;
}
cout<<mid;
count=count+mid+1;
count1=count1+(n-mid);
cout<<count<<" "<<count1<<endl;
}
cout<<count<<" "<<count1;

	return 0;
}
