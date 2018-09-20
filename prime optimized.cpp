#include<iostream>
#include<math.h>
#define ll long int
using namespace std;

 
int main()
{
	ll n;

	cin>>n;
	for(int i=2;i<=n;i++)
	{ 	int flag=0;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
			flag=1;
			break;}
		}
		
		if(!flag)
		cout<<i<<" ";
		
	}
	
	return 0;
}
