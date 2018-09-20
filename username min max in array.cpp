#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int count=0;
	int min=a[0],max=a[0];
	for(int i=1;i<n;i++)
	{
		if(min>a[i])
		{
		min=a[i];
		count++;}
		else if(max<a[i])
		{
		max=a[i];
		count++;}
	}
	cout<<count;
	return 0;
}
