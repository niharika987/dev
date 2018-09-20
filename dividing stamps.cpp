#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		sum+=x;
	}
	long int s1=0;

	 s1=(n*(2+(n-1)))/2;
	
	//cout<<s1;
	if(sum==s1)
	cout<<"YES"<<"\n";
	else
	cout<<"NO"<<"\n";
	return 0;
}
