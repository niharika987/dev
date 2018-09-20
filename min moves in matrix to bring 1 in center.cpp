#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a[6][6];
	int x=0,y=0;
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<6;j++)
		{
			cin>>a[i][j];
		if(a[i][j]==1)
	{
	x=i;y=j;
//cout<<j<<y;
}

	}
	}
//	cout<<x<<y;
	int mx=3,my=3;
	int x1=abs(x-mx);
//	cout<<x1;
	int y1=abs(y-my);
//	cout<<y1;
	cout<<x1+y1;
	return 0;
}
