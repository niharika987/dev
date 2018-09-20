#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int x=3;
	if(n==1)
	cout<<x;
	else{
	

	for(int i=0;i<n-1;i++)
	{
		cout<<(3*n)+i<<" ";
	}
	cout<<(3*(n))+(n-1);
	}
	return 0;
}
