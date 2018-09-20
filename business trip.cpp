#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int k;
	cin>>k;
	int a[12];
	for(int i=0;i<12;i++)
	cin>>a[i];
	
	sort(a,a+12);
if(k==0)
cout<<"0";
else
{
int count=0,sum=0;
for(int i=11;i>=0;i--)
{
	if(sum<k)
	{
	sum=sum+a[i];
	count++;}
	else
	break;
}
if(sum<k)
cout<<"-1";
else
cout<<count;
}
	return 0;
}
