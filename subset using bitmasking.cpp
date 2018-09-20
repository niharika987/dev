#include<bits/stdc++.h>
using namespace std;
int main()
{ int n=3;
	int a[3]={1,2,3};
	int x=pow(2,n);
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i & (1<<j))
			{
				cout<<a[j];
			}
		} cout<<endl;
	}
	return 0;
}
