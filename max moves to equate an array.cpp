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
	int m=*max_element(a,a+n);
	int b[n];
	for(int i=0;i<n;i++)
	b[i]=m-a[i];
	
	sort(b,b+n,greater<int>());
	int count=0;
	for(int i=0;i<n-1;i++)
	{	count+=b[i];
		if(b[i]==b[i+1])
			i=i+2;
	
	}
	cout<<count;
	return 0;
}
