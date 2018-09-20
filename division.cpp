#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x=12;
	for(int i=2;i<=sqrt(x);i++)
	{
	if((x%i)==0)
	{
	cout<<x/i<<i;
		
	}
	
	}
}
