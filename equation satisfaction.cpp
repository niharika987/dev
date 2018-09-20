#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int x=min(a,b);
	int count=0;
	for(int i=0;i<=x;i++)
	{
		for(int j=0;j<=x;j++)
		{
			int y=(i*i)+j;
			int z=i+(j*j);
			if(y==a && z==b)
			count++;
		}
	}
	cout<<count;
	return 0;
}
