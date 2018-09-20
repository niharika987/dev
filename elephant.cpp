#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int x=*min_element(a,a+n);
//	cout<<x;
	int in,c=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
		c++;
	in=i+1;
	}
	}
	if(c==1)
	cout<<in;
	else
	cout<<"Still Rozdil";
	return 0;
}
