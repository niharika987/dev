#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(360%n==0)
		cout<<"y ";
		else 
		cout<<"n ";
		if(n>360)
		cout<<"n"<<" ";
		else
		cout<<"y"<<" ";
		if( (n*(n+1))/2 <=360 )
		cout<<"y"<<endl;
		else
		cout<<"n"<<endl;
	}
	return 0;
}
