#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	} int count=0;
	for(int i=0;i<n-1;i++)
	{ int y=a[i]%10; 
	int x=a[i+1];
			stringstream ss;
	ss<<x;
	string s1=ss.str();
	char z=s1[0];
	x=z-'0';
	if(x!=y)
	count++;
	}
	cout<<count;
	return 0;
}
